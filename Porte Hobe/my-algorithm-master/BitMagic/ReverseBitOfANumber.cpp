#include<bits/stdc++.h>
using namespace std;


int rev(unsigned int n){
   unsigned  int out = 0;
    for(int i=0;i<31;i++){
        out = (out |(n&1));
        n  = n >> 1;
        out = out<< 1;
    }
    cout << out << endl;
    return out;
}

void printBit(int n){
    for(int i=31;i>=0;i--){
        cout << (n&1);
        n = n>>1;
    }
    cout << endl;
}

int main(){
    rev(1);
    //rev(1);
   // printBit(1);
   // printBit(rev(2147483648-1));
    return 0;
}