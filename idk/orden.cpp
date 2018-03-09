#include <bits/stdc++.h>
using namespace std;


#define N 100000000

bool visit[ N ];
int cant[ N ];

int main(){
    
    int a,cont;
    vector < int > cad, orden;
    
    while( cin >> a ){
    
        cad.push_back( a );
    }
    
    for(int i = 0 ; i < N ; i++ ){
        
        visit[ i ] = false;
    }
    
    for(int i = 0 ; i < cad.size() ; i++ ){
        
        if( !visit[ cad[ i ] ] ){
            
            visit[ cad[ i ] ] = true;
            
            orden.push_back( cad[ i ] );
            
        }
    }
    
    sort( cad.begin() , cad.end() );
    
    a = cad[0];
    
    cont = 1;
    
    for(int i = 1 ; i < cad.size() ; i++ ){
        
        if( cad[ i ] != a ){
            
            cant[ a ] = cont;
            cont = 0;
            a = cad[ i ]; 
            
        }
        cont++;
    }
    
    cant[ a ] = cont;
    
    for(int i = 0 ; i < orden.size() ; i++ ){
        
        cout << orden[i] << " " << cant[ orden[ i ] ] << endl;
    }
    
    
    
    
    return 0;
}
