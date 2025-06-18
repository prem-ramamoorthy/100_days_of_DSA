def countPrefixSuffixPairs(words):
        result = 0
        n = len(words)
        for i in range(n) :
            for j in range(i+1,n) :
                ps = words[i]
                word = words[j]
                n1 = len(ps)
                if word.startswith(ps) and word.endswith(ps):
                    result += 1

        return result
    
print(countPrefixSuffixPairs(["a","aba","ababa","aa"]))