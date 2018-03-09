#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int a;
    string calle;
    
    
    while(true){
        
        cin >> a;
        if(!a)  break;
        cin >> calle;
        
        int Rend = -10;
        int Dend = -10;
        int distancia = INT_MAX;
        
        for(int i = 0 ; i < a ; i++){
            
            if(calle[i] == 'Z') {distancia = 0; break;}
            else if(calle[i] == 'R') Rend = i;
            else if(calle[i] == 'D') Dend = i;
            
            if(Rend > -1 && Dend > -1)
                distancia = min( abs(Dend - Rend) , distancia );
            
            
        }
        
        cout << distancia << endl;
        
    }
    
    
    return 0;
    
    
}
