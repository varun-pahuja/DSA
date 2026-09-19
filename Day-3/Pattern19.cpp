#include <bits/stdc++.h>
using namespace std;

void print1(int n){
int i, j;
int insp = 0;
  for(i=0; i<=n; i++){
    // stars
      for(j = 1; j <= n-i; j++){
        cout << "* ";
      }
    // spaces 
     for(j = 0; j< insp; j++){
        cout << "  ";
      }
    // stars
    for(j = 1; j <= n-i; j++){
        cout << "* ";
      }
      insp +=2;
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