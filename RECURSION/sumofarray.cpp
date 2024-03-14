#include<iostream>
using namespace std;
int sum( int arr[], int size){
    if(size==0) return 0;
    if(size==1) return arr[size];
    
    int ans= arr[size]+ sum(arr, size-1);
    cout<<ans<<endl;
    return ans;
}
int main(){
    int arr[10]={12,0,0,0,0,1,2,3,0,1};
    int size= 10;
    int ans= sum(arr, size);
    cout<<ans;


    return 0;
}