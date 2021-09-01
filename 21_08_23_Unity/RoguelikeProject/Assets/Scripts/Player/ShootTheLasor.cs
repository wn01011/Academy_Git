using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShootTheLasor : MonoBehaviour
{
    public GameObject laser;
    public void Fire()
    {
        GameObject myLaser = Instantiate(laser, transform.position, transform.rotation);
        Debug.Log("∑π¿Ã¡Æ πﬂΩŒ!");
    }
}
