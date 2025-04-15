from typing import List
def frequencySort( nums: List[int]) -> List[int]:
        l = {}
        for i in nums :
            l.update({i : nums.count(i)})
        sorted_items = sorted(l.items(), key=lambda x: (x[1], -x[0]))
        res = []
        for i,j in sorted_items :
            for k in range(j) :
                res.append(i)
        return res

print(frequencySort ([1,1,2,2,2,3]))