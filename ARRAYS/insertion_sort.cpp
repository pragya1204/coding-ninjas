//https://www.codingninjas.com/studio/problems/insertion-sort_3155179
#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}