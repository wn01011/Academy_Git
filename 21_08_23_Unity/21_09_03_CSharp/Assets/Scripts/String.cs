using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text;
public class String : MonoBehaviour
{
    //����(Character) 
    //���ڿ�(String)
    public char c = 'a';
    public string str = "Test"; //���ڿ��� Class�̴�.
    void Start()
    {
        Debug.Log("length : " + str.Length + "Split : " + str.Split('e') + "Replace : " + str.Replace('T', 'B') + "Contain : " + str.Contains("Test") + str.Contains("Best"));

        /////////////////////
        //System.Text
        StringBuilder sb = new StringBuilder();
        sb.Append("abc");
        sb.Append("bcd");
        sb.Append("cde");
        sb.Append("def");
        sb.Clear();
        Debug.Log(sb.ToString());
    }

    void Update()
    {
        
    }
}
