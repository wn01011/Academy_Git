using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootTheBullet : MonoBehaviour
{
    public GameObject bullet;
    private float fireDelay = 1.0f;
    private void Update()
    {
        fireDelay -= Time.deltaTime;
    }
    public void Fire()
    {
        if (fireDelay > 0) return;
        fireDelay = 1.0f;
        GameObject myBullet = Instantiate(bullet, transform.position, transform.rotation);
        myBullet.transform.rotation *= Quaternion.AngleAxis(90, Vector3.right);
    }
}
