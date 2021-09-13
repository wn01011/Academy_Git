using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public enum Edir { Left, Right, Up, Down }
    //Ä¿ÇÃ¸µ(Coupling)
    [SerializeField] private TileMap tilemap = null;
    private int curIndex = -1;

    private void Start()
    {
        Vector3 startPos = tilemap.GetStartPosition();
        transform.position = startPos;

        curIndex = tilemap.GetStartPositionIndex();
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.LeftArrow))
        {
            MoveWithDir(Edir.Left);
        }
        else if(Input.GetKeyDown(KeyCode.RightArrow))
        {
            MoveWithDir(Edir.Right);
        }
        else if(Input.GetKeyDown(KeyCode.UpArrow))
        {
            MoveWithDir(Edir.Up);
        }
        else if(Input.GetKeyDown(KeyCode.DownArrow))
        {
            MoveWithDir(Edir.Down);
        }
    }
    private void MoveWithDir(Edir _dir)
    {
        if(tilemap.CheckMovable(curIndex, _dir))
        {
            tilemap.MoveToDir(ref curIndex, _dir);
            transform.position = tilemap.GetPositionFromIndex(curIndex);
            Debug.Log(curIndex);
        }
    }
}
