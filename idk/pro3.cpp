 
#include <bits/stdc++.h>

using namespace std;
int a,b,c;
int T;
int main(){
    cin>>T;
    int K=T;
    while(T--){
        cin>>a;
        cin>>b;
        cin>>c;
        
        cout<<"Case "<<K-T<<": ";
        
        if((a<b && b<c) || (c<b && b<a) ){
            cout<<b<<endl;
        }
        else if((b<a && a<c) || (c<a && a<b)){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
        }
        return 0;
}
