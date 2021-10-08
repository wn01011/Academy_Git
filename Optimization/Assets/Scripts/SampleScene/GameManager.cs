using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    private BGMPlayer bgmPlayer = null;
    private void Awake()
    {
        ResourceManager.LoadSFXList();
        AudioClip sfx = ResourceManager.LoadSFX(ResourceManager.ESFX.SFX);

        bgmPlayer = BGMPlayer.Instance;
        bgmPlayer.PlayeBGM();
    }
    void Start()
    {
        
    }

    void Update()
    {
        
    }
}
