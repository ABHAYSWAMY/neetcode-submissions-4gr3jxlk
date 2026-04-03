class Solution:
    def isPalindrome(self, s: str) -> bool:
        a=""
        for i in s:
            if ("a"<=i<="z") or ("A"<=i<="Z") or i.isdigit():
                a+=i.lower()
        b=a[::-1]
        if a==b:
            return True
        else:
            return False


        