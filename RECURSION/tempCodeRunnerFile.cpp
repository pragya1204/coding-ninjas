#include<iostream>
using namespace std;
#include<vector>

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int newpivot=s+cnt;
    swap(arr[s],arr[newpivot]);
    int i=s,j=e;
    while(i<newpivot && j>newpivot){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<newpivot && j>newpivot){
            swap(arr[i++],arr[j--]);
            
        }

    }
    return newpivot;


}
void quicksort(int arr[], int s, int e){

    //base case
    if(s>=e) return;

    //partition
    int p=partition(arr,s,e);

    //recursion
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

}
int main(){
    int arr[7]={6,9,18,56,87,98,2};
    int n=7;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}