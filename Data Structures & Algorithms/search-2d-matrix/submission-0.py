class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        flat=[]
        for item in matrix:
            if isinstance(item,list):
                flat.extend(item)
            else:
                flat.append(item)
        low=0
        high=len(flat)-1
        while low<=high:
            mid=(low+high)//2
            if flat[mid]==target:
                return True
            elif flat[mid]<target:
                low=mid+1
            else:
                high=mid-1
        return False
        