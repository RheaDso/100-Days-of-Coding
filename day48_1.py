first={}
second={}
s="aaA"

for i in s:
    print(first.get(i,0))
    first[i]=first.get(i,0)+1
print(first)  