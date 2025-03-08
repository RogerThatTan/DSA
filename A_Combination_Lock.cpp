#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string current,target;
    cin>>current>>target;
    int ans = 0;
    for(int i=0;i<n;i++){
        int digit1 = current[i] - '0';
        int digit2 = target[i] - '0';
        int diff = abs(digit1-digit2);
        ans+=min(diff,10-diff);
    }
    cout<<ans<<endl;
    return 0;
}