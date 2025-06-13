def removeOuterParentheses(s: str) -> str:
    result = []
    balance = 0
    
    for char in s:
        if char == '(':
            if balance > 0:
                result.append(char)
            balance += 1
        elif char == ')':
            balance -= 1
            if balance > 0:
                result.append(char)
                
    return ''.join(result)

print(removeOuterParentheses("(()())(())"))