# question => https://www.codechef.com/LP2TO301/problems/MINPIZZAS

import math

t = int(input())
for i in range(t):
    n,k = map(int,input().split())
    print(n//math.gcd(n,k))
print("\n")
