#include<iostream>
#include<vector>
using namespace std ;

void solve(vector<int> nums , vector<vector<int>>& ans , int index){
    if(index >= nums.size()){
      ans.push_back(nums);
      return;
    }

    for(int j = index ; j < nums.size() ; j++){
        swap(nums[index] , nums[j]);
        solve(nums , ans , index + 1);
        // backtracking :->
        swap(nums[index] , nums[j]);
    }
}

int main(){
    vector<int> nums ;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    vector<vector<int>> ans ;
         int index = 0;
         solve(nums , ans , index );
    
    // print the ans :->
    for(const auto& permutation : ans) {
        for(int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }
  return 0;
}

