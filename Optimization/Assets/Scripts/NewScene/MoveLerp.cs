using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveLerp : MoveBase
{
    private void Start()
    {
        startTr.position = transform.position;
        
    }
    protected override void Moving()
    {
        tr.position = Vector3.Lerp(tr.position, endPos, Time.deltaTime);
        if(Vector3.Distance(tr.position, endPos) <= 0.1f)
        {
            tr.position = startPos;
        }
    }
}
