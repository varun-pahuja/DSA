#include <bits/stdc++.h>
using namespace std;

void print1(int n){
int i, j;
  for(i=1; i<=2*n-1; i++){
    int stars = i;
    for(j=1; j<=stars; j++){
       cout << "*";
    }
    cout << endl;
  }
    
}