///week12-5.cpp
///LeedCode 1920.Build Array from permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N= nums.size();///�}�C���j�p
        vector<int> ans(N);///c++���}�C,�j�p�]�w��N
        ///�D�ػ�for�j��,��Ҧ���i
        for(int i=0; i<N; i++){
            ans[i]= nums[nums[i]];///�ӵۤ�����
        }
        return ans;
    }
};
