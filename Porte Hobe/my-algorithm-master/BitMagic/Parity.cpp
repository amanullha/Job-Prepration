#include<bits/stdc++.h>
using namespace std;
bool isEvenParity(int n)
{
    int count = 0;
    for(int i=0;i<32;i++){
       // cout << (n&1) ;
        if(n&1){
            count++;
           // cout << "------------> " << count << endl;
        }
        n = n >>1 ;
       // cout << "---------------- !! " << n << endl;
        //cout <<( (n<<31-i) & 1);

    }
    //cout << endl;
    if(count%2 == 0)return true;
    return false;

}

int main(){
   // printf("%d\n",sizeof(int));
    cout <<boolalpha << isEvenParity(2) << endl;


    return 0;
}