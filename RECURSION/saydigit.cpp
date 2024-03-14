#include<iostream>
using namespace std;

void SayDigits(int n, string arr[]){
    if(n==0) return ;
    int num= n%10;
    n=n/10;
    SayDigits(n,arr);
    cout<<arr[num]<<" ";
    return;


}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    SayDigits(n, arr);
    return 0;
}