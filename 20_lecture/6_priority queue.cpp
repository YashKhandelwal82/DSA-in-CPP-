#include<iostream>
#include<queue>

using namespace std ;
int main() {
    
    // queue that first element always greatest at the tym of nikalne 
// by default max heap 
// max heap 
priority_queue<int> maxi;

// min heap 

priority_queue<int,vector<int> , greater<int> > mini;


maxi.push(23);
maxi.push(24);
maxi.push(33);


mini.push(24);
mini.push(2);
mini.push(27);

int size_maxi = maxi.size();
int size_mini = mini.size();
for(int i= 0 ; i < size_maxi; i++) {
    cout << i << " ";
}

for(int i= 0 ; i < size_mini  ; i++) {
    cout << i << " ";
}

}



