/*
#include <bits/stdc++.h>

using namespace std;

vecto

int t,n,x[100],i=0,max,min;
int main(){
    cin>>n;
    while(){
    while(i<t){
            
        cin>>x[i];
        i++;  }
        
        i=0;
        while(i<t){
           max=x[i];
             if(x[i+1]>x[i]){
                  max=x[i+1];
               }
           i++;
                 }
          i=0;
        while(i<t){
            min=x[i]
            if(x[i+1]<x[i]){
                min=x[i+1];
            }        
                }
          d=max+min;
          d=d/2;
          cout<<d<<endl;
            
}
}
*/
/*
#include <bits/stdc++.h>

using namespace std;

vector <int> x;
int a,t,n;
int main(){

    cin>>t;
    while(t--){
        
        x.clear();
        cin>>n;
        while(n--){
            cin>>a;
            x.push_back(a);
        }
        
        sort(x.begin(),x.end());
        cout<<2*(x[x.size()-1]-x[0])<<endl;
        
        
        
    }
    
    
    
}*/


#include <bits/stdc++.h>

using namespace std;

int a,t,n,maxi=-10000000,mini=1000000;
int main(){

    cin>>t;
    while(t--){
        
        cin>>n;
        maxi=-10000000;mini=1000000;
        while(n--){
            
            cin>>a;
            if (a>maxi) maxi = a;
            if (a<mini) mini = a;
        
            
        }
        
        cout <<2 * ( maxi - mini ) << endl;
    }
}

