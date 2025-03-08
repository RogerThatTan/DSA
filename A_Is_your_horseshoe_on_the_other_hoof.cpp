#include<bits/stdc++.h>
using namespace std;

int  main(){
   set<int> ans;
   for(int i=0;i<4;i++){
    int n;
    cin>>n;
    ans.insert(n);
   }
   cout<<4-ans.size()<<endl;


    return 0;
}