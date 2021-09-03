using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataType : MonoBehaviour
{
    // �ڷ���(DataType)
    public bool b = true;
    public int i = 0;
    public float f = 0.0f;
    public double d = 0.0;
    Object o;

    private int[] iArr = new int[3]; //C#���� �⺻�ڷ����� ������ ��� �ڷ����� ������ �����Ҵ��� ������Ѵ�. (C#�� ��� Ŭ������ �̷�����ֱ� ����)
    private void Start()
    {
        Debug.Log("int Size : " + sizeof(int) + "Bytes");
        d = (double)i / 5; //(�ڷ����� �°�)
        //b == true ? "true" : "false";
        Debug.Log(b.ToString() + b);
        
        ////////////////////////////////////////////////////////////////////

        int[] staticArr = { 1, 2, 3 }; // ��� �������� ������ �����Ҵ��� �Ǿ��ִ�.
        int[] dynamicArr = new int[3] { 1, 2, 3 };
        staticArr[1] = 2;
        dynamicArr[1] = 2;

        //Debug.Log("staticArr Size : " + sizeof(staticArr) + "Byte"); //Csarp���� �迭�� ũ�⸦ sizeof�� ���� �� ����.
        //Debug.Log("dynamicArr Size : " + sizeof(dynamicArr) + "Byte");
        Debug.Log("StaticArr.Length : " + staticArr.Length);

        int[,] arr2d = new int[2, 3] { { 11,12,13 },{ 21,22,23 } };//multi-dimention
        Debug.Log("ary2d.Length : " + arr2d.Length);
        int[][] arr2d2 = new int[2][]; 
        // c++�� ��� ��������Ѵ��� �˷�����ؼ� [][3] �� �´�. ������ c#�� �� ���� �����Ҵ��ؼ� ĭ�� �����־��ϳ��� ����������ؼ� [2][]�� �´�.

}




}
