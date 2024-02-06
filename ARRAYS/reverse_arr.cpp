//reversing an array from m index
//https://www.codingninjas.com/studio/problems/reverse-the-array_1262298

#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr , int m){
    vector<int> :: iterator iter1=arr.begin()+m+1;
    vector<int>:: iterator iter=arr.end()-1;
    
    
    while(iter1<=iter){
        swap(*iter,*iter1);
        iter1++;
        iter--;
        
    }

}
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    v.push_back(12);
    v.push_back(14);

    reverseArray(v,3);
    for (vector<int>::iterator i=v.begin();i<v.end();i++){
        cout<<*i<<endl;
    }
    return 0;
}
