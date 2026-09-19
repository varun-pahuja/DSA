#include <bits/stdc++.h>
using namespace std;

void print1(int n){
int i, j;
  for(i=1; i<=2*n-1; i++){
    int stars = i;
    if(i>n){
        stars = 2*n - i;
    }
    //stars
    for(j=1; j<=stars; j++){
       cout << "*";
    }
    //space

    //stars
    for(j=1; j<=stars; j++){
       cout << "*";
    }
    cout << endl;
  }
    
}

int main() {
//   int t;
//   cin>> t;
//   for(int i=0; i<t; i++){
    int n;
    cin>> n;
    print1(n);
  }
  
// }