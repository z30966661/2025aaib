#LeetCode 1.Two Sum
#���@��Ʀrnums�̭��u����ӡv�ۥ[ �Otarget
#num[i] + nums[j] == target ���i �M j �ϱo�[�_�ӬOtarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box ={} #���@�ӽc�l�A�̭���u�X�{�L���Ʀr�v
        # �ڭ̷Q�n��Xtarget�o�ӥ[�`

        for i, num in enumerate(nums):
            other = target - num #�t�~�@�ӻݭn���� �u�i�H��Xtarge�v��(target-num)
            if target-num in box: #�b�c�l��,���t�~�@�ӻݭn����
                   return [ box[other], i] #��쵪��
            else: #�p�G�S���X�A���Ʀr���
                box[num] = i #�N��{�b���Ʀr num,���box�̭�
