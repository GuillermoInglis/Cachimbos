#include <bits/stdc++.h>
using namespace std;

int m,n,t;

int main(){
    
    int n, a, maximo = INT_MIN;
    cin >> t;
    
    while(t--){
        
        cin >> n;
        maximo = INT_MIN;
        
        while( n-- ){
            
            cin >> a;
            if(a > maximo) maximo = a;
            
        }
        
        cout << maximo << endl;
 
    }
    return 0;   
}

