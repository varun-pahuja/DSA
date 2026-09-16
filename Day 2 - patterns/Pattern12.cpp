#include <bits/stdc++.h>
using namespace std;

void print1(int n){
int i, j;
int space = 2 *(n-1);
  for(i=0; i<=n; i++){
   // numbers 
    for(j=1; j<=i; j++){
         cout << j;
    }
    // spaces
    for(j=0; j<space; j++){
        cout << " ";
    }
    space -= 2;
    // numbers
    for(j=i; j>=1; j--){
        cout << j;
    }
    cout << endl;
    space -= 2;
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