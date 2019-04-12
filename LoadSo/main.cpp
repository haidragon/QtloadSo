#include "mainwindow.h"
#include <QApplication>
#include <stdio.h>
#include <dlfcn.h>

int main(int argc, char *argv[])
{
    void * libm_handle = NULL;
     libm_handle = dlopen("/root/Desktop/build-test-Desktop_Qt_5_12_0_GCC_64bit-Debug/libtest.so", RTLD_LAZY );
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    return a.exec();
}
