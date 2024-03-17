#include <bits/stdc++.h> 
void solve(string str, vector<string> &ans, string output, int index){
	//base case
	if(index>=str.length()){
		if(output.length()>0){
			ans.push_back(output);

		}
		
		return;
	}
	//exclude
	solve(str,ans,output,index+1);
	//include
	char element= str[index];
	output.push_back(element);
	solve(str,ans,output,index+1);
}
vector<string> subsequences(string str){
	
	vector<string> ans;
	string output="";
	solve(str, ans,output,0);
	return ans;
	
}
