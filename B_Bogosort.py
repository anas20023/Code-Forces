# Python CP Template

tc=int(input())
for i in range(0,tc):
    n=int(input())
    x = [int(i) for i in input().split()]
    x.sort(reverse=True)
    for j in range(0,n):
        print(x[j] ,end=" ")
    print("")
        