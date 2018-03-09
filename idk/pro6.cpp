#include <bits/stdc++.h>

using namespace std;
int a,b,c,d,suma;

int main(){
    while(1){
        cin>>a>>b>>c>>d;
        if((a+b+c+d)==0) break;
        
        suma=0;
        
        if( (a-b)<0 ) suma += 40 + a-b;
        else suma += a-b;
        
        if( (c-b)<0 ) suma += 40 + c-b;
        else suma += c-b;
        
        if( (c-d)<0 ) suma += 40 + c-d;
        else suma += c-d;
        
        cout<<(120+suma)*9<<endl;
                   
        }
    return 0;
}
