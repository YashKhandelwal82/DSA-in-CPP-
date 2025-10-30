#include<iostream>
#include<vector>
using namespace std ;
vector<int> reverse(vector <int> & a ){
 int s = 0 ;
 int e = a.size() -1 ;
 while (s < e){
    swap(a[s] , a[e]);
    s++;
    e--;
 }

return a ;
}
vector<int> print(vector<int>& v){
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " "; 
    }
cout << endl;
}
int main(){

vector<int> a;
vector<int> b ;
vector<int> ans ;

a.push_back(1);
a.push_back(2);
a.push_back(3);
a.push_back(4);
b.push_back(6);
 int n = a.size();
 int m = b.size();
 
  
 cout << " array before addition is :->" << endl;
 print(a);
 cout << endl;
 print(b);
   
 int carry = 0;
 int i = n-1;
 int j = m-1;

 while(i >=0 && j >= 0){
    int val1=  a[i] ;
    int val2 = b[j];


   int  sum = val1 + val2  + carry;
   carry = sum / 10 ;
   sum =  sum % 10 ;
    ans.push_back(sum);
    i--;
    j--;
 }
// first case 
while (i >= 0 ){
    int sum = a[i] + carry ;
    carry = sum / 10 ;
    sum =  sum % 10 ;
    ans.push_back(sum);
    i--;
    
}

// second case 
while (j >= 0 ){
    int sum = b[j] + carry ;
    carry = sum / 10 ;
    sum =  sum % 10 ;
    ans.push_back(sum);
    j--;    
}

while(carry != 0 ){
 int sum = carry ;
 carry = sum / 10 ;
 sum =  sum % 10 ;
  ans.push_back(sum);
  i--;
  j--;
}
reverse(ans);
  
print(ans);
    return 0 ;


}

