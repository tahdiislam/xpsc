#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;  cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=3){
            for(int i =1; i<=n-1; i++){
                for(int j =1; j<=n; j++){
                    if(i==j){
                        cout<<1;
                    }
                    else{
                        cout<<0;
                    }
                }
                cout<<endl;
            }
            for(int i =1; i<=n; i++){
                cout<<1;
            }
        }
        else{
            cout<<"-1";
        }
        cout<<endl;
    }
    return 0;
}