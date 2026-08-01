class Solution(object):
    def twoSum(self, nums, target):
        ans=[]
        dict ={}
        for i in range(len(nums)):
            dict[nums[i]]=i

        i=0
        for i in range(len(nums)):
         if (target-nums[i] in dict and dict [target-nums[i]]!= i):
            ans.append(i)
            ans.append(dict[target-nums[i]])
            break
             
        return ans
        