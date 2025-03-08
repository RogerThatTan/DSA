#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
    int h,m;
    cin>>h>>m;
    int tH = 23-h;
    int tM =60-m;

    int ans = ((tH*60) +tM);
    cout<<ans<<endl;
}



    return 0;
}