def reverseWords( s: str) -> str:
        l = s.split(" ")
        result = [] 
        for i in l :
            result.append(i[::-1])
        return " ".join(result)

print(reverseWords("Let's take LeetCode contest"))