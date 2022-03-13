#include<bits/stdc++.h>
using namespace std;
int numberOfSetBits(int n){
    int count = 0;
    while(n){
        if(n&1)count++;
        n = n>>1;
    }
    //cout << count <<  endl;
    return count ;
}


int main(){

    cout << numberOfSetBits(7) <<  endl;
    return 0;
}