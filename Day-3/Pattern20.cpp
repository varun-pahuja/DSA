#include <bits/stdc++.h>
using namespace std;

void print1(int n){
int i, j;
int spaces = 2*n - 2;
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
    for(j=1; j<= spaces; j++){
       cout << " ";
    }
    //stars
    for(j=1; j<=stars; j++){
       cout << "*";
    }
    cout << endl;
    if (i<n){
        spaces -= 2;
  }
    else{
        spaces += 2;
    }
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