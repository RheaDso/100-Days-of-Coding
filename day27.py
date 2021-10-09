class Solution:
    def findMaxConsecutiveOnes(nums):
        count=0
        result=0
        for i in range (len(nums)):
            if nums[i]==1:
                count+=1
            else:
                count=0
            result=max(result, count)
        print(result)


    nums=[1,1,0,1,1,1]
    findMaxConsecutiveOnes(nums)