#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    // char str[] = "hello";
    // cout <<str[0]<< endl;

    // char str[100];

    // cout<<"Enter char array: ";
    // cin.getline(str,100);

    // cout<<"Output: "<<str<<endl;

    //Reverse String

    


//Check palindrome

string str = "kola";
string check = str;
int st=0,end=str.size()-1;
bool flag = false;

while(st<end){
     swap(check[st++],check[end--]);
}

if(check==str){
    flag= true;
    cout<<"Palindrome"<<endl;
}else{
    cout<<"not"<<endl;
}








    return 0;





}
