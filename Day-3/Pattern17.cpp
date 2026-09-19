#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    int i, j;
    for(i=0; i<n; i++){        // ✅ reversed loop
        for(j=0; j<n-i-1; j++)
            cout << " ";

        char ch = 'A';
        int breakpoint = i+1;
        for(j=1; j<=2*i-1; j++){
            cout << ch;
            if(j < breakpoint) ch++;
            else ch--;
        }

        for(j=0; j<n-i-1; j++)
            cout << " ";
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print1(n);
}