#include <bits/stdc++.h>
using namespace std;



int main(){
    
    string cadenas[3];
    int t;
    
    cin>>t;
    
    while(t--){
        
        int ganof=0;
        int ganoc=0;
        int ganod=0;
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
        
        for(int i = 0; i<3 ; i++){
            
            if(cadenas[i][1]==cadenas[i][0] && cadenas[i][0]==cadenas[i][2] && (cadenas[i][2]=='X' || cadenas[i][2]=='O'))
            {ganof++; ganador=cadenas[i][1];}
            
        }
        
        for(int i = 0; i<3 ; i++){
            
            if(cadenas[1][i]==cadenas[0][i] && cadenas[0][i]==cadenas[2][i] && (cadenas[2][i]=='X' || cadenas[2][i]=='O'))
            {ganoc++; ganador=cadenas[1][i];}
            
        }
        
        if(cadenas[0][0]==cadenas[1][1] && cadenas[2][2]==cadenas[0][0] && (cadenas[2][2]=='X' || cadenas[2][2]=='O'))
            {ganod++; ganador=cadenas[1][1];}
        
        if(cadenas[0][2]==cadenas[1][1] && cadenas[1][1]==cadenas[2][0] && (cadenas[2][0]=='X' || cadenas[2][0]=='O'))
            {ganod++; ganador=cadenas[1][1];}
        
        
        
        if(ganof>1 || ganoc>1) cout<<"no"<<endl;
        
        else if(ganof+ganoc+ganod==2){
                
            if (contx==5 && conto==4)cout<<"yes"<<endl;
            else cout<<"no"<<endl;
            
            
        }
        
        
        else if (ganof+ganod+ganoc==0){
            
            if(contx-conto==1||contx==conto)cout<<"yes"<<endl;
            else cout<<"no"<<endl;
                
        }
        else{
            
            if (ganador=='X'){
               
                if(contx-conto==1)cout<<"yes"<<endl; 
                else cout<<"no"<<endl;
                
            }
            
            else{

                if(contx==conto)cout<<"yes"<<endl;
                else cout<<"no"<<endl;
                
            }
            
        }
        
    }
    
    
    
    return 0;
}
