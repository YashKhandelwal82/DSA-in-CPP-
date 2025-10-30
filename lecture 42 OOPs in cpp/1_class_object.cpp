#include<iostream>
// #include<Yash.cpp>

using namespace std ;

// we can make another file of class to 
class Hero {
   
    public:// iske niche jitne data function hein sare access kr skte ho kahi pr bhi  ap :->
    // properties
    int health ;
    int height ;

    // private part only accessable inside the class 
    private:
    char level ;

    void print (){
        cout << level << endl;
    }

};
// now i want to use the class yash in this code 

int main(){
  
    // creation of object :->
    Hero h1;

    h1.height = 6.4 ;
    h1.health = 50;

    cout << "size of :->" << sizeof(h1) << endl;

    // use dot operator :->
    cout << "h1 :-> " << h1.health << endl;


    return 0;
}