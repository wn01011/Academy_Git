using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.Networking;
using Newtonsoft.Json;
public class DataBaseManager : MonoBehaviour
{
    public class DataUserInfo
    {
        public string id { get; set; }
        public string pw { get; set; }
        public int    age { get; set; }
    }
    private void Start()
    {
        StartCoroutine(AddUserInfoCoroutine("kkk","1234kkk",30));
        StartCoroutine(GetUserInfoCoroutine());
    }

    private IEnumerator AddUserInfoCoroutine(string _id, string _pw, int _age)
    {
        WWWForm form = new WWWForm();
        form.AddField("id", _id);
        form.AddField("pw", _pw);
        form.AddField("age", _age);

        using (UnityWebRequest www = UnityWebRequest.Post("http://127.0.0.1/adduserinfo.php", form))
        {
            yield return www.SendWebRequest();
            
            if(www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(www.error);
            }
        }

        Debug.Log("AddUserInfo Success : " + _id + "(" + _pw + ") (" + _age + ")");
    }

    private IEnumerator GetUserInfoCoroutine()
    {
        using(UnityWebRequest www = UnityWebRequest.Post("http://127.0.0.1/getuserinfo.php",""))
        {
            yield return www.SendWebRequest();

            if(www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log(www.downloadHandler.text);
                string data = www.downloadHandler.text;

                List<DataUserInfo> dataUserInfos = JsonConvert.DeserializeObject<List<DataUserInfo>>(data);

                foreach(DataUserInfo dataUserInfo in dataUserInfos)
                {
                    Debug.Log(dataUserInfo.id + " : " + dataUserInfo.pw + " : " + dataUserInfo.age);
                }
            }
        }
    }

}
