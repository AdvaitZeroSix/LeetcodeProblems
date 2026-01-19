class Solution(object):
    def mySqrt(self, x):
        if (x==0):
            return 0
        res=x
        while ((res*res)>x):
            res=(res+(x/res))//2
        return res
