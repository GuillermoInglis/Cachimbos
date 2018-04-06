#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin >> n;
    vector< vector<int> > res;
    vector<int> aux;
    aux.push_back(1);
    
    for(int i = 0 ; i < n ; i++ ){
        
        res.push_back(aux);
        //limpia el vector
        aux.clear();
        aux.push_back(1);
        
        for(int j = 0 ; j < i ; j++)
            //vector de vectores
            aux.push_back( res[i][j] + res[i][j+1] );
        
        aux.push_back(1);
        
    }
    
    for(int i = 0 ; i < n ; i++ ){
            
        for(int j = 0 ; j < n-i-1 ; j++ ) printf(" ");
        

        for(int j = 0 ; j < res[i].size() ; j++)
            printf("%d ", res[i][j]);
        
        cout << endl;
        
    }
    
    return 0;
}
