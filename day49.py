l1=[1,2,4]
l2=[3,1,2]
l1temp=[]
for i in l1:
    l1temp.append(str(i))
l1="".join(l1)[::-1]
l2="".join(l2)[::-1]
print(int(l1)+int(l2))
