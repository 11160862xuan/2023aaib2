///week09-3.cpp�禡�̪��ܼ�VS�~�����ܼ�
#include <stdio.h>
int globalA=300;

void myFuncA(){
    int localA=500;
    globalA=0;
    printf("myFunc():glbalA%d localA:%d\n",globalA,localA);
}

int main()
{
    int localA=200;
    printf("main():glbalA%d localA:%d\n",globalA,localA);
    myFuncA();
    printf("main():glbalA%d localA:%d\n",globalA,localA);
}
