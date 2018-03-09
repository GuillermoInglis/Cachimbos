#include <bits/stdc++.h>
using namespace std;

bool pilas[28];


int main(){
    
    char letra;
    int cont;
    string total;
    
    while( getline( cin , total ) ){
        
        
        stringstream in(total);
    
        for(int i = 0 ; i <28 ; i ++ ){
                
            pilas[ i ] = false;
            
            
        }
            
        while(in >> letra){
        
            letra = letra - 'A';
            
            for(int i = (letra) ; i <28 ; i ++ ){
                
                pilas[ 27 ] = true;
        
                
                if( pilas[ i ] > 0 ){
                    
                    pilas[ i ] = false;
                    pilas[ letra ] = true;
                    break;
                    
                }
                
            }

        }
        
        cont = 0;
        
        for(int i = 0 ; i < 27 ; i ++ ){
            if( pilas[ i ] ) cont++;
        }
        
        cout << cont << endl;
        
    }
    
    return 0;
}
