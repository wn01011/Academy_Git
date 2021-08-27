using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follow : MonoBehaviour
{
    [SerializeField] private GameObject targetGo = null;
    private float speed = 8.0f;

    private void FixedUpdate()
    {
        transform.LookAt(targetGo.transform, Vector3.up);
    }
    private void Update()
    {
        if (targetGo == null) return;
        Vector3 targetPos = targetGo.transform.position;
        Vector3 myPos = transform.position; // this.gameObjcet.transform.position;
        Vector3 dir = targetPos - myPos;
        dir.Normalize();
        transform.Translate(dir * speed * Time.deltaTime); 
        // transform.position = transform.position + (dir * speed * Time.deltaTime);
    }
}
