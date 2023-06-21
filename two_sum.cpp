/* **Q1.** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example:**
Input: nums = [2,7,11,15], target = 9
Output0 [0,1]

**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1]
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    // Size of vector
    int n;
    int flag = 0;
    // taking input from user of vector size
    cin>>n;
    int arr[n];
    //taking element of vector from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    //taking target from user
    cin>>target;
    //intialize answer array
    int ans[2] = {-1,-1};
    //checking for target
    for(int i=0;i<n-1;i++){
        if(arr[i]>target){
            i++;
        }
        else{
            for(int j=i+1;j<n;i++){
                if(arr[i]+arr[j] == target){
                    ans [0]=i;
                    ans[1] = j;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)
           break;

    }
     cout<<ans[0]<< " and " << ans[1]<<endl;
  }
  return 0;
   
}
