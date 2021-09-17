using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemHolder : MonoBehaviour
{
    private Transform itemHolderTr = null;
    private Transform itemTr = null;
    void Awake()
    {
        itemHolderTr = transform;
    }

    public void SetItem(Transform _itemTr)
    {
        if (!itemTr) Dropitem(_itemTr.GetComponent<Collider>());

        itemTr = _itemTr;
        itemTr.parent = itemHolderTr;
        itemTr.localPosition = Vector3.zero;
    }
    public void Dropitem(Collider _itemCol)
    {
        if (!itemTr) return;
        StartCoroutine(DropSet(_itemCol));
        itemTr.parent = null;
        itemTr = null;

    }

    IEnumerator DropSet(Collider _itemCol)
    {
        _itemCol.enabled = false;
        yield return new WaitForSeconds(1.0f);
        _itemCol.enabled = true;
    }
}
