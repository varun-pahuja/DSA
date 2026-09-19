#include <bits/stdc++.h>
using namespace std;

void print1(int n){
int i, j;
int num = 1;
  for(i=0; i<=n; i++){
    for( char ch = 'A'; ch <= 'A' + i - 1; ch++){
      cout << ch << " ";
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