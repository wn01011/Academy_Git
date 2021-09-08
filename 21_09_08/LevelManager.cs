using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LevelManager : MonoBehaviour
{
    public Text bestScore;
    private Color scoreColor;
    private bool r = false;
    private bool g = false;
    private bool b = true;
    private bool switchOn = true;
    private void Start()
    {
        scoreColor = new Color(bestScore.color.r, bestScore.color.g, bestScore.color.b);
        int i_best = (int)PlayerPrefs.GetFloat("highestScore");
        bestScore.text = "Score : " + i_best.ToString("D4");
       
    }
    private void Update()
    {
        Debug.Log(bestScore.color);
        ColorChange();
    }
    public void OnclickEasy()
    {
        GameManager.spawnerCount = 4;
        SceneManager.LoadScene("Main");
    }
    public void OnclickNormal()
    {
        GameManager.spawnerCount = 8;
        SceneManager.LoadScene("Main");
    }
    public void OnclickHard()
    {
        GameManager.spawnerCount = 12;
        SceneManager.LoadScene("Main");
    }
    private void ColorChange()
    {
        bestScore.color = scoreColor;
        
        float changeSpeed = 1f;
        if (b) // 만약 이전의 순서가 blue 였으면 red를 실행한다.
        {
            if (scoreColor.r <= 0.8392157f && scoreColor.r >= 0.4392157f)
            {
                if (switchOn) // +- 스위치 true이면 + false이면 -
                    scoreColor.r += changeSpeed * Time.deltaTime;
                else
                    scoreColor.r -= changeSpeed * Time.deltaTime;
            }
            else
            {
                if (scoreColor.r > 0.8392157f) scoreColor.r = 0.8392157f;
                if (scoreColor.r < 0.4392157f) scoreColor.r = 0.4392157f;
                r = true;
                b = false;
                switchOn = !switchOn;
            }
        }
        else if (r)
        {
            if (scoreColor.g <= 0.8392157f && scoreColor.g >= 0.4392157f)
            {
                if (switchOn)
                    scoreColor.g += changeSpeed * Time.deltaTime;
                else
                    scoreColor.g -= changeSpeed * Time.deltaTime;
            }
            else
            {
                if (scoreColor.g > 0.8392157f) scoreColor.g = 0.8392157f;
                if (scoreColor.g < 0.4392157f) scoreColor.g = 0.4392157f;
                g = true;
                r = false;
                switchOn = !switchOn;
            }
        }
        else if (g)
        {
            if (scoreColor.b <= 0.8392157f && scoreColor.b >= 0.4392157f)
            {
                if (switchOn)
                    scoreColor.b += changeSpeed * Time.deltaTime;
                else
                    scoreColor.b -= changeSpeed * Time.deltaTime;
            }
            else
            {
                if (scoreColor.b > 0.8392157f) scoreColor.b = 0.8392157f;
                if (scoreColor.b < 0.4392157f) scoreColor.b = 0.4392157f;
                b = true;
                g = false;
                switchOn = !switchOn;
            }
        }
    }

}
