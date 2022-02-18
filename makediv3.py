# question => https://www.codechef.com/LP2TO301/problems/MAKEDIV3

t = int(input())
for i in range(t):
    n = int(input())
    for x in range(1,n+1):
        if(x == 1 or x == n):
            print('3',end="")
        else:
            print('0',end="")
    print("\n")
