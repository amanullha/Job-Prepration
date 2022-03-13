#include<bits/stdc++.h>
using namespace std;
int singleNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int a = A[0];
    int len = (int) A.size();
    for(int i=1;i<len;i++){
        a = a ^ A[i];
    }
    return a;

}

int main(){

    vector<int> A = {1,2,2,3,1};
    cout << singleNumber(A) <<endl;

    return 0;
}