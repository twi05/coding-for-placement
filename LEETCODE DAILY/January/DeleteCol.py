class Solution:
    def minDeletionSize(self, A):
        count=0
        row = len(A)
        col = len(A[0])

        for i in range (row):
            for j in range (col):
                if(A[j][i]> A[j+1][i]):
                    count=count+1
                    break
        return count    