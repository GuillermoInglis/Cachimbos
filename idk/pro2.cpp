
#include <bits/stdc++.h>
using namespace std;
int K,N,M,X,Y;
int m,n;
int main(){
    
    while(1){
        
        cin>>K;
        
        if(K==0){
           break;
        }
        cin>>X;
        cin>>Y;
        
        while(K--){
            
            
            cin>>N;
            cin>>M;
            n=N-X;
            m=M-Y;
            
            if(n>0 && m>0){
            cout<<"NE"<<endl;   
            }
            else if(n>0 && m<0){
            cout<<"SE"<<endl;   
            }   
            else if(n<0 && m>0){
            cout<<"NO"<<endl;   
            }
            else if(n<0 && m<0){
            cout<<"SO"<<endl;   
            }
            else{
                cout<<"divisa"<<endl;
            }
        }
    
    
    }
 return 0;   
}
