def mostWordsFound(sentences):
        count = 0 
        for i in sentences :
            l = i.split(" ")
            if(len(l) > count ):
                count = len(l)

        return count

print(mostWordsFound(["alice and bob love leetcode","i think so too","this is great thanks very much"]))