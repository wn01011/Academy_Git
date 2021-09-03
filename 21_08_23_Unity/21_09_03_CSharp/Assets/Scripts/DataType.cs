using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataType : MonoBehaviour
{
    // 자료형(DataType)
    public bool b = true;
    public int i = 0;
    public float f = 0.0f;
    public double d = 0.0;
    Object o;

    private int[] iArr = new int[3]; //C#에서 기본자료형을 제외한 모든 자료형을 쓰려면 동적할당을 해줘야한다. (C#은 모두 클래스로 이루어져있기 떄문)
    private void Start()
    {
        Debug.Log("int Size : " + sizeof(int) + "Bytes");
        d = (double)i / 5; //(자료형의 승격)
        //b == true ? "true" : "false";
        Debug.Log(b.ToString() + b);
        
        ////////////////////////////////////////////////////////////////////

        int[] staticArr = { 1, 2, 3 }; // 사실 생략했을 뿐이지 동적할당이 되어있다.
        int[] dynamicArr = new int[3] { 1, 2, 3 };
        staticArr[1] = 2;
        dynamicArr[1] = 2;

        //Debug.Log("staticArr Size : " + sizeof(staticArr) + "Byte"); //Csarp에선 배열은 크기를 sizeof로 구할 수 없다.
        //Debug.Log("dynamicArr Size : " + sizeof(dynamicArr) + "Byte");
        Debug.Log("StaticArr.Length : " + staticArr.Length);

        int[,] arr2d = new int[2, 3] { { 11,12,13 },{ 21,22,23 } };//multi-dimention
        Debug.Log("ary2d.Length : " + arr2d.Length);
        int[][] arr2d2 = new int[2][]; 
        // c++는 몇개씪 끊어줘야한는지 알려줘야해서 [][3] 가 맞다. 하지만 c#은 몇 개를 동적할당해서 칸을 만들어둬야하나를 지정해줘야해서 [2][]가 맞다.

}




}
