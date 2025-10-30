#include<iostream>
#include<vector>

using namespace std ;
vector<int> print(vector<int> v){
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
   cout << endl;
}

vector<int> mearge(vector<int > a , vector<int> b ){
    vector<int> c(a.size() + b.size());
    int i = 0 ;
    int j = 0 ;
    int k = 0;
       while(i < a.size() && j < b.size()  ){
        if(a[i] < b[j]){
             c[k] = a[i];
             i++;
             k++;
        }
        else{
            c[k] = b[j];
            k++;
            j++;
        }
       }
       // copy kar do 1 array ke element ko 
       while (i < a.size()){
        c[k] = a[i];
        k++;
        i++;
       }  
       // copy kardo 2 array ke aelement ko 
       while(j < b.size() ){
        c[k]=b[j];
        k++;
        j++;
       }
return (c);
}


int main () {

vector<int> a;
a.push_back(1);
a.push_back(3);
a.push_back(4);
a.push_back(9);
cout << " 1st array " << endl;
print(a);

vector<int> b ;
b.push_back(5);
b.push_back(6);
b.push_back(7);
cout <<endl <<  " 2nd array :->" << endl;
print(b);



vector<int> s = mearge(a,b);

cout << " print the merge sorted array" << endl;
print(s);


return 0;
}