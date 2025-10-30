#include<iostream>
#include<vector>
#include <algorithm>
using namespace std ;

bool isSafe(int x , int y , int n ,vector<vector<int>> visited , vector<vector<int>>& m){
   if((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1){
      return true ;
   }
   else{
    return false ;
   }
}

void solve(vector<vector<int>>& m , int n , vector<string>& ans, int x , int y ,vector<vector<int>> visited , string path){
    // base case :->
    if(x == n - 1 && y == n - 1 ){
        ans.push_back(path);
        return ;
    }

    visited[x][y] == 1;
    // 4 choices :->

    // down 
    int new_x = x + 1;
    int new_y = y;

    if(isSafe(new_x , new_y , n , visited , m )){
       path.push_back('D');
       solve(m , n , ans , new_x , new_y , visited , path);
       path.pop_back();
    }

    // left :->
    new_x = x ;
    new_y = y - 1;

    if(isSafe(new_x , new_y , n , visited , m )){
       path.push_back('L');
       solve(m , n , ans , new_x , new_y , visited , path);
       path.pop_back();
    }
     
    // right :->
      new_x = x ;
      new_y = y + 1 ;

    if(isSafe(new_x , new_y , n , visited , m )){
       path.push_back('R');
       solve(m , n , ans , new_x , new_y , visited , path);
       path.pop_back();
    }
    
    // up move :->
     new_x = x - 1;
     new_y = y;

    if(isSafe(new_x , new_y , n , visited , m )){
       path.push_back('U');
       solve(m , n , ans , new_x , new_y , visited , path);
       path.pop_back();
    }

    visited[x][y] == 0;
}


int main(){
    int n;
    cout << "Enter the size of the maze (n x n): ";
    cin >> n;

    vector<vector<int>> m(n, vector<int>(n));

    cout << "Enter the maze values (0 or 1):" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter the " << m[i][j] << "-th element of maze " << endl;
            cin >> m[i][j];
        }
    }

    vector<string> ans ;

    if(m[0][0] == 0){
       cout << " No Path EXISIT! "<< endl;
       return 0;
    }

    int src_x = 0;
    int src_y = 0;

    vector<vector<int>> visited(n, vector<int>(n, 0));

    string path = "";
    solve(m, n , ans , src_x , src_y , visited , path);
    sort(ans.begin() , ans.end());

    // print the ans :->
    if (ans.empty()) {
        cout << "No path exists!" << endl;
    } else {
        cout << "Possible paths are:" << endl;
        for (const string& p : ans) {
            cout << p << endl;
        }
    }

  return 0;
}
