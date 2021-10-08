using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemHolderMover : MonoBehaviour
{
    [SerializeField] private GameObject itemHolder = null;
    private bool isMove = false;
    private float holderXMin = -26f;
    private float holderXMax = -20f;
    public void previousBtn()
    {
        if (!isMove && itemHolder.transform.position.x < holderXMax)
            StartCoroutine(WaitForSec(-2.0f));
    }

    public void nextBtn()
    {
        if(!isMove && itemHolder.transform.position.x > holderXMin)
            StartCoroutine(WaitForSec(2.0f));
    }
    IEnumerator WaitForSec(float _moveDist)
    {
        isMove = true;
        Vector3 startPos = itemHolder.transform.position;
        Vector3 lastPos = startPos + Vector3.left * _moveDist;
        while (Vector3.Distance(lastPos, transform.position) >= 0.1f)
        {
            if (Vector3.Distance(lastPos, transform.position) <= 0.15f)
            {
                transform.position = lastPos;
                break;
            }
            itemHolder.transform.position = Vector3.Lerp(startPos, lastPos, 10 * Time.deltaTime);
            startPos = itemHolder.transform.position;
            yield return new WaitForSeconds(0.05f);
        }
        isMove = false;
    }
}
