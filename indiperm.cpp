// question => https://www.codechef.com/LP2TO301/problems/INDIPERM

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=1;i<n;i++)
	        cout<<i+1<<" ";
	    cout<<1<<endl;
	}
	return 0;
}
