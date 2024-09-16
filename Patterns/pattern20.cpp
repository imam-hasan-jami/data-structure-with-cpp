#include<iostream>
using namespace std;

void printPattern(int n) {
    int iniSpaces = 2*n-2;
    for(int i=1; i<=2*n-1; i++) {

        int stars = i;
        if(i>n) stars = 2*n-i;

        //stars
        for(int j=1; j<=stars; j++) {
            cout << "*";
        }

        //spaces
        for(int j=1; j<=iniSpaces; j++) {
            cout << " ";
        }

        //stars
        for(int j=1; j<=stars; j++) {
            cout << "*";
        }

        cout << endl;

        if(i<n) iniSpaces -= 2;
        else iniSpaces += 2;

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
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *