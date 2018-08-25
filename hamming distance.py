class Solution:
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        o = x ^ y
        return sum(1 for i in range(32) if o & 1<<i)
