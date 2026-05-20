class Solution:
    def isPalindrome(self, s: str) -> bool:
        s1 = ""
        for i in s:
            if i.isalpha() == True or i.isdigit():
                s1 += i
        s1 = s1.lower()
        if s1 == s1[::-1]:
            return True
        else:
            return False
        