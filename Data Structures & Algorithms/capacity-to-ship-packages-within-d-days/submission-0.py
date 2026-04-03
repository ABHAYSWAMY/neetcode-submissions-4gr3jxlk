class Solution:
    def shipWithinDays(self, weights: List[int], days: int) -> int:
        def dayy(capacity):
            dayss=1
            total=0
            for w in weights:
                if total+w > capacity:
                    dayss+=1
                    total=0
                total+=w
            return dayss
        low=max(weights)
        high=sum(weights)
        while low<=high:
            mid=(low+high)//2
            day=dayy(mid)
            if day<=days:
                high=mid-1
            else:
                low=mid+1
        return low
            
        