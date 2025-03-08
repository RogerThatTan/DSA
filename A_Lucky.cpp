#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n=6;

        int first =0;
        int last =0;

        for(char c : s){
            if(n!=3){
                first+=c-'0';
                n--;
            }
            else{
                last+=c-'0';
            }
        }
        if(first==last) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}