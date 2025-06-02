def generate( n):
        l=[]
        l.append([1])
        if(n==1):
            return l
        l.append([1,1])
        if n==2 :
            return l
        for i in range(2,n) :
            res = [1]
            for j in range(1,i) :
                v = l[i-1][j-1] + l[i-1][j]
                res.append(v)
            res.append(1)
            l.append(res)
        return l

print(generate(5))