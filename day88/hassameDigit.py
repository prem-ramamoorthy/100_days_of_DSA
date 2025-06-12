def hasSameDigits(s) :
        while(len(s) >2 ) :
            n  = len(s)
            s1 = ''
            for i in range(n) :
                if i+1 < n :
                    n1 = (int(s[i]) + int(s[i+1]) ) %10 
                    s1 += str(n1)
            s = s1
        if (s[0] == s[1]) :
            return True
        else :
            return False
        
print(hasSameDigits("3902"))