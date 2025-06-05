#include<bits/stdc++.h>
using namespace std;

void changeA(int* ptr){
    *ptr = 20;
}


void changeAlias(int &b){ // pass by refrences by alias 
    b =20;
}




int main(){

int a= 10;
int* ptr = &a;

cout<<ptr<<endl;
ptr++;
cout<<ptr<<endl;
ptr--;
ptr+1;
ptr+3;
cout<<ptr<<endl;




//changeA(&a);
// changeAlias(a);
// cout<<a<<endl;



















// int a =10;
// int* ptr = &a;
// int** ptr2 = &ptr;



// // cout<<&a<<endl;
// // cout<<ptr<<endl;
// // cout<<&ptr<<endl;
// // cout<<*ptr<<endl;

// cout<<&ptr<<endl;
// cout<<ptr2<<endl;
// cout<<*(&a)<<endl;
// cout<<*ptr<<endl;
// cout<<**ptr2<<endl;

// int** ptr = NULL;

// cout<<*ptr<<endl;



    return 0;
}