///week13-4.cpp �g�Q�Ѫ��D���D c++
///Leetcode 3335 Total characters in string after transformations i
///'a'�|��'b','b'�|�ܦ�'c' ...'z'�|�ܨ�Ӧr��'a'�M'b'
class Solution {
public:
    int a[200000]={};///�ܤj���}�C �̭����O0
    int helper(int t){
        if(a[t]>0)return a[t];///���ĵ��� �N�⵪�ת������ӥ�
        if( t<26 )return 1;///�٬O�@�Ӧr��
        a[t] =(helper(t-26)+helper(t-26+1))%1000000007;///�̭���8��0
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans=0;
        for(char c:s){///c++���y�k �i�H��C�Ӧr�����X��
            ans =(ans +helper (t+c-'a'))%1000000007;///�̭����K��0
        }
        return ans;
    }
};
