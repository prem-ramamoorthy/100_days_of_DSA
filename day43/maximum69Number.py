def maximum69Number (num: int) -> int:
        result = num
        stnum = str(num)
        for i in range(len(stnum)) :
            s = stnum
            if stnum[i]=='9':
                s = stnum[:i] + "6" + stnum[i+1:]
                if result < int(s) :
                    result = int(s)
            elif stnum[i]=='6':
                s = stnum[:i] + "9" + stnum[i+1:]
                if result < int(s) :
                    result = int(s)
        return result

print(maximum69Number(9996))