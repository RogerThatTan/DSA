#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int res = -1;
        int n;
        cin>>n;
        map<int,int> check;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            check[x]++;
            if(check[x]>=3){
                res=x;
            }
        }
        cout<<res<<endl;
    }


    return 0;
}