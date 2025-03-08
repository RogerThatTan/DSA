#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4};
    int n= vec.size();
    vector<int> ans(n, 1); 

    for(int i=0;i<n;i++){
        int prod = 1;
        for(int j=0;j<n;j++){
            if(i!=j){
                prod*=vec[j];
            }
        }
        ans[i]=prod;
    }
    for(int val:ans){
        cout<<val<<",";
    }
    return 0;
}