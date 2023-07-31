class Solution(object):
    def insert(self, intervals, newInterval):
        """
        :type intervals: List[List[int]]
        :type newInterval: List[int]
        :rtype: List[List[int]]
        """
        result = []
        isMerged = False
        for i, j in intervals:
            if newInterval[1] < i or newInterval[0] > j:
                if newInterval[1] < i:
                    if not isMerged: result.append([newInterval[0], newInterval[1]])
                    result.append([i, j])
                    isMerged = True

                if newInterval[0] > j:
                    result.append([i, j])
            elif newInterval[0] > i or newInterval[1] < j:

                if newInterval[0] > i:
                    newInterval[0] = i
                if newInterval[1] < j:
                    newInterval[1] = j
            elif newInterval[1] == i or j == newInterval[0]:
                if newInterval[0] == j:
                    newInterval[0] = i
                if newInterval[1] == i:
                    newInterval[1] = j

        if not isMerged: result.append([newInterval[0], newInterval[1]])
        return result
