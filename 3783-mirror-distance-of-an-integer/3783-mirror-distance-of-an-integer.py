class Solution(object):
    
        
    def mirrorDistance(self, n):
        
        """
        :type n: int
        :rtype: int
        """
        ans = 0
        m = n
        x = 0
        while m:
             x *= 10
             x += m % 10
             m //=10 

        return abs(n-x) 


