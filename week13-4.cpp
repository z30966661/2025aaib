///week13-4.cpp 寫昨天的挑戰題 c++
///Leetcode 3335 Total characters in string after transformations i
///'a'會變'b','b'會變成'c' ...'z'會變兩個字母'a'和'b'
class Solution {
public:
    int a[200000]={};///很大的陣列 裡面都是0
    int helper(int t){
        if(a[t]>0)return a[t];///有效答案 就把答案直接拿來用
        if( t<26 )return 1;///還是一個字母
        a[t] =(helper(t-26)+helper(t-26+1))%1000000007;///裡面有8個0
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans=0;
        for(char c:s){///c++的語法 可以把每個字母取出來
            ans =(ans +helper (t+c-'a'))%1000000007;///裡面有八個0
        }
        return ans;
    }
};
