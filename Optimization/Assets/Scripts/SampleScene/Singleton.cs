using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Singleton<T> : MonoBehaviour where T : MonoBehaviour
{
    private static T instance;
    public static T Instance
    {
        get
        {
            if (null != instance) return instance;

            Object[] gos = GameObject.FindObjectsOfType(typeof(T));
            if (gos.Length > 0)
            {
                instance = ((GameObject)gos[0]).GetComponent<T>();
                return instance;
            }

            GameObject go = new GameObject();
            go.name = "Singleton " + typeof(T).ToString();
            instance = go.AddComponent<T>();
            DontDestroyOnLoad(go);

            return instance;
        }
    }
}
