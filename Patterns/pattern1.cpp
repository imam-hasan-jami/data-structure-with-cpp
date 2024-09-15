#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    
    // for(int i=0; i<4; i++) {
    //     for(int j=0; j<4; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
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

//output when n=4 :
// * * * * 
// * * * * 
// * * * * 
// * * * *