#include <bits/stdc++.h>
using namespace std;

struct big{
    string num;
    big(){} };
big bignum(string m){
    big res;
    res.num = m;
    return res;}
big operator+(const big &a ,const big &b ){
    
    string large , shor, res = "";
    if( a.num.size() > b.num.size() ) large = a.num,shor = b.num;
    else large = b.num, shor = a.num;
    
    int carry = 0, j = shor.size() -1 , i = large.size() - 1, aux, suma; 
    
    while( i >= 0 ){
            
        if( j >= 0 ) aux = shor[ j ] - '0';
        else aux = 0;
        suma = large[ i ] - '0' + aux + carry;
        res = to_string( suma%10 ) + res;
        carry = suma/10;
        i--; j--;
    }
    
    if( carry ) res = to_string( carry ) + res;

    return bignum(res);}

big operator*( const big &a ,const big &b ){
    
    if( a.num == "0" || b.num == "0") return bignum("0");
    string res= "";
    string large , shor;
    
    if( a.num.size() > b.num.size() ) large = a.num,shor = b.num;
    else large = b.num, shor = a.num;
    
    int i = large.size() -1 , j = shor.size()-1;
    int carry = 0;
    
    while( j >= 0 ){
        
        int product = carry;
        int l = i, s = j ; 
        
        while( s >= 0 && (shor.size() - s) <= ( large.size() - i)  ){
                
            product += (large[ l ]-'0') * (shor[ s ]-'0');  
            s--;l++;
        }
        
        res = to_string( product%10 ) + res;
        carry = product/10;

        if( i == 0 ) j--;
        else i--;
        
    }
    
    if( carry ) res = to_string( carry ) + res;

    return bignum(res);}

int main(){
    
    int kin, n;
    big resp[ 200 ][ 20 ];
    
    for(int kint = 0; kint <= 15 ; kint++){
        
        big k = bignum( to_string( kint ) ),res = bignum( "0" ),pot = bignum( "1" );
        
        for( int i = 1 ; i <= 150 ; i++ ){
            
            pot = pot * k;
            res = res +  bignum( to_string( i ) )* pot ;
            resp[ i ][ kint ] = res;
        }
    }
    
    while( cin >> n >> kin ){
        
        cout << resp[ n ][ kin ].num<<endl;
        
        
    }
    
    return 0;}
