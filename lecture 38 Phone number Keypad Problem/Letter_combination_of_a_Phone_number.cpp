#include<iostream>
#include<vector>
using namespace std ;

void solve(string digits , string output ,int index, vector<string>& ans , string mapping[]){
    // base case 
    if(index >= digits.length()){
        ans.push_back(output);
        return ;
    }
    int number = digits[index] - '0';
    string value = mapping[number];
    for(int i = 0 ; i < value.length() ; i++){
        output.push_back(value[i]);// call for first letter that is written in string
        solve(digits , output , index + 1 , ans , mapping);
        // first letter k liye joh hua ab usko khali bhi karna hain backtracking k saath 
        output.pop_back();
    }
}
int main(){

    string digits = "";
    cout << "enter the value of phone keypad" << endl;
    cin >> digits;

    vector<string> ans ;
    if(digits.length() == 0){
        cout << "No input digits provided." << endl; 
        return 0;
    }

    string output = "";
    int index = 0;
    string mapping[10] = {"" , "" , "abc" , "def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits , output , index , ans , mapping);
    
   
    // Print the result
    cout << "Possible combinations are:" << endl;
    for (const string& str : ans) {
        cout << str << " ";
    }
    cout << endl;

    return 0;

}

