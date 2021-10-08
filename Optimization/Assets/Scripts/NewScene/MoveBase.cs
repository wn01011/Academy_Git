using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveBase : MonoBehaviour
{
    [SerializeField] protected Transform startTr = null;
    [SerializeField] protected Transform endTr = null;

    protected Transform tr = null;
    protected float t = 0f;
    protected float speed = 10.0f;

    protected Vector3 startPos = Vector3.zero;
    protected Vector3 endPos = Vector3.zero;

    private void Awake()
    {
        tr = transform;

        startPos = tr.position;
        startPos.x = startTr.position.x;
        endPos = tr.position;
        endPos.x = endTr.position.x;
    }
    private void Update()
    {
        t += Time.deltaTime;
        if (t >= 1f) t = 0f;
        Moving();
    }

    protected virtual void Moving()
    {

    }

}
