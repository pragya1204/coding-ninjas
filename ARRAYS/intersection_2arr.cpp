//https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149
//two pointer approach

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0,j=0;
	vector<int> ans;
	while(i<n & j<m){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr2[j]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;

		}
		else if(arr1[i]>arr2[j]){
			j++;
		}
	}
	return ans;
}