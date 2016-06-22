1.新建工程,添加本地方法
 public native String getDataFromNative();
 
2.Build->Make Project
目的就是编译成对应的class文件。然后根据生成的class文件，利用javah生成对应的 .h头文件。

3.打开Terminal(View->Tool Windows)
进入src/main/java文件夹执行指令：javah -jni com.ndk.n.LocalDataHelper

4.java目录下多了一个文件，里面有生成好的头文件：com_ndk_n_LocalDataHelper.h

5.新建jni目录(将上述头文件复制进来)
然后新建一个C源文件(File->New->C/C++ Source File)

6.在jni文件下创建Android.mk文件内容如下:

LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := dd

LOCAL_SRC_FILES := main.c

include $(BUILD_SHARED_LIBRARY)


备注:LOCAL_MODULE := dd //生成的so文件库名
    LOCAL_SRC_FILES := main.c //使用的c文件名

7.进入jni所在的当前目录,通过ndk-build

成功后main下生成libs和obj对应so文件
 
 
[以上可以通过c文件生成对应so文件,可以拷贝so文件使用]
gradle.properties
android.useDeprecatedNdk=true


###当前项目使用时
a)将main/libs下资源拷贝到app/libs下 


b)在LocalDataHelper中添加加载so库方法  


c)并且需要在build.gradle中android节点下添加


  sourceSets {
        main {
            jniLibs.srcDirs = ['libs']
        }
    }
 
###其它项目使用
a)拷贝so文件到其它项目app/libs


b)拷贝LocalDataHelper全文件限定名以及类中内容


c)并且需要在build.gradle中android节点下添加


  sourceSets {
        main {
            jniLibs.srcDirs = ['libs']
        }
    }





———————以下通过运行项目,直接生成,无需要手动编写Android.mk文件忽略第6第7步——— 
8.在app目录下的 build.gradle中设置库文件名（生成的so文件名）：


找到 defaultConfig 这项，在里面添加如下内容：


ndk{  
      moduleName "MyJni"  //设置库(so)文件名称  
   }  
