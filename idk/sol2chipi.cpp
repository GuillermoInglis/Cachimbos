#include <bits/stdc++.h>
using namespace std;



int main(){
    
    string cadenas[3];
    int t;
    
    cin>>t;
    
    while(t--){
        
        int gano=0;
        char ganador;
        cin>>cadenas[0];
        cin>>cadenas[1];
        cin>>cadenas[2];
        

        int contx=0,conto=0;
        for(int i = 0; i<3 ; i++){
            
            for(int j = 0; j<3 ; j++){
            
                if(cadenas[i][j]=='X') contx++;
                if(cadenas[i][j]=='O') conto++;
            
            }
        
        }
    
        if(contx==conto || contx-conto==1 )cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    
    
    return 0;
}
