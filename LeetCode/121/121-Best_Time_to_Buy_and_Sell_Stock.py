class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        max_profit = 0
        lowest_price = 99999

        for  current_price in prices:
            if current_price < lowest_price:
                lowest_price = current_price
            max_profit = max(max_profit, current_price-lowest_price)

        return max_profit