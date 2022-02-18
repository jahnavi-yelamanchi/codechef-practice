# question => https://www.codechef.com/LP2TO301/problems/INDIPERM

t=int(input())
for i in range(t):
    n = int(input())
    for x in range(1,n):
        print(x+1,end=" ")
    print(1,end="\n")
