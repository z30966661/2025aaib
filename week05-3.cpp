//week05-3.cpp
//LeetCode 2206.Divide Array Into Equal Pairs
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] ={};//�}501�Ӥj�p���}�C,������0
        int odd =0;
        for(int i=0; i<nums.size();i++){
            int now=nums[i];//�{�b�B�z���Ʀr
            a[now]++;//now�W�[�@��
            if(a[now] %2 == 0) odd--; //�[������O����,�֤@�ө_��
            else odd++;//�h�@�ө_��
        }
        if(odd==0) return true;
        else return false;
    }
};
