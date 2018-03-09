#include<bits/stdc++.h>
using namespace std;
int cifras(long long n){
    int S = 0;
    while(n!=0){
        S=S+(n%10);
        n=n/10;
    }
    return S;
}
int main(){
	long long n,x,minimo=1000000000000000000LL;
	int s=1,b=0;
	double num,num2;
	cin>>n;
	while( s <= 80){
        
		num=sqrt(s*s+4*n);
		num2=(-s+num)/2;
        
        cout<<s<<" "<<num<<" "<<int(num2)<<" "<< ceil(num2)<<" "<< n <<" "<<minimo<<endl;

		if( int(num2) == ceil(num2) ) {
			x = num2;
            cout << "entro    " << s << " " << x << endl;
			if(s == cifras(x)){
			
				minimo=min(x,minimo);
				cout<<minimo<<endl;
			}
		}
		else if(s == 80 && minimo == 1000000000000000000LL){
            
            cout << -1 << endl;
            break;
		}
		
		s++;
	}
	
	if(minimo != 1000000000000000000LL)
        cout<<minimo<<endl;
}
