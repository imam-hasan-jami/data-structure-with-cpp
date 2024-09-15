#include<iostream>
using namespace std;

void printPattern(int n) {
    int start = 1;
    for(int i=0; i<n; i++) {
        if(i%2==0) start=1;
        else start=0;
        for(int j=0; j<=i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl; 
    }
}

int main() {

    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    for(int i=0; i<t; i++) {
        int n;
        cout << "Enter the number of rows: ";
        cin >> n;
        printPattern(n);
    }

    return 0;
}

//output when n=5 :
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1