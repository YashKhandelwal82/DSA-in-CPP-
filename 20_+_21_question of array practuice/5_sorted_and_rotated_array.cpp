#include<iostream>
#include<vector>
using namespace std ;
vector<int> print(vector<int>& v){
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " "; 
    }
cout << endl;
}


bool rotated_sorted(vector<int>& a ){
    int n = a.size();
    int count = 0;
     for(int i = 1 ; i < a.size() ; i++){
         if(a[i-1] > a[i]){
            count++;
         }
     }
    if(a[n-1] > a[0]){
        count ++;
    }
    return count <= 1 ;
}


int main (){



 vector <int> a;
 a.push_back(3);
 a.push_back(4);
 a.push_back(5);
 a.push_back(6);
 a.push_back(2);
 a.push_back(4);
 
  bool ans = rotated_sorted(a);
  cout << " print normal array " << endl ;
   print(a);
   cout << ans << endl;
   
}