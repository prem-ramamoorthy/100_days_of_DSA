def judgeCircle(moves):
        x = 0
        y = 0
        for i in moves :
            if i == "U" :
                y+=1
            elif i == "D" :
                y-=1
            elif i == "R" :
                x +=1 
            else :
                x-=1
        return x==y==0
    
print(judgeCircle("LL"))