using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class List : MonoBehaviour
{
    //자료구조
    //배열은 속도가 좋다. 하지만 메모리의 단편화가 이루어질 수있다.(연속해서 할당해야만 하기때문이다.)
    int[] iArr;
    System.Array arr;

    ArrayList arrList = new ArrayList();

    // STL(Standard Template Library)
    // Queue<int>
    // SingleList<float>
    // Generic Programming
    List<int> intList = new List<int>();
    

    void Start()
    {
        //System.Object[] arr;
        //Boxing / Unboxing (편리하긴 하지만 효율이 안좋다. object에서 어떤 자료형으로 형변환을 시켜야하는지 기억하고 있어야하기 때문에)
        //따라서 위의 list 사용 방식중 자료형이 명시된 밑의 방법을 권장한다.
        arrList.Add(1);
        arrList.Add("a");
        arrList.Add(0.4);
        for(int i =0; i<arrList.Count; ++i)
            Debug.Log(arrList[i].ToString());
        // for, while
        // std::for_each
        //새로운 반복문.. 무조건 배열전체를 순회한다.
        foreach(object o in arrList)
        {
            Debug.Log(o);
        }
        foreach(int i in intList)
        {
            Debug.Log(i);
        }
    }

    
}
