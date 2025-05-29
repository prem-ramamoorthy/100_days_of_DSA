def uncommonFromSentences(s1, s2) :
        result = []
        l1 = s1.split(" ")
        l2 = s2.split(" ")
        for i in l1 :
            if (l2.count(i) == 0):
                if l1.count(i) == 1 :
                    result.append(i)
        for i in l2 :
            if (l1.count(i) == 0):
                if l2.count(i) == 1 :
                    result.append(i)

        return result 
    
s1 = "this apple is sweet"
s2 = "this apple is sour"
print(uncommonFromSentences(s1,s2))