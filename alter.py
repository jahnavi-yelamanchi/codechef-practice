# question => https://www.codechef.com/LP2TO301/problems/ALTER

t = int(input())
for i in range(t):
    a,b,p,q = map(int,input().split())
    if(p%a==0 and q%b==0 and (p//a==q//b or abs(p//a-q//b)==1)):
        print("YES")
    else :
        print("NO")
