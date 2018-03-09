 
#include <bits/stdc++.h>

using namespace std;
int a,b;
int t;
int main(){
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        
        if(a > b){
            cout<<">"<<endl;
        }
        else if(a < b){
            cout<<"<"<<endl;
        }
        else {
            cout<<"="<<endl;
        }  
    }
return 0;
}

