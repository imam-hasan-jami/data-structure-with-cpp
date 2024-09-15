#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<2*n-1; i++) {
        int stars = i;
        if(i>=n) stars = 2*n-i-2;
        for(int j=0; j<=stars; j++) {
            cout << "* ";
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
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// *