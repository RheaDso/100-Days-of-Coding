def numJewelsInStones(self, jewel:str, stones:str)->int:
    c=0

    for i in jewel:
        c=c+stones.count(i)
    return c    
  