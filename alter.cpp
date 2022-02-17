//question => https://www.codechef.com/LP2TO301/problems/ALTER

#include <iostream>
using namespace std;

int main() {
	// yourcode goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int a,b,p,q;
	    cin>>a>>b>>p>>q;
	    if(p%a==0 && q%b==0 && (p/a==q/b || abs(p/a-q/b)==1))
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}
