///week11-2.cpp
///�禡�ŧi,�禡�w�q,�禡�I�s
#include <stdio.h>
int addnum(int a,int b)///�ŧi��ӰѼƪ��Ϊ��W�r
{///�e�����禡/��ƪ��w�q
    printf("�{�b�i�Jaddnum()�禡��,a:%d b:%d\n",a,b);
    int x;
    x=a+b;
    printf("��Ƭۥ[��,�o��ƭ�%d�Nreturn �^��\n",x);
    return x;
}

int main()
{
    int ans= addnum(10,30);
    printf("%d",ans);
}
