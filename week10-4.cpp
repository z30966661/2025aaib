///week10-4 ���Ѫ��D���D
///LeetCode 1399.Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int max_count =0;///�Ƥ@�U�έp�̦h���O�X�{�X��
        int a[100]={};///�}�C�ŧi,��[�[�`��total]���X�{�X��
        for(int i=1;i<=n;i++){///�H����for�j��,�q1....n
            int total=0,now=i;///�[�_�Ӫ����G�stotal,�{�b����now
            while(now>0){///��֪k,�p�Gnow�٦���,�~���
                total+=now%10;///��֥[�_��
                now=now/10;///�駹��,�Ʀr�N�ܤp
            }
            a[total]++;///�έp���G�h�@��total���[�_�Ӫ���total���ӥ�!!
            if(a[total]>max_count) max_count=a[total];///max_count��̦h����
        }
        int ans=0;///�̫�⵪�ק�X��
        for(int i=0;i<100;i++){///���@�U�}�Ca[i]�̭���n�O�̤j��max_count����
            if(a[i]==max_count) ans++;///�N�h�@�ӳ̤j����
        }
        return ans;
    }
};
