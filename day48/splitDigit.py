def separateDigits(nums):
        result = []
        for i in nums :
            s = str(i)
            for i in s :
                result.append(int(i))
        return result 
    
print(separateDigits([13,25,83,77,0]))