using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Handmade : MonoBehaviour
{
    private void Awake()
    {
        // 메쉬필터 추가
        MeshFilter mf = gameObject.AddComponent<MeshFilter>();
        if (mf == null) mf = GetComponent<MeshFilter>();

        // 메쉬 동적할당
        Mesh mesh = new Mesh();
        mesh.name = "MyQuad";

        // 버텍스 버퍼 준비(Vertex Buffer)
        // v0 --- v1
        // |   c  |
        // v2 --- v3
        // v4 --- v5
        // |   c  |
        // v6 --- v7
       
        Vector3 v0 = new Vector3(-0.5f, 0.5f, 0.5f);
        Vector3 v1 = new Vector3(0.5f, 0.5f, 0.5f);
        Vector3 v2 = new Vector3(-0.5f, -0.5f, 0.5f);
        Vector3 v3 = new Vector3(0.5f, -0.5f, 0.5f);
        Vector3 v4 = new Vector3(-0.5f, 0.5f, -0.5f);
        Vector3 v5 = new Vector3(0.5f, 0.5f, -0.5f);
        Vector3 v6 = new Vector3(-0.5f, -0.5f, -0.5f);
        Vector3 v7 = new Vector3(0.5f, -0.5f, -0.5f);
        
        Vector3[] vertices = new Vector3[8]
        {
            v0,v1,v2,v3,v4,v5,v6,v7
        };
        mesh.vertices = vertices;
        //3175//2367//1054//0246
        // 인덱스 버퍼 준비(Index Buffer)
        // Indices / CW(Clock-Wise)
        int[] trianlges = new int[36]
        {
            0,2,1,   
            1,2,3,    
            5,1,7,
            1,3,7,
            4,5,6,
            5,7,6,
            0,4,2,
            4,6,2,
            3,2,6,
            3,6,7,
            0,1,4,
            1,5,4
        };
        mesh.triangles = trianlges;

        // UV Coordinate
        Vector2[] uv = new Vector2[8]
        {
            new Vector3(0f, 1f,0f),
            new Vector3(1f, 1f,0f),
            new Vector3(0f, 0f,0f),
            new Vector3(1f, 0f,0f),
            new Vector3(0f, 1f,1f),
            new Vector3(1f, 1f,1f),
            new Vector3(0f, 0f,1f),
            new Vector3(1f, 0f,1f)
        };
       
        mesh.uv = uv;

        // 법선벡터(Normal Vector)
        Vector3[] normals = new Vector3[8]
        {
            new Vector3(0f, 0f, -1f),
            new Vector3(0f, 0f, -1f),
            new Vector3(0f, 0f, -1f),
            new Vector3(0f, 0f, -1f),
            new Vector3(0f, 0f, -1f),
            new Vector3(0f, 0f, -1f),
            new Vector3(0f, 0f, -1f),
            new Vector3(0f, 0f, -1f)
        };
        mesh.normals = normals;

        mf.mesh = mesh;

        ///////////////////////////////////////////////////

        MeshRenderer mr = gameObject.AddComponent<MeshRenderer>();
        Material mat = new Material(Shader.Find("Standard"));
        mat.name = "MyStandard";
        //mat.color = new Color(1f, 1f, 0f);

        //Texture2D tex = Resources.Load<Texture2D>("Textures\\T_Mario");
        //Texture2D tex = (Texture2D)Resources.Load("Textures\\T_Mario");
        // dynamic_cast<Texture2D> / static_cast
        Texture2D tex = Resources.Load("Textures\\T_Ghost") as Texture2D;
        mat.mainTexture = tex;

        mr.material = mat;
    }
}
