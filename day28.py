def reversevowel(s):

    lst=list(s)
    l=0
    r=len(lst)-1
    while l<r:
        if lst[l] not in "aeiouAEIOU":
            l+=1
        elif lst[r] not in "aeiouAEIOU":
            r-=1
        else:
            lst[l],lst[r]=lst[r],lst[l]
            l+=1
            r-=1
        
    print("".join(lst))
    
s="leetcode"
reversevowel(s)