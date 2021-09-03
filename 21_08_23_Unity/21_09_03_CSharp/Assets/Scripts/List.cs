using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class List : MonoBehaviour
{
    //�ڷᱸ��
    //�迭�� �ӵ��� ����. ������ �޸��� ����ȭ�� �̷���� ���ִ�.(�����ؼ� �Ҵ��ؾ߸� �ϱ⶧���̴�.)
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
        //Boxing / Unboxing (���ϱ� ������ ȿ���� ������. object���� � �ڷ������� ����ȯ�� ���Ѿ��ϴ��� ����ϰ� �־���ϱ� ������)
        //���� ���� list ��� ����� �ڷ����� ��õ� ���� ����� �����Ѵ�.
        arrList.Add(1);
        arrList.Add("a");
        arrList.Add(0.4);
        for(int i =0; i<arrList.Count; ++i)
            Debug.Log(arrList[i].ToString());
        // for, while
        // std::for_each
        //���ο� �ݺ���.. ������ �迭��ü�� ��ȸ�Ѵ�.
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
