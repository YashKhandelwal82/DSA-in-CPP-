#include<iostream>
#include<vector>
using namespace std ;

vector<int> print(vector<int>& v){
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " "; 
    }
   cout << endl;
}

int main(){
    
    vector<int> a;
    vector<int> temp(a.size());

    
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);


 cout << " Print normal array " << endl;
 print(a);

 cout <<" enter the key after that you want to rotate an array :->" << endl;
 int k ;
 cin >> k ;
 
 for(int i = 0 ; i < a.size() ; i++){
    temp[((i + k ) % a.size())] = a[i];
 }
   a = temp ;

  cout << " array after rotate the array : -> " << endl;
   print(a) ; 
    return 0 ;

}