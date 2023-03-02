class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d = {}
        for ind, val in enumerate(nums):
            r = target - val
            if r in d: return [d[r], ind]
            d[val] = ind