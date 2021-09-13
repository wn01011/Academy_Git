using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    private int imageWidth = 511;
    private int imageHeight = 256;
    private int colCnt = 8;
    private int rowCnt = 4;

    private float tileWidth = 0f;
    private float tileHeight = 0f;
    private float tileU = 0f;
    private float tileV = 0f;

    private MeshFilter mf = null;

    private void Awake()
    {
        tileWidth = (float)imageWidth / colCnt;
        tileHeight = (float)imageHeight / rowCnt;
        tileU = tileWidth / imageWidth;
        tileV = tileHeight / imageHeight;

        mf = GetComponent<MeshFilter>();
    }
    public void SetTileWithIndex(int _idx)
    {
        int col = _idx % colCnt;
        int row = _idx / colCnt;
        float startU = col * tileU;
        float startV = row * tileV;
        mf.mesh.uv = new Vector2[]
        {
            //0 -- 1
            //|    |
            //2 -- 3
            new Vector2(startU, startV),
            new Vector2(startU + tileU, startV),
            new Vector2(startU, startV + tileV),
            new Vector2(startU + tileU, startV + tileV)
        };

    }
}
