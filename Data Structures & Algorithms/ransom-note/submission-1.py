class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        hashmap=Counter(magazine)
        hashmap2=Counter(ransomNote)
        print(hashmap)
        print(hashmap2)
        valid=True
        for i,count in hashmap2.items():
            if hashmap[i] < count :
                valid=False
                break
            else:
                continue
        return valid

