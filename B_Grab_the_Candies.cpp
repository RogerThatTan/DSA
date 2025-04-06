#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int d;
        cin>>d;
        int even = 0, odd=0,sumEven=0, sumOdd=0;
        for(int i=0;i<d;i++){
            int n;
            cin>>n;
            if(n%2==0){
                even++;
                sumEven +=n;
            }
            else{
                odd++;
                sumOdd +=n;
            }
        }
        if(sumEven>sumOdd){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;

        }



    }

    return 0;
}