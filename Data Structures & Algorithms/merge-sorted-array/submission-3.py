class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i=0
        j=0
        nums3=[]
        nums4=nums1[:m]
        if m==0:
            nums1[:]=nums2[:]
        elif n==0:
            nums1[:]=nums1[:]
        else:
            while i<=m-1 and j<=n-1:
                if nums4[i]<=nums2[j]:
                    nums3.append(nums4[i])
                    i+=1
                else:
                    nums3.append(nums2[j])
                    j+=1
            nums3.extend(nums4[i:])
            nums3.extend(nums2[j:])
            s=m+n
            t=len(nums3)
            r=t-s
            nums1[:]=nums3[:]