using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Slider : MonoBehaviour
{
    [SerializeField] GameObject m_goPrefab = null;
    [SerializeField] GameObject player = null;
    List<Transform> m_objectList = new List<Transform>();
    List<GameObject> m_hpBarList = new List<GameObject>();

    Camera m_cam = null;
    void Start()
    {
        m_cam = Camera.main;
        PlayerController playerC = player.GetComponent<PlayerController>();
        
        GameObject[] t_objects = GameObject.FindGameObjectsWithTag("Player");
        for(int i =0; i<t_objects.Length; i++)
        {
            m_objectList.Add(t_objects[i].transform);
            GameObject t_hpbar = Instantiate(m_goPrefab, t_objects[i].transform.position, Quaternion.identity, transform);
            m_hpBarList.Add(t_hpbar);
        }
        Slider hp_slider = m_hpBarList[0].GetComponent<Slider>();
        
    }

    void Update()
    {
        for(int i =0; i< m_objectList.Count; i++)
        {
            m_hpBarList[i].transform.position = m_cam.WorldToScreenPoint(m_objectList[i].position + new Vector3(0,1.5f,0));
        }
    }
}
