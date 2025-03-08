#include<bits/stdc++.h>
using namespace std;

int main(){
 
    int t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    long long x = (n/15)*3;
    long long y= (n%15)+1;
    long long z = x+min(3LL,y);
    cout<<z<<endl;


    }



    return 0;
}