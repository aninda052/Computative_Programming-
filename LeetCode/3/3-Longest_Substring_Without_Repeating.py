class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        result = 0
        sub_string = ''
        for char in s:
            for idx, i in enumerate(sub_string):
                if i == char:
                    new_sub_string = ''
                    for i in range(idx + 1, len(sub_string)):
                        new_sub_string += sub_string[i]

                    sub_string = new_sub_string
                    break

            sub_string += char
            result = max(result, len(sub_string))

        return result