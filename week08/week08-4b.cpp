//week08-4b.cpp
#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("請輸入蝸牛欲爬行的高度：");
	
	scanf("%d",&h);
	while(h>0){
		day++;
		h-=5;
		if(h<0)break;
		h+=2;
	}