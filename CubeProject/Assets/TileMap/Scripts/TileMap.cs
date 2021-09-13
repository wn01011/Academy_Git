using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileMap : MonoBehaviour
{
    [SerializeField] private GameObject tilePrefab = null;
    

    private int[] map = new int[]
    {
        24, 25, 25, 25, 26,
        16, 17, 17, 1, 18,
        16, 17, 17, 17, 18,
        8, 9, 9, 9, 10
    };
    public enum EEvent { W = 1 }
    //Layer
    private int[] eventMap = new int[]
    {
        //0: Road, 1: Wall, 2: start Point
        0, 0, 0, 0, 0,
        0, 2, 0, 1, 0,
        0, 0, 0, 0, 0,
        0, 0, 0, 0, 0
    };

    private int mapWidth = 5;
    private int mapHeight = 4;
    private int tileW = 1;
    private int tileH = 1;

    private List<GameObject> tileList = new List<GameObject>();

    private void Awake()
    {
        BuildMap();
    }

    private void BuildMap()
    {
        float startX = -((tileW * mapWidth) * 0.5f);
        float startY = ((tileH * mapHeight) * 0.5f) - mapHeight;
        float tileWHalf = tileW * 0.5f;
        float tileHHalf = tileH * 0.5f;

        for(int i = 0;i <map.Length; ++i)
        {
            GameObject myTile = Instantiate(tilePrefab, new Vector3(startX + (tileW * i % mapWidth ) + tileWHalf,
                                            startY + tileH * (4-(i/ mapWidth)) - tileHHalf,0.0f), Quaternion.identity);
            myTile.name = "Tile_" + i;
            myTile.transform.parent = transform;

            Tile tile = myTile.GetComponent<Tile>();
            tileList.Add(myTile);
            tile.SetTileWithIndex(map[i]);
        }
    }
    public Vector3 GetStartPosition()
    {
        int startIndex = GetStartPositionIndex();
        if (startIndex == -1)
            Debug.LogError("Start Point is not found!");

        return tileList[startIndex].transform.position;
    }
    public int GetStartPositionIndex()
    {
        for(int i=0; i< eventMap.Length; ++i)
        {
            if (eventMap[i] == 2) return i;
        }
        return -1;
    }

    public bool CheckMovable(int _curIdx, Player.Edir _dir)
    {
        int checkIdx = _curIdx;
        switch (_dir)
        {
            case Player.Edir.Left:
                if ((_curIdx -1) % mapWidth != 0)
                    _curIdx -= 1; 
                break;
            case Player.Edir.Right:
                if ((_curIdx + 1) % mapWidth != mapWidth - 1) 
                _curIdx += 1;
                break;
            case Player.Edir.Up:
                if ((_curIdx-mapWidth) / mapWidth != 0)
                _curIdx -= mapWidth;
                break;
            case Player.Edir.Down:
                if ((_curIdx+mapWidth) / mapWidth != mapHeight - 1)
                _curIdx += mapWidth;                   
                break;
        }
        if (checkIdx == _curIdx) return false;
        return eventMap[checkIdx] != 1;
    }

    //out ref
    //함수 외부의 값을 함수 내부에서 바꿀 수 있다.(C의 포인터 개념)
    //out은 무조건 함수 내부에서 값을 지정해줘야됨.
    //ref는 내부에 없어도 오류가 나지 않는다.
    public void MoveToDir(ref int _curIdx, Player.Edir _dir)
    {
        switch (_dir)
        {
            case Player.Edir.Left:
                _curIdx -= 1;
                break;
            case Player.Edir.Right:
                _curIdx += 1;
                break;
            case Player.Edir.Up:
                _curIdx -= mapWidth;
                break;
            case Player.Edir.Down:
                _curIdx += mapWidth;
                break;
        }

    }
    public Vector3 GetPositionFromIndex(int _idx)
    {
        return tileList[_idx].transform.position;
    }
}
