def toLowerCase(s: str) -> str:
        result = "" 
        for i in s :
            if i.isupper() :
                result+=i.lower()
                continue
            result+=i
        return result 

print(toLowerCase("Hello"))