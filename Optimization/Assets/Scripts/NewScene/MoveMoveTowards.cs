using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveMoveTowards : MoveBase
{
    protected override void Moving()
    {
        tr.position = Vector3.MoveTowards(tr.position, endPos, Time.deltaTime);
    }
}
