using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class Saving : MonoBehaviour
{


    const string DLL_NAME = "Test Plug-In";

    [DllImport(DLL_NAME)]
    private static extern void posLoad();

    [DllImport(DLL_NAME)]
    private static extern void posSave(float cubeXposition, float cubeYposition, float cubeZposition);

    [DllImport(DLL_NAME)]
    private static extern System.IntPtr getPos();


    // Start is called before the first frame update
    void Start()
    {


    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.U))
        {
            SavePosition();
        }

        if (Input.GetKeyDown(KeyCode.L))
        {
            LoadPosition();
        }

    }


    public void SavePosition()
    {
        float cubeXposition = transform.position.x;
        float cubeYposition = transform.position.y;
        float cubeZposition = transform.position.z;

        posSave(cubeXposition, cubeYposition, cubeZposition);
    }

    public void LoadPosition()
    {

        posLoad();
        float[] newblocks = new float[3];

        // get map data from saved file
        Marshal.Copy(getPos(), newblocks, 0, 3);
        //Vector3 position = posLoad();

       transform.position = new Vector3(newblocks[0], newblocks[1], newblocks[2]);

    }
}