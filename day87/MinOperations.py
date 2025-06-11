def minOperations(nums, k) -> int:
        n = sum(nums) 
        result = 0 
        if(n% k == 0) :
            return 0 
        while(n% k != 0 and n>0) :
            n-=1 
            result+=1
        return result 
    
print(minOperations([3,9,7] , 5))