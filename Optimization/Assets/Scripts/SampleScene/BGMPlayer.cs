using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGMPlayer : Singleton<BGMPlayer>
{

    private AudioSource audio = null;

    private void Awake()
    {
        audio = gameObject.AddComponent<AudioSource>();
        audio.clip = ResourceManager.LoadBGM();
    }

    public void PlayeBGM()
    {
        audio.loop = true;
        audio.Play();
        audio.PlayOneShot(ResourceManager.LoadSFX(ResourceManager.ESFX.SFX));
    }
}
