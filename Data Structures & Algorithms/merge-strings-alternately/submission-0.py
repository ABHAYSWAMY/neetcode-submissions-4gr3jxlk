class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        a=""
        i,j=0,0
        while i<=(len(word1)-1) and j<=(len(word2)-1):
            a+=word1[i]
            i+=1
            a+=word2[j]
            j+=1
        a+=word1[i:]
        a+=word2[j:]
        return a

        