///week15-2.cpp
///�M���� �[��e�誺���P �o�{�n���ܦh���ƪ��Ʀr
///�����ƪ��Ʀr ���v���h��
#include <stdio.h>
int helper(int n)
{
    int a[10] ={};///�έp�� �̭����O0
    while(n>0){///��֪k
        int now =n%10;///��X�@�h��
        a[now]++;///�o�ӥ� �h�X�{�@��
        if(a[now]>1) return 1;///����쭫�ƪ��Ʀr
        n = n/10;///��֪k
    }
    return 0;///���S���������� �N�O�䤣�쭫�ƪ��Ʀr
}
int main()
{
    int ans=0;///���X�ӭ��ƪ��Ʀr
    for(int i=0;i<=9999;i++){/// 0000 .. 9999
        if( helper(i)==1)ans++;
    }
    printf("%d",ans);///��Ӧ�4725�Ө��P���X �����ƼƦr
}
