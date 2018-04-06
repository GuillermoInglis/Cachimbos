#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int tcases, cases = 0;
    cin >> tcases;
    string entrada;
    getline(cin,entrada);

    while( tcases -- ){
        int a = 0,  b = 0;
        cin >> a;
        getline(cin,entrada);
        for(int i = 0 ; i < entrada.size();i++) if( entrada[i] >= '0' && entrada[i] <= '9') b = entrada[i]-'0';
        cout << "Case "<< ++cases << ": " << a*0.5 + b*0.05 <<endl;
    }
}



