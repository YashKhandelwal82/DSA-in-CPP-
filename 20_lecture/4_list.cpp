#include<iostream>
#include<list>
using namespace std ;
// direct access not posible her e

int main(){

list<int> l;

list<int> n (5 , 100);
for ( int i : n){
    cout << i << " ";
}

l.push_back(1);
l.push_front(2);

for(int i : l ){
    cout << i << " ";
}
cout << " size of list : ->" << l.size() ;
// begin , end , empty time o(1)
// erase( o (n))
// pop back , pop front 

}

   