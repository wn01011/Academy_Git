using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMove : MonoBehaviour
{
    [SerializeField] private Transform playerTr = null;
    private Vector3 offset;
    void Start()
    {   if(playerTr)
            offset = transform.position - playerTr.position;
    }

    void Update()
    {
        if(playerTr)
            transform.position = Vector3.Lerp(transform.position,playerTr.position + offset, 2 * Time.deltaTime);
    }
}
