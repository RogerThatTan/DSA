#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int an=0,dan=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') an++;
        else dan++;
    }
    if(an==dan) cout<<"Friendship"<<endl;
    else if(an>dan)  cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;
    return 0;
}