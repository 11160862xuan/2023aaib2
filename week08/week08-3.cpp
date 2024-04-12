#include <stdio.h>
#include <string.h>
int main()
{
    printf("請輸入你的英文名子: ");
    char s1[30];
    scanf("%s",s1);
    char s2[30]="你好";
    printf("%s %s\n",s1,s2);

    s1[0]='A';
    printf("你的名子被改成 %s\n",s1);

    printf("你的英文名子長度是 %d\n",strlen(s1));
}
