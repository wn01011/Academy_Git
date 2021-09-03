using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Structure : MonoBehaviour
{
    [System.Serializable]public struct SSample
    {
        public int i;
        public float f;
    }
    public SSample sample = new SSample();

    public class CSample
    {
        public int i;
    }


    private void Start()
    {
        // Call-By-Value
        // Call-By-Reference
        SSample a = new SSample();
        a.i = 100;
        SSample b = a;
        b.i = 1;
        Debug.Log("a.i : " + a.i);
        Debug.Log("b.i : " + b.i);
        //res) a.i : 100, b.i : 1

        /////////////////////////////

        CSample c = new CSample();
        c.i = 100;
        CSample d = c;
        d.i = 1;
        Debug.Log("c.i : " + c.i);
        Debug.Log("d.i : " + d.i);
    }
}
