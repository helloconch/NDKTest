package com.ndk.n;

/**
 * Created by cheyanxu on 16/6/22.
 */
public class NativeRunTime {

    public native void startActivity(String compname);

    public native String stringFromJNI();

    public native void startService(String srvname, String sdpath);

    public native int findProcess(String packname);

    public native int stopService();
}
