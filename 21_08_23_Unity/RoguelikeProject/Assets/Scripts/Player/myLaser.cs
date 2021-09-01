using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class myLaser : MonoBehaviour
{
    
    Vector3 power = new Vector3(0, 0, 100f);
    Vector3 startPos = Vector3.zero;
    private void Start()
    {
        startPos = transform.position;
    }
    void LateUpdate()
    {
        Bigger();
    }
    private void Bigger()
    {
        transform.localScale += power * Time.deltaTime;
        Vector3 expandDir = transform.forward;
        transform.position = startPos + expandDir * (0.5f * transform.localScale.z);
        StartCoroutine(DestroyObject());
    }
    IEnumerator DestroyObject()
    {
        yield return new WaitForSeconds(3f);
        Destroy(gameObject);
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Obstacle"))
        {
            Destroy(other.gameObject);
        }
    }
}
