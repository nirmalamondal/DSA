/* **Q6.** Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

**Example 1:**
Input: nums = [1,2,3,1]

Output: true
*/

#include<bits/stdc++.h>  
using namespace std;

bool solution(vector<int> v){
	bool flag = true;
	    map<int, int> M;
	    for (int i = 0; v[i]; i++) {
	 
	        if (M.find(v[i]) == M.end()) {
	            M[v[i]] = 1;
	        }
	        else {
	            return true;
	        }
	    }
	    return false;
}
  

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
		if(solution(arr))
	    cout<<"true"<<endl;   
	    else
	    cout<<"false"<<endl;
	}
    return 0;	
}	 
