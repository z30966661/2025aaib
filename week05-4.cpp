///week05-4.cpp
//LeetCode 3191. Minimum Operations to Make Binary Array Equal
//�n���X���u�T�Ӽ�½�P�v�~������ܦ�1
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans =0;//�n�u½�P½�X���v

        for(int i=0; i<nums.size()-2;i++){
            if(nums[i]==0){
                ans++;//½�P�[�@��
                nums[i+1]= 1 - nums[i+1];
                nums[i+2]= 1 - nums[i+2];
            }
        }
        int N =nums.size();
        if(nums[N-1]==0|| nums[N-2]==0) return -1;
        return ans;
    }
};
