package com.ndk.main;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.widget.TextView;

import com.ndk.n.LocalDataHelper;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        LocalDataHelper localDataHelper = new LocalDataHelper();
        ((TextView) findViewById(R.id.show)).setText(localDataHelper.getDataFromNative());
    }
}
