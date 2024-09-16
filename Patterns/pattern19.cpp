#include<iostream>
using namespace std;

void printPattern(int n) {
    int iniSpaces = 0;
    for(int i=0; i<n; i++) {
        //stars
        for(int j=0; j<n-i; j++) {
            cout << "*";
        }
        //spaces
        for(int j=0; j<iniSpaces; j++) {
            cout << " ";
        }
        //stars
        for(int j=0; j<n-i; j++) {
            cout << "*";
        }
        iniSpaces += 2;
        cout << endl;
    }

    iniSpaces = (2*n)-2;
    for(int i=1; i<=n; i++) {
        //stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        //spaces
        for(int j=0; j<iniSpaces; j++) {
            cout << " ";
        }

        //stars
        for(int j=1; j<=i; j++) {
            cout << "*";
        }

        iniSpaces -= 2;
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
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********