/* **Q7.** Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.

Note that you must do this in-place without making a copy of the array.

**Example 1:**
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
#include<bits/stdc++.h>  
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
    int x;
    cin>>x;
    arr.push_back(x);
	}
	vector<int> non_zeros;
	for(int i=0;i<n;i++){
		
		if(arr[i]!=0){
			non_zeros.push_back(i);
		}
	}
	for(int i=0;i<non_zeros.size();i++){
		
		arr[i] = arr[non_zeros[i]];
	}
	for(int i =non_zeros.size();i<n;i++){
		arr[i]=0;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
	return 0;
}
