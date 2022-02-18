// question => https://www.codechef.com/LP2TO301/problems/MAKEDIV3

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=1;i<=n;i++){
	        if(i==1 || i==n)
	            cout<<'3';
	        else cout<<'0';
	    }
	    cout<<endl;
	}
	return 0;
}
