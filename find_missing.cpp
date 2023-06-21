/***Q8.** You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got 
duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.

**Example 1:**
Input: nums = [1,2,2,4]
Output: [2,3]
*/


#include<bits/stdc++.h>  
using namespace std;


int find_missing(vector<int>arr){
	int n = arr.size();
	int total_sum = (n*(n+1))/2;
	int sum =0;
	for(int i=0;i<arr.size();i++){
	  sum+=arr[i];
	}
	
	return total_sum - sum ;
	

}

int solution(vector<int> v){
	
	    map<int, int> M;
	    for (int i = 0; v[i]; i++) {
	 
	        if (M.find(v[i]) == M.end()) {
	            M[v[i]] = 1;
	        }
	        else {
	            return v[i];
	        }
	    }
	    return -1;
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
		
		int repeat_num=solution(arr);
		int instead_of = repeat_num + find_missing(arr) ;
		
		cout<<repeat_num<<" "<<instead_of<<endl;
		
		
	}
	return 0;	
	}
