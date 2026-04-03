class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        i=0
        while i<=len(nums)-1:
            j=1
            while j<=len(nums)-1:
                if nums[j]<nums[j-1]:
                    nums[j],nums[j-1]=nums[j-1],nums[j]
                j+=1
            i+=1
        return nums