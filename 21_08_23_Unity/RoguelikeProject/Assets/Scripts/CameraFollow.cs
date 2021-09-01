using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollow : MonoBehaviour
{
    private Vector3 offset = new Vector3(0f, 20f, -15f);
    public Transform player;

    void FixedUpdate()
    {
        FollowPlayer();
    }
    private void FollowPlayer()
    {
        Vector3 myPos = player.position + offset;
        transform.position = Vector3.Lerp(transform.position, myPos , 5 * Time.deltaTime);
    }
}
