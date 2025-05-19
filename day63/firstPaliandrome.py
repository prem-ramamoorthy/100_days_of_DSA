def firstPalindrome(words) -> str:
        for i in words : 
            s= i[::-1]
            if i==s :
                return i
        return ""

print(firstPalindrome(["abc","car","ada","racecar","cool"]))