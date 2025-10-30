#include<iostream>
#include<deque>

using namespace std ;

int main(){

  // removal and addition can be done at both side 

deque < int > d ;

d.push_back(1);

d.push_front(2);

d.push_back(1);

d.push_front(4);

cout << " before pop " << endl;

for(int i : d) {
    cout << i << " ";
}
  
d.pop_back() ;
d.pop_front();

cout << " after  pop " << endl;

for(int i : d) {
    cout << i << " ";
}

cout << " 1st index elemnt " << d.at(1) << endl;

cout << " 1st element " << d.front() << endl;

cout << " last elemnt " << d.back() << endl;

cout << " before erase  " << endl;

for(int i : d) {
    cout << i << " ";
}

d.erase(d.begin() , d.begin( ) + 1);

cout << " after erase" << endl;

for(int i : d) {
    cout << i << " ";
}

}

// time complexity 