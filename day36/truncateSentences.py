def truncateSentence(s, k):
        l = s.split(' ')
        return " ".join(l[:k])

print(truncateSentence("Hello how are you Contestant", 4))