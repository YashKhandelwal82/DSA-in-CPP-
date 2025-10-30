#include<iostream>
using namespace std ;

void print(int *a){
    cout << " value at a " << *a << endl;

}

void update(int *p){
    *p = *p + 1 ;
}

int main() {

    int a = 6 ;
    int *p = &a ;

    print(p) ;


    cout <<"before :->" << *p << endl;
    update(p);
    cout << " after update :->" << *p << endl;



    return 0 ;

}