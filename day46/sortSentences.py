def sortSentence( s: str) -> str:
        l = s.split(" ")
        result = [""] * len(l)
        for i in l:
            result[int(i[-1])-1] = i[:-1]
        return " ".join(result)
    

s = "is2 sentence4 This1 a3"
print(sortSentence(s))