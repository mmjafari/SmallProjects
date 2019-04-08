#!/bin/python
def nth(arr, yoku):
    if (arr[3] - arr[2] < arr[2] - arr[1] * 10):
        pass
        #return fnth(arr, yoku)
    elif (arr[3] - arr[2] == arr[2] - arr[1]):
        print("yooo!")
        i = arr[3] - ((arr[2] - arr[1]) * 3)
        return (yoku * (arr[3] - arr[2]) + i)
    else:
        ar2 = [arr[1]-arr[0], arr[2] - arr[1], arr[3] - arr[2], arr[4]-arr[3]]
        print(ar2)
        Q = nth(ar2, yoku)
        try:
            huff = arr[yoku - 1]
            return (huff + Q)
        except IndexError:
            return (nth(arr, yoku - 1) + Q)


arr = [0,0,0,0,0,0]
for i in range(0,6):
    print (i)
    arr[i] = int(input(">> "))
print(arr)
ii = int(input(" >> "))
print(nth(arr,ii))
