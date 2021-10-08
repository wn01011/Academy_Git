using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveSmoothDamp : MoveBase
{
    private Vector3 velocity = Vector3.one;

    protected override void Moving()
    {
        tr.position = Vector3.SmoothDamp(tr.position, endPos, ref velocity, 1f);
    }
}
