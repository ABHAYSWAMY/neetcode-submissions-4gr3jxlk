class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        row=len(matrix)
        col=len(matrix[0])
        low=0
        high=(row*col)-1
        while low<=high:
            mid=(low+high)//2
            row=mid//col
            cols=mid%col
            if matrix[row][cols]==target:
                return True
            elif matrix[row][cols]<target:
                low=mid+1
            else:
                high=mid-1
        return False
        