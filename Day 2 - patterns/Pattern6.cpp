#include <bits/stdc++.h>
using namespace std;

void print1(int n){
int i, j;
  for(i=1; i<=n; i++){
    for(j=1; j<=n-i+1; j++){  // the sensei used j = 0; j < n-i+1; j++ but I used j = n; j >= i; j-- and it worked too
       cout << j;
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