using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PlayerController : MonoBehaviour
{
    [Range(0f, 10f)]
    [SerializeField] private float speed = 10.0f;
    private float rotSpeed = 30.0f;
    //Property(Getter/Setter)
    public float Speed
    {
        set { speed = value; }
        get { return speed; }
    }
    Dictionary<KeyCode, Action> keyDictionary;
    private void Start()
    {
        keyDictionary = new Dictionary<KeyCode, Action>
        {
            {KeyCode.A, KeyDown_A },
            {KeyCode.D, KeyDown_D },
            {KeyCode.W, KeyDown_W },
            {KeyCode.S, KeyDown_S }
        };
    }
    private void KeyDown_AA(Vector3 _dir)
    {
        //Translate는 Local 좌표 기준으로 움직이게 해줌
        transform.Translate(_dir * speed * Time.deltaTime);
    }

    private void Update()
    {
        //PlayerMoves();
        PlayerMove();
        PlayerRotate();
    }

    private void PlayerMove()
    {
        if (Input.anyKey)
        {
            foreach (var dic in keyDictionary)
            {
                if (Input.GetKey(dic.Key))
                {
                    dic.Value();
                }
            }
        }
    }
    private void KeyDown_A()
    {
        transform.position += -Vector3.right * speed * Time.deltaTime;
    }
    private void KeyDown_D()
    {
        transform.position += Vector3.right * speed * Time.deltaTime;
    }
    private void KeyDown_W()
    {
        transform.position += Vector3.forward * speed * Time.deltaTime;
    }
    private void KeyDown_S()
    {
        transform.position += -Vector3.forward * speed * Time.deltaTime;
    }
    private void PlayerMoves()
    {
        if(Input.GetKey(KeyCode.W))
        {
            KeyDown_AA(Vector3.forward);
        }
        if (Input.GetKey(KeyCode.S))
        {
            KeyDown_AA(Vector3.back);
        }
        if (Input.GetKey(KeyCode.D))
        {
            KeyDown_AA(Vector3.right);
        }
        if (Input.GetKey(KeyCode.A))
        {
            KeyDown_AA(Vector3.left);
        }
    }
    private void PlayerRotate()
    {
        if (Input.GetKey(KeyCode.Q))
        {
            transform.Rotate(0.0f, -rotSpeed * Time.deltaTime, 0.0f);
        }
        if (Input.GetKey(KeyCode.E))
        {
            transform.Rotate(0.0f, rotSpeed * Time.deltaTime, 0.0f);
        }

    }

}

       