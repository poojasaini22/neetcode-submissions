class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        # res=[]
        # i,j=0,0
        # while(i<len(word1) and j<len(word2)):
        #     res.append(word1[i])
        #     res.append(word2[j])
        #     i+=1
        #     j+=1
        # res.append(word1[i:])
        # res.append(word2[j:])
        # return "".join(res)

        # Method 2 one pointer
        res=[]
        for i in range(max(len(word1),len(word2))):
            if i<len(word1):
                res.append(word1[i])
            if i<len(word2):
                res.append(word2[i])
            
        return "".join(res)

