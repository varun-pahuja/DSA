#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=0; j<n-i; j++)       // ✅ fix 1
            cout << " ";

        char ch = 'A';
        int breakpoint = i+1;       // ✅ fix 2
        for(j=1; j<=2*i-1; j++){
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }

        for(j=0; j<n-i; j++)       // ✅ fix 1
            cout << " ";
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