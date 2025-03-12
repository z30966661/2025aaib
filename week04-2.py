# week04-2
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0
        for i in range(len(nums)):
            if nums[i] > 0:
                pos += 1
            if nums[i] < 0:
                neg += 1
        return max(pos, neg)
