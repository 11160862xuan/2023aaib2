///week09-2.cpp函式裡的變數VS外面的變數
#include <stdio.h>
int myFuncA()
{
    int x=200;
    printf("myFuncA()裡的x是%d\n",x);

}
int main()
{
    int x=100;
    printf("main()裡的x是%d\n",x);
    myFuncA();
    printf("main()裡的x是%d\n",x);
}
