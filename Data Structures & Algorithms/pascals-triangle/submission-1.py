class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        result=[]
        #result.append[1]
        for i in range(numRows):
            if(i==0):
                result.append([1])
                continue
           
            row=[]
            for j in range(i+1):
                temp=[0]+result[-1]+[0]
                row.append(temp[j]+temp[j+1])
            result.append(row)
        return result
