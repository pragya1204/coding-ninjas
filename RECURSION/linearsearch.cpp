#include<iostream>
using namespace std;
bool linearsearch(int arr[], int key, int n){
    if(n==0||n==1) return false;
    if(arr[n]==key) return true;
    else {
        return linearsearch(arr, key,n-1 );
    }

}
int main(){
    int arr[5]={23,45,67,89,5};
    int n=4;
    int key;
    cin>>key;
    bool ans= linearsearch(arr, key,n );
    cout<<ans;

    return 0;
}