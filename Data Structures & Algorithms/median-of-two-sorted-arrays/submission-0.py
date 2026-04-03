class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        i=len(nums1)-1
        j=len(nums2)-1
        nums3=[]
        a=0
        b=0
        while a<=i and b<=j:
            if nums1[a]<nums2[b]:
                nums3.append(nums1[a])
                a+=1
            else:
                nums3.append(nums2[b])
                b+=1
        nums3.extend(nums1[a:])
        nums3.extend(nums2[b:])
        q=len(nums3)
        if q%2==1:
            r=q//2
            return nums3[r]
        else:
            s=q//2
            r=s-1
            d=(nums3[r]+nums3[s])/2
            return d