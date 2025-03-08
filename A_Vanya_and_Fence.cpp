#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,h;
    cin>>t>>h;
    int width = 0;
    while(t--){
        int n;
        cin>>n;
        if(n>h){
            width = 2+width;
        }
        else{
            width++;
        }
    }
    cout<<width<<endl;
    return 0;
}