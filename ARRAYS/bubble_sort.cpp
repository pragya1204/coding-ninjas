//https://www.codingninjas.com/studio/problems/bubble-sort_980524
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    bool swapped=false;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                swapped=true;
            }
        }
        if(swapped==false) break;
    }
}