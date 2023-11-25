#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n*(n+1)/2%n==0){
	        cout<<-1<<endl;
	    }else{
	        for(int i=1;i<=n;i+=2){
	            cout<<i+1<<" "<<i<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}