///week12-5.cpp
///LeedCode 1920.Build Array from permutation
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N= nums.size();///陣列的大小
        vector<int> ans(N);///c++的陣列,大小設定成N
        ///題目說for迴圈,對所有的i
        for(int i=0; i<N; i++){
            ans[i]= nums[nums[i]];///照著公式做
        }
        return ans;
    }
};
