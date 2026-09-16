#include <bits/stdc++.h>
using namespace std;

void print1(int n){
int i, j;
  for(i=1; i<=n; i++){
    //space
    for(j=0; j<=i; j++){  
        cout << " ";
    }
    //stars
    for(j=0; j<2*n-i+1; j++){  
       cout << "*";
    }
    //space
    for(j=0; j<=n-1; j++){
       cout << " ";
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