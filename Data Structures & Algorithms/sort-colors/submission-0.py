class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        j=0
        while j<=len(nums)-1:
            i=1
            while i<=len(nums)-1:
                if nums[i]<nums[i-1]:
                    nums[i],nums[i-1]=nums[i-1],nums[i]
                i+=1
            j+=1