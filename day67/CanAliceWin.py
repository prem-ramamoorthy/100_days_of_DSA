def canAliceWin(nums) -> bool:
        single = sum([i for i in nums if len(str(i)) == 1])
        double = sum([i for i in nums if len(str(i)) == 2])
        return single != double

nums = [1,2,3,4,10]
print(canAliceWin(nums))