using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Anim : MonoBehaviour
{
    [SerializeField] private GameObject playerPrefab;
    
    public struct SClip
    {
        public int imageW;
        public int imageH;
        public float frameW;
        public float frameH;
        public int colCnt;
        public int rowCnt;
        public int totalCnt;

        public SClip
            (
                int _imgW, int _imgH, int _colCnt, int _rowCnt, int _totalCnt
            )
            {
                imageW = _imgW; imageH = _imgH; frameW = imageW / _colCnt; frameH = imageH / _rowCnt; colCnt = _colCnt; rowCnt = _rowCnt; totalCnt = _totalCnt;
            }
    }
    private SClip run = new SClip(520, 347, 7, 4, 27);

    private MeshFilter mf = null;
    void Awake()
    {
        playerPrefab = Resources.Load<GameObject>("Prefabs\\P_Player");
        mf = GetComponent<MeshFilter>();

        StartCoroutine(AnimationCoroutine());
    }

    private IEnumerator AnimationCoroutine()
    {
        float delay = 0.5f / run.totalCnt;
        int curFrame = 0;
        while(true)
        {
            SetFrameWithIndex(curFrame++%run.totalCnt);
            yield return new WaitForSeconds(delay);
        }
    }
    private void SetFrameWithIndex(int _idx)
    {
        float frameW = run.frameW / run.imageW;
        float frameH = run.frameH / run.imageH;
        float startU = (_idx % run.colCnt) * frameW;
        float startV = ((run.rowCnt - 1) - (_idx / run.colCnt)) * frameH;
        

        mf.mesh.uv = new Vector2[]
        {
            new Vector2(startU, startV),
            new Vector2(startU + frameW, startV),
            new Vector2(startU, startV + frameH),
            new Vector2(startU + frameW, startV + frameH)
        };

    }


}
