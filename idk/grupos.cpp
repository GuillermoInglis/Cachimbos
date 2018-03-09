#include <bits/stdc++.h>
#include <ctime>       
#include <cstdlib>     

using namespace std;

int myrandom (int i) { return rand()%i;}

int main () {
    
    srand ( unsigned ( std::time(0) ) );
    vector <string> myvector;
    string a;
    
    while(cin >> a){
        
        myvector.push_back(a);
        
    }
    
    random_shuffle ( myvector.begin(), myvector.end() );

    printf("         Group1         Group2\n");
    printf("         ======         ======\n");
    
    
    for (int i = 0 ; i < myvector.size()/2 ; i++){
        string a = myvector[i];
        string b = myvector[i + myvector.size()/2];
        printf("  *%12s  *%12s\n", a.c_str() , b.c_str() );
    }

  return 0;
}
