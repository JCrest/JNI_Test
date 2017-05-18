package com.example.jiangchuanfa.javacallcaandccalljava;

/**
 * Created by crest on 2017/5/18.
 *
 *
 */

public class Call {

    {
        System.loadLibrary("HelloJni");
    }


    public native int[] increaseArrayEles(int[] intArray);//JavaCallC


}
