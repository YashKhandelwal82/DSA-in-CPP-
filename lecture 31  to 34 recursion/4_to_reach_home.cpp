#include<iostream>
using namespace std ;

 void reachHome(int src , int dest ){
    
    cout << " sorce " << src << " destination " << dest << endl;
    if(src == dest ){
        cout << " poch gaya " << endl;
        return ;
    }
    // ek step bhadao apna 
    src++;

    // recursive call
    reachHome(src , dest);

 }
int main(){
   
    int src = 1 ;
    int destination = 10 ;

    reachHome(src , destination);



}