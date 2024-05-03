//week11-4a.cpp prat1
#include <stdio.h>
int main()
{
	int a[30][30];
	int m,n;//part1:Input
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
