///week11-2.cpp
///ㄧΑ,ㄧΑ﹚竡,ㄧΑ㊣
#include <stdio.h>
int addnum(int a,int b)///ㄢ把计
{///玡ΑㄧΑ/ㄧ计﹚竡
    printf("瞷秈addnum()ㄧΑ柑,a:%d b:%d\n",a,b);
    int x;
    x=a+b;
    printf("ㄢ计,眔计%d盢return 肚\n",x);
    return x;
}

int main()
{
    int ans= addnum(10,30);
    printf("%d",ans);
}
