///week11-1.cpp想要試試質數篩子法，先試試舊方法
///想數一下10000以下有幾個質數
#include <stdio.h>
int isPrime(int n){
    for(int i=2;i<n;i++){
            if(n%i==0)return 0;
    }
     return 1;

}
int main()
{
    int BOUND =300000,ans=0;
    for(int i=2;i<BOUND;i++){
        if(isPrime(i)){
            printf("%d",i);
            ans++;
        }

    }
    printf("質數有%d個\n",ans);
}
