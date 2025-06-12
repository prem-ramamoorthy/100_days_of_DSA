def getFinalState(nums, k, multiplier):
        for i in range(k) :
            m = min(nums)
            ind = nums.index(m)
            nums[ind] = m * multiplier
        return nums
    
print(getFinalState([2,1,3,5,6] , 5 , 2 ))