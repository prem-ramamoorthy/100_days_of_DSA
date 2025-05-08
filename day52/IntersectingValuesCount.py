def findIntersectionValues(nums1, nums2) :
        ls1 = set(nums1)
        ls1=list(ls1)
        ls2 = set(nums2)
        ls2=list(ls2)
        l = [0,0]
        for i in range(len(ls1)):
            n = l[1]
            l[1] = n+nums2.count(ls1[i])
        for i in range(len(ls2)):
            n = l[0]
            l[0] = n+nums1.count(ls2[i])
        return l 

nums1 = [1,2,3,4,5]
nums2 = [1,2,3,4,5]
print(findIntersectionValues(nums1, nums2))