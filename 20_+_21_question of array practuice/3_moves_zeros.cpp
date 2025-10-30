#include<iostream>
#include<vector>

using namespace std ;

vector<int> print(vector<int> v){
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " "; 
    }
   cout << endl;
}

vector<int> move(vector<int> a){
    int i = 0 ;
    for(int j = 0 ; j < a.size() ; j++){
      if(a[j] != 0){
        swap(a[j] , a[i]);
        i++;
      }
   }
return a;
}

int main() {

vector<int> a;
a.push_back(2);
a.push_back(0);
a.push_back(4);
a.push_back(0);
a.push_back(8);
a.push_back(6);
a.push_back(0);


cout << " array is - > " << endl;
print(a);

cout<< " array after moving zereos" << endl;
vector<int> s = move(a);
print(s);

    return 0;
}