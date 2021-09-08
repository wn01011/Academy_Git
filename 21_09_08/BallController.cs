using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallController : MonoBehaviour
{
    private float speed = 400.0f;
    private Rigidbody ballRb;
    private Vector3 myDir;
    void Start()
    {
        ballRb = this.gameObject.GetComponent<Rigidbody>();
        myDir = new Vector3(Random.Range(-20f, 20f), 0, Random.Range(-20f, 20f));
        myDir.Normalize();
        ballRb.velocity = myDir * speed * Time.deltaTime;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.CompareTag("Floor")) return;

        float myCos = Vector3.Dot(-myDir, collision.contacts[0].normal);
        float myAngle = Mathf.Acos(myCos);
        myAngle *= Mathf.Rad2Deg;

        float xToNewXCos = Vector3.Dot(Vector3.forward, collision.contacts[0].normal);
        float xToNewXSin = Mathf.Sqrt(1 - Mathf.Pow(xToNewXCos, 2));
        Vector3 newXVector = xToNewXCos * Vector3.right - xToNewXSin * Vector3.forward;
        if(collision.contacts[0].normal.x < 0)
        {
            newXVector = new Vector3(newXVector.x, 0, -newXVector.z);
        }
        //�� �����ʸ� ���� �߸� ���ñ�.. ���� ��(0,0,1), ���� ��(0,0,-1)
        //Debug.Log(collision.contacts[0].normal); // normal�� ���� Ȯ��
        Debug.Log(newXVector);

        float lastAngle = Vector3.Dot(-myDir, newXVector);
        lastAngle = Mathf.Rad2Deg * Mathf.Acos(lastAngle);
        //���ο�X`���Ϳ� -myDir ������ ���� 90���ϸ� -1
        if (lastAngle < 90f)
            myAngle *= -1;
        myDir = Quaternion.AngleAxis(2 * myAngle, Vector3.up) * -myDir;
        ballRb.velocity = myDir * speed * Time.deltaTime;
    }
}
