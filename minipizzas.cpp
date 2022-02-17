// question => https://www.codechef.com/LP2TO301/problems/MINPIZZAS

#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    long long int t,p;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        p = n/__gcd(n,k);
        cout<<p<<endl;
    }
	return 0;
}
