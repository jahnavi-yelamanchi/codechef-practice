# question => https://www.codechef.com/LP2TO301/problems/MANYSUMS

t = int(input())
for i in range(t):
    l,r = map(int,input().split())
    c = 2*r - 2*l +1
    print(c)
