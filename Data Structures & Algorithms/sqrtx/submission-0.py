class Solution:
    def mySqrt(self, x: int) -> int:
        if x == 0 or x == 1:
            return x
        l=1
        h=x
        ans=0
        while(l<=h):
            mid = (l+h)//2
            if mid*mid == x:
                return mid
            elif mid*mid < x:
                ans=mid
                l=mid+1
            else:
                h=mid-1
        return ans

        