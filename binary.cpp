#include<bits/stdc++.h>
using namespace std;
int main(){
    double A,B,C,T,h,l,mid,res;
    cin>>T;
    
    while(T--){
        cin>>A>>B>>C;
        h=1.0*(C-B)/A;
        l=1.0*(C+B)/A;
        while(true){
        	cout << l << " " << h << endl;
            if( (l-h)<0.000001) break;
            else mid=(h+l)/2;
            res=1.0*(A*mid)+1.0*B*(sin(mid))-1.0*C;
            
            if( res<0 ){
                h=mid;
            }
            
            else{
                l=mid;
            }
            
        }
        printf("%.6f\n",h);        
    }
    
}
