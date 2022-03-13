#include<bits/stdc++.h>
using namespace std;
#define INT_SIZE 32
// bujhiii naiii ...

// Don't know how thu fu** work here...

//   http://ideone.com/oNEaFN


class TrieNode{
public:
    int value;
    TrieNode* Child[2];
    TrieNode(){
        value = 0;
        Child[0] = Child[1] = NULL;

    }
};

TrieNode* getNode(){
    return  new TrieNode;
}

void insert(TrieNode* root, int key){
    TrieNode *temp = root;

    // start from the most significant bit , insert all
    // bit of key one-by-one into trie
    for (int i = INT_SIZE-1; i >= 0; i--)
    {
        // Find current bit in given prefix
        bool current_bit = (key & (1<<i));

        // Add a new Node into trie
        if (temp->Child[current_bit] == NULL)
            temp->Child[current_bit] = getNode();

        temp = temp->Child[current_bit];
    }

    // store value at leafNode
    temp->value = key ;

}

int minXORUtil(TrieNode* root, int k){
    TrieNode* temp = root;
    for(int i = INT_SIZE-1;i>=0;i--){
        bool current_bit = (k & ( 1 << i));
        if(temp->Child[current_bit] != NULL){
            temp = temp->Child[current_bit];
        }
        else if(temp->Child[1-current_bit] != NULL){
            temp = temp->Child[1- current_bit];
        }
    }
    return k^ temp->value;

}

int minXOR(int arr[],int n){
    int min_xor = INT_MAX;
    TrieNode* root = getNode();
    insert(root, arr[0]);
    for(int i=1;i<n;i++){
        min_xor = min(min_xor, minXORUtil(root,arr[i]));
        insert(root, arr[i]);
    }
    return min_xor;
}

int minXORBySorting(vector<int>& A){
    sort(A.begin(),A.end());
    int min_xor = INT_MAX;
    for(int i=0;i<A.size()-1;i++){
        min_xor = min(min_xor,A[i] ^ A[i+1]);
    }
    return min_xor;

}


int main(){

    int arr[] = {9, 5, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << minXOR(arr, n) << endl;
    vector<int> A = {9,5,3};
    cout << minXORBySorting(A) << endl;

    return 0;
}