#include<bits/stdc++.h>
using namespace std;

string isPrime(int n){
    for(int i=2; i*i<=n;i++){
        if(n%i==0){
            return "Non-Prime";
        }
    }
    return "Prime";
}

void printDigit(int n){
    int count =0;
    int sum=0;
    while(n!=0){
        int digit= n%10;
        cout<<digit<<endl;
        count++;
        sum+=digit;

        n=n/10;
    }
    cout<<"Total digit in N: "<<count<<endl;
    cout<<"Sum of N: "<<sum<<endl;
}

string isArmstrong(int n){
    int sum = 0;
    int N=n;
    while(n!=0){
        int digit = n%10;
        sum+= (digit*digit*digit);
        n=n/10;
    }
    if(sum == N) return "Number is armstrong";
    else return "Number is not armstrong";
}

int gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}

int gcdRecur(int a,int b){
    if(b==0) return a;
    return gcdRecur(b,a%b);
}

int lcm(int a,int b){
    int gcdVal = gcd(a,b);
    return (a*b)/gcdVal;
}

int main(){

    int n=153;
    cout<<isPrime(n)<<endl;

    //isDigit
    printDigit(n);
    
    //shortcut of counting 
    cout<<(int)(log10(n)+1)<<endl;

    //isArmstrong
    cout<<isArmstrong(n)<<endl;

    //gcd
    cout<<gcd(20,28)<<endl;
    cout<<gcdRecur(20,28)<<endl;
    //lcm
    cout<<lcm(20,28)<<endl;

    return 0;
}