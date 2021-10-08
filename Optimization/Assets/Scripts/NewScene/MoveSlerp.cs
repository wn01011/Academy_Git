using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveSlerp : MoveBase
{
    private void Start()
    {
        tr.position = transform.position;
    }
    protected override void Moving()
    {
        tr.position = Vector3.Slerp(tr.position, endPos - Vector3.down * 2, Time.deltaTime);
        if (Vector3.Distance(tr.position, endPos - Vector3.down * 2) <= 0.1f)
        {
            tr.position = startPos - Vector3.down * 2;
        }
    }
}
