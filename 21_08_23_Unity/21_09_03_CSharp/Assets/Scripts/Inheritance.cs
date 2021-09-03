using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inheritance : MonoBehaviour
{
    public class Parent : MonoBehaviour
    {

        protected virtual void Start() { }
        public virtual void Func()
        {
            //input virtual to use overriding in child
        }

        public void Func(int _val)
        {
            //Function Overloading
        }
    }

    public class Child : Parent // �տ� private public�� �Ⱥٿ��� ����̵ȴ�.
    {
        protected override void Start()
        {
            base.Start();
            this.Start();
            //Parent::Start();
        }
        public override void Func()
        {
            // Overriding
        }
    }

}
