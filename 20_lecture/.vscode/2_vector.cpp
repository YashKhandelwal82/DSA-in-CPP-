#include<iostream>
#include<vector>
using namespace std ;
int main() {

// size double kr lega dyanmic in nature 
// random acces posibbler hai

vector <int > v ;

cout << "  total capacity mean kitni memory locate hai     "  << v.capacity() << endl;

// by push_back we can add elemnet 

v.push_back(1);
v.push_back(2);
v.push_back(3);
cout << "  total capacity mean kitni memory locate hai     "  << v.capacity() << endl;
cout << "size :-> mean kitne element hain iske ander "<< v.size() << endl ;


cout << " koi elemnt nikalna hai toh " << v.at(3) << endl;
cout << " pop_back use to pop out the last elemnt v.pop_back()" <<  endl;

cout << " Before pop " << endl;
for( int i :v ){
  cout << i << " ";
}

v.pop_back() ;

cout << " After  pop " << endl;
for( int i :v ){
  cout << i << " ";
}


// we can use front and back here also
//  when we clear a vector then size become zero not capicity 

v.clear();
}