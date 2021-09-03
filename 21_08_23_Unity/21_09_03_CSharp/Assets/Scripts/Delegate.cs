using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Delegate : MonoBehaviour
{
    #region Delegate Section
    //�Լ� ������(Function Pointer)
    //�븮��(Delegate)
    public delegate void MyDelegate();
    private MyDelegate mydelegate = null;
    #endregion
    void Start()
    {
        mydelegate += Func;
        mydelegate += Foo;
        mydelegate += Example;
        //if(mydelegate != null) mydelegate();
        mydelegate.Invoke();
    }
    /// <summary>
    /// �� Function
    /// </summary>
    #region Func Section
    public void Func()
    {
        Debug.Log("Func");

    }
    public void Foo()
    {
        Debug.Log("Foo");

    }
    public void Example()
    {
        Debug.Log("Example");
    }
    #endregion
    
}
