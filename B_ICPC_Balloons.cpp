#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;


        int bal = 0;
        bool solved[26] = {false};

        for(char c:s){
            if(!solved[c-'A']){
                bal +=2;
                solved[c-'A'] = true;
            }
            else{
                bal++;
            }
        }
        cout<<bal<<endl;
    }

    return 0;
}