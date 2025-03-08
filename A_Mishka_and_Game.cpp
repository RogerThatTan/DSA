#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    int mishka =0, chris =0;
    while(t--){
        int m,c;
        cin>>m>>c;
        if(m>c) mishka++;
        else if(c>m) chris++;
    }
    if(mishka==chris) cout<<"Friendship is magic!^^"<<endl;
    if(mishka>chris) cout<<"Mishka"<<endl;
    if(chris>mishka) cout<<"Chris"<<endl;
   
    return 0;
}