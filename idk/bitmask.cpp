#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int n , a[20] , mini = 1000000, suma;
    cin>>n;
    int st=0; 
    for(int l = 0;l<n;l++){
        
        cin>>a[l];
        st=st+a[l];
        
    }
    for(int i=0;i< (1<<n) ;i++){
        suma=0;
        for(int j = 0;j<n; j++){
            if(i & (1<<j)){
                suma=suma+a[j];
                }
            }   
       mini = min(abs(st-(2*suma)),mini);
       

    }
    cout<<mini<<endl;
}

