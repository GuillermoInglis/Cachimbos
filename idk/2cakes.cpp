#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,na,x;
    cin >> x >> a >> b;
    int minimo=1000000;
    for(int i = 7 ; i <= 57 ;i = i + 10){
        n = (a-i)/x;
        if(n<0){
            break; 
        }
        minimo = min (n , minimo);
    }
    
    for(int i = 7 ; i <= 57 ;i = i + 10){
        n = (b-i)/x;
        if(n<0){
            break; 
        }
        minimo = min (n , minimo);
    }
    
    cout<<minimo<<endl;
    
return 0;
}
