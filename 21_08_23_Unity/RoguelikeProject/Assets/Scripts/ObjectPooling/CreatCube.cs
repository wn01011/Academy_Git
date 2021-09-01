using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CreatCube : MonoBehaviour
{
    void Start()
    {
        StartCoroutine(CreateCube());
    }
    IEnumerator CreateCube()
    {
        while(true)
        {
            yield return null;
            GameObject t_object = ObjectPoolingManager.instance.GetQueue();
            t_object.transform.position = transform.position;
        }
    }
}
