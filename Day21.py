
def mountain(arr):
    peakindex=0
    peakvalue=arr[0]
    for i in range(1, len(arr)):
        if peakvalue<arr[i]:
            peakvalue=arr[i]
            peakindex=i
            print(peakindex)

arr = [0, 10, 5, 2] 
arr = [0, 2, 1, 0]

mountain(arr)
