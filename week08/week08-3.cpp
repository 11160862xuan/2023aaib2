#include <stdio.h>
#include <string.h>
int main()
{
    printf("�п�J�A���^��W�l: ");
    char s1[30];
    scanf("%s",s1);
    char s2[30]="�A�n";
    printf("%s %s\n",s1,s2);

    s1[0]='A';
    printf("�A���W�l�Q�令 %s\n",s1);

    printf("�A���^��W�l���׬O %d\n",strlen(s1));
}
