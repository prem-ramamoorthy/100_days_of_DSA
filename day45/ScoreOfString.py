def scoreOfString(s):
        result = 0 
        n = len(s)
        for i in range(n) :
            if i+1<n :
                result += abs(ord(s[i]) - ord(s[i+1])) 
        return result

print(scoreOfString("hello"))