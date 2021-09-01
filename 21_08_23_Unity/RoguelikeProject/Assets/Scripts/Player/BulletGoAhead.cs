using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletGoAhead : MonoBehaviour
{
    private float speed = 100.0f;
    
    private void Start()
    {
        Destroy(gameObject, 1.0f);
    }
    void Update()
    {
        transform.position += transform.up * speed * Time.deltaTime;    
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Wall") || other.CompareTag("Obstacle"))
        {
            Destroy(gameObject);
        }
    }
}
