#include<bits/stdc++.h>
using namespace std;

int solve(string s){
    int a = 0;

    for(char c:s){
        a+= c-'0';
    }
    return a;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int  a,b,c;
        cin>>a>>b>>c;

        if(a+b==c || a+c==b || b+c==a){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;

        }
    }

    return 0;
}