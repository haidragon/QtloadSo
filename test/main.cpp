#include "mainwindow.h"
#include <QApplication>
#include<QMessageBox>
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
void __attribute__ ((constructor)) SoMain(int argc, char *argv[]){
    QApplication a(argc, argv);
    QMessageBox::about(nullptr, "About", "SoMain");
}
void __attribute__ ((constructor)) SoMain2(int argc, char *argv[]){
    QApplication a(argc, argv);
    QMessageBox::about(nullptr, "About", "SoMain2");
}
void __attribute__ ((destructor)) SoUnload(int argc, char *argv[]){
   printf("SoUnload \n");
}
