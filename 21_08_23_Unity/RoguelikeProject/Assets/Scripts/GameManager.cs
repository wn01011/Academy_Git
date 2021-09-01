using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public GameObject floorPrefab;
    public GameObject wallPrefab;
    public GameObject doorPrefab;
    public GameObject obstaclePrefab;

    void Start()
    {
        FloorGenerator();
        WallGenerator();
        DoorGenerator();
        ObstacleGenerator();
    }
    
    private void FloorGenerator()
    {
        for(int i =-5; i <= 5; i++)
        {
            for (int j = -5; j <= 5; j++)
            {
                Vector3 floorPos = new Vector3(i*10, 0, j*10);
                Instantiate(floorPrefab, floorPos, Quaternion.identity);
            }
        }
    }
    private void WallGenerator()
    {
        //for (int i = 0; i < 2; i++)
        //{
        //    Vector3 wallPos = new Vector3(0f, 2.5f, -50f + 100f * i) ;
        //    Instantiate(wallPrefab, wallPos, Quaternion.identity);
        //}
        //for (int i = 0; i < 2; i++)
        //{
        //    Vector3 wallPos = new Vector3(-50f + 100*i, 2.5f, 0f);
        //    GameObject mywall = Instantiate(wallPrefab, wallPos, Quaternion.identity);
        //    mywall.transform.rotation *= Quaternion.AngleAxis(90, Vector3.up);
        //}
        
        for(int i =0; i<4; i++)
        {
            GameObject mywall = Instantiate(wallPrefab, Vector3.zero, Quaternion.identity);
            mywall.transform.position = new Vector3(50f, 2.5f, 0f);
            //float len = mywall.transform.position.magnitude;
            for (int j = i; j < 4; j++)
            {
                Vector3 dirVec = mywall.transform.position;
                Quaternion rotQua = Quaternion.Euler(0f,90f,0f);
                Vector3 newdir = rotQua * dirVec;
                //Vector3 newdir = Vector3.Cross(dirVec, Vector3.up);
                //Vector3.RotateTowards()
                //newdir.Normalize(); newdir *= len;
                mywall.transform.position = newdir;
            }
                mywall.transform.rotation *= Quaternion.AngleAxis(90 * (i+1), Vector3.up);
        }
    }
    private void DoorGenerator()
    {
        float doorPos_x = 0; 
        int randomNum = 0;
        Vector3 doorPos;
        randomNum = Random.Range(0, 4);
        doorPos_x = Random.Range(-45f, 45f);
        
        switch (randomNum)
        {
            case 0: // left
                doorPos = new Vector3(-45f, 3, doorPos_x);
                break;
            case 1: // right
                doorPos = new Vector3(45f, 3, doorPos_x);
                break;
            case 2: // top
                doorPos = new Vector3(doorPos_x, 3, 45f);
                break;
            case 3: // bottom
                doorPos = new Vector3(doorPos_x, 3, -45f);
                break;
            default:
                doorPos = Vector3.zero;
                break;
        }
        GameObject myDoor = Instantiate(doorPrefab,doorPos,transform.rotation);
        if(randomNum == 0 || randomNum == 1)
            myDoor.transform.rotation *= Quaternion.AngleAxis(90f, Vector3.up);
    }
    private void ObstacleGenerator()
    {
        int ranNum = 0;
        ranNum = Random.Range(100, 200);
        for (int i = 0; i < ranNum; i++)
        {
            Vector3 obsPos = Vector3.zero;
            float randomScale_x = 0; float randomScale_y = 0; float randomScale_z = 0;
            randomScale_x = Random.Range(0.5f, 10.0f);
            randomScale_y = Random.Range(0.5f, 10.0f);
            randomScale_z = Random.Range(0.5f, 10.0f);
            float randomPos_x = 0; float randomPos_z = 0;
            randomPos_x = Random.Range(-40.0f, 40.0f);
            randomPos_z = Random.Range(-40.0f, 40.0f);
            if (randomPos_x < 10f && randomPos_x > -10 && randomPos_z < 10f && randomPos_z > -10)
                continue;
            obsPos = new Vector3(randomPos_x, randomScale_y * 0.5f, randomPos_z);
            GameObject myObstacle = Instantiate(obstaclePrefab, obsPos, Quaternion.identity);
            myObstacle.transform.localScale = new Vector3(randomScale_x, randomScale_y, randomScale_z);
        }
    }
}
