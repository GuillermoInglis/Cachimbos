#include <bits/stdc++.h>
using namespace std;


int main(){
        int n,s,x,m;
        cin>>n;
        s=(n*n*n+n)/2;
        m=n/2;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<j<<" "<<s/m-j<<" ";
            }
            cout<<endl;
        }
    return 0;
}
