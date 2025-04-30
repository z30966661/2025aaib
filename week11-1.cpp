///week11-1.cpp
///рSOLT107_ADVANCE_009
#include <stdio.h>
int main()
{
    printf("叫块 1422:");
    int n;
    scanf("%d",&n);
    int ans=0;
    ///Q:或т程计?
    while(n>0){
        printf("瞷ㄓブ:%d\n",n%10);
        if(n%10>ans) ans=n%10;///ブ猭,–计
        n=n/10;
    }
    printf("т程ブ,琌: %d\n",ans);
}
