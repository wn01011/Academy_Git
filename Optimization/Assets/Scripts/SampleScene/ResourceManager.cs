using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResourceManager
{
    public enum ESFX { SFX, ATTACK, JUMP }

    private static AudioClip[] sfxList = null;
    private static AudioClip bgm = null;
    public static void LoadSFXList()
    {
        if (sfxList != null) return;
        sfxList = Resources.LoadAll<AudioClip>("Audios\\SFX");

        //AudioClip sfx = sfxList[(int)ESFX.SFX];
    }

    public static AudioClip LoadSFX(ESFX _sfx)
    {
        if (sfxList == null || sfxList[(int)_sfx] == null) return null;

        return sfxList[(int)_sfx];
    }

    public static AudioClip LoadBGM()
    {
        if(bgm == null)
        {
            bgm = Resources.Load<AudioClip>("Audios\\BGM\\BGM");
        }
        return bgm;
    }
}
