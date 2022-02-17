// question => https://www.codechef.com/LP2TO301/problems/NFS

#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int u,v,a,s;
        cin>>u>>v>>a>>s;
        if((u^2 + 2*a*s) <= v^2)
            cout<<"yes\n";
        else cout<<"no\n";
    }
	return 0;
}
