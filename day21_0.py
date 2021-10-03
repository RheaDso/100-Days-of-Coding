def mountain(arr):
    s=""
    for i in range(1, len(arr)):
        if arr[i]>arr[i-1]:
            s=s+'U'
        elif arr[i]<arr[i-1]:
            s=s+'D'
        else:
            return False
    if 'D' not in s or 'U' not in s:
        return False
    elif 'DU' in s:
        return False 
    else:
        return True

arr = [0,3,2,1]

