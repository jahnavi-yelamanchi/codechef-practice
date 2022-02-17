# question => https://www.codechef.com/LP2TO301/problems/NFS

t = int(input())
for i in range(t):
    u,v,a,s = map(int,input().split())
    if((u**2 - 2*a*s) <= v**2):
        print("yes")
    else:
        print("no")
