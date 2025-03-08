#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int pol =0;
    int utret =0;

    for(int i=0;i<n;i++){
        int event;
        cin>>event;
    if(event>0) pol+=event;
    else{
        if(pol>0) pol--;
        else utret++;
    }
    
    
    }

    cout<<utret<<endl;



    return 0;
}