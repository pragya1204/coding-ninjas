//https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633
#include <bits/stdc++.h> 

bool checkPalindrome(string s){
    string temp;
    for(int i=0;i<s.length();i++){
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||
          (s[i] >= '0' && s[i] <= '9')) {
        s[i] = tolower(s[i]);
        temp.push_back(s[i]);
      }
    }
    
    string new_s= temp;
    int start=0, end=new_s.length()-1;
    while(start<=end){
        swap(new_s[start],new_s[end]);
        start++;
        end--;
    }
    if(new_s==temp){
        return 1;
    }
    else{
        return 0;
    }
}
