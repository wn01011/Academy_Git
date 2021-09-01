using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    private float verti = 0.0f;
    private float hori = 0.0f;
    Vector3 dir = Vector3.zero;
    private Rigidbody playerRb;
    private float speed = 40f;
    private float dashPower = 4f;
    ShootTheBullet myShoot;
    ShootTheLasor mylasor;
    [SerializeField]private float dashTimer = 2.0f;
    [SerializeField]private int dashCount = 0;
    private int dashCountMax = 2;
    [SerializeField]private bool isDash = false;
    [SerializeField] private int hp = 10;
    public Slider hpBar;
    private void Start()
    {
        playerRb = gameObject.GetComponent<Rigidbody>(); // gameObject == this?
    }
    
    private void Update()
    {
        CharacterMove();
        PlayerRot();
        Fire();
    }
    
    private void CharacterMove()
    {
        hori = Input.GetAxisRaw("Horizontal");
        verti = Input.GetAxisRaw("Vertical");
        Dash(hori, verti);
        if(!isDash)
            playerRb.velocity = InputDir() * speed;
    }
    private Vector3 InputDir()
    {
        dir.x = hori; dir.z = verti;
        dir.Normalize();
        return dir;
    }

    private void Dash(float _hori,float _verti)
    {
        DashCount();
        Vector3 dashDir = InputDir();
        if(Input.GetKey(KeyCode.Space) && dashCount > 0)
        {
            isDash = true;
            playerRb.velocity = dashPower * speed * dashDir;
            dashCount--;
            StartCoroutine(dashDelayTimer());
        }
    }
    private void DashCount()
    {
        if(dashCount == dashCountMax)
            return;
        else
            dashTimer -= Time.deltaTime;
        if (dashTimer < 0 && dashCount <2)
        {
            dashTimer = 2.0f;
            dashCount++;
        }
    }

    private void PlayerRot()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hitresult;
        if(Physics.Raycast(ray,out hitresult))
        {
            Vector3 hitPos = new Vector3(hitresult.point.x, 1.0f, hitresult.point.z);
            transform.forward = hitPos - transform.position;
        }
    }
    IEnumerator dashDelayTimer()
    {
        yield return new WaitForSeconds(0.2f);
        isDash = false;
    }
    private void Fire()
    {
        if (Input.GetMouseButtonDown(0))
        {
            myShoot = GetComponent<ShootTheBullet>();
            myShoot.Fire();
        }
        else if(Input.GetMouseButtonDown(1))
        {
            Debug.Log("오른클릭!");
            mylasor = GetComponent<ShootTheLasor>();
            mylasor.Fire();
        }
    }
    private void hpBarController()
    {

    }
}
