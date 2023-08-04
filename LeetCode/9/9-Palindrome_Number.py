class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0:
            return False

        reverse_x = 0
        tmp_x = x

        while tmp_x:
            remainder = tmp_x % 10
            tmp_x /= 10
            reverse_x = (reverse_x * 10) + remainder

        return x == reverse_x