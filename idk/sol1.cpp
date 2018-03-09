#include <bits/stdc++.h>
using namespace std;

int love(string name){
    
    int res=0,resaux;
    
    for(int i = 0 ; i< name.size() ; i++){
        
        if((name[i]>='A' && name[i]<='Z' ) || (name[i]>='a' && name[i]<='z' ))
            res += tolower(name[i])-'a'+1;
    }
    
    while((res/10)>0){
        
        resaux=res;
        res=0;
        while(resaux>0){
            
            res+=resaux%10;
            resaux=resaux/10;
        }
        
    }
    return res;
    
}


int main(){
    
    string a,b;
    while(getline(cin,a)){
        getline(cin,b);
        int m = love(a);
        int n = love(b);
        int x = max(m,n);
        int y = min(m,n);
        
        printf("%.2f %%\n",100.0*y/x);
    
        
    }
    
    
    return 0;
}
