#include<iostream>
using namespace std;
int SmallestPowerOfTwoGreaterOrEqualThanN(int n){
    int x = 1;
    while(x<n){
        x = x << 1;
        cout << "=----------> " << x << endl;
       // break;
    }
    return x;
}

int main()
{
    printf("%d\n",SmallestPowerOfTwoGreaterOrEqualThanN(5));

    return 0;
}