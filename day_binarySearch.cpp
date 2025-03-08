#include<bits/stdc++.h>
using namespace std;
int BS(int arr[],int tar,int start,int end){
    if(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid]==tar) return mid;
        else if(arr[mid]<=tar){
            return BS(arr,tar,mid+1,end);
        }
        else return BS(arr,tar,start,mid-1);
    }
    return -1;
}
int main(){
    int n=6;
    int nums[n] ={-1,0,3,5,9,12};
    int tar = 9;
    cout<<BS(nums,tar,0,n-1);




    return 0;
}