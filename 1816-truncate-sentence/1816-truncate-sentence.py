class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        s=s.split(" ")
        b=[]
        for i in range(k):
            b.append(s[i])
        return " ".join(b)

        
        