#include <bits/stdc++.h> 
void reverse(string &st, int i, int j){
	if(i>j) return ;
	swap(st[i], st[j]);
	i++;
	j--;
	reverse(st, i,j);
}
string reverseString(string str)
{
	reverse(str, 0, str.length()-1);
	return str;
	
}