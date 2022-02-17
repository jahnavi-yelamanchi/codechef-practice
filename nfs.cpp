// question => https://www.codechef.com/LP2TO301/problems/NFS

#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int u, v, a, s;
        cin>>u>>v>>a>>s;
	    
        if(u<=v)
            cout<<"Yes"<<endl;
	    
        else{
            int sp = (u*u - 2*a*s);
            if(sp<=v*v)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
	return 0;
}
