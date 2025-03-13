#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){

    int x,y,k;
    cin>>x>>y>>k;

    int dif = abs(x-y);
    if(dif==k){
        cout<<0<<endl;
        continue;
    }

    if(k>x+y){
        cout<<-1<<endl;
        continue;
    }

    int req = abs(k-dif);
    if(req%2==1) cout<<-1<<endl;
    else cout<<req/2<<endl;

}
    return 0;
}