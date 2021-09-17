using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    Vector3 destPoint = Vector3.zero;
    private float speed = 10.0f;
    private bool isMove = false;
    private Collider itemDrop = null;

    private ItemHolder itemHolder = null;
    void Start()
    {
        itemHolder = GetComponentInChildren<ItemHolder>();
    }

    void Update()
    {
        //Picking / Ray Casting
        if(Input.GetMouseButtonDown(0))
        {
            if(Picking(ref destPoint))
            {
                isMove = true;
            }
        }
        if(isMove)
        {
            Moving(destPoint);
        }
       
        if(Input.GetKeyDown(KeyCode.D))
        {
            itemHolder.Dropitem(itemDrop) ;
        }
    }

    private bool Picking(ref Vector3 _destPoint)
    {
        Vector3 mousePos = Input.mousePosition;
        //Vector3 viewPos = Camera.main.ScreenToViewportPoint(mousePos);
        //Vector3 worldPos = Camera.main.ViewportToWorldPoint(viewPos);

        //ī�޶󿡼� �������� ���. screenspace�� ������������
        Ray ray = Camera.main.ScreenPointToRay(mousePos);

        RaycastHit rayHit;
        //out �Լ� �ܺ��� ���� �ٲ� �� �ְ��� ref(�ȹٲ㵵��)
        if (Physics.Raycast(ray, out rayHit))
        {
            _destPoint = new Vector3(rayHit.point.x, 0.5f, rayHit.point.z);
            return true;
        }
        return false;
    }
    
    private void Moving(Vector3 _dest)
    {
        Vector3 myDir = _dest - transform.position;
        myDir = new Vector3(myDir.x, 0, myDir.z);
        if (myDir.sqrMagnitude < 0.5f)
        {
            isMove = false;
            return;
        }
        myDir.Normalize();

        transform.position = transform.position + (myDir * speed * Time.deltaTime);
        RotateToMouse(_dest);
    }

    private void RotateToMouse(Vector3 _dest)
    {
        //Vector3 myDir = _dest - transform.position;
        //myDir = new Vector3(myDir.x, 0, myDir.z);
        //transform.forward = myDir;
        Vector3 myDir = _dest - transform.position;
        myDir.y = 0f;
        myDir.Normalize();
        float angle = Mathf.Atan2(myDir.z, myDir.x);
        angle = 90f + -angle * Mathf.Rad2Deg;
        transform.rotation = Quaternion.Euler(0f, angle, 0f);
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Item"))
        {
            itemHolder.SetItem(other.transform);
        }
        itemDrop = other;
    }
}
