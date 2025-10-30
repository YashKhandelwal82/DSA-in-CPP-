#include<iostream>
#include<vector>
using namespace std ;
 void solve(string str , string output, int index , vector<string>& ans)
{
    // base case 
    if(index >= str.size()){
        if(output.length() > 0 ){
            ans.push_back(output);
        }
     return ;
    }

    // exclude:->
    solve(str , output , index + 1, ans);

    // include:->
    char element = str[index];
    output.push_back(element);
    solve(str , output , index + 1, ans);
    
}

int main(){
 
    string str = "abc";
    vector<string> ans;
    string output = "";
    
    int n = str.size();
    int index = 0;
    cout << "Input string: ";
    for (char c : str) {
        cout << c << " ";
    }
    cout << endl;
    solve(str , output , index , ans);

    cout << "All non-empty subsets (subsequences):" << endl;
    for (const string& subset : ans) {
        cout << "{ " << subset << " }" << endl;
    }

    return 0;
}