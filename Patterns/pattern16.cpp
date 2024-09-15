#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<n; i++) {
        char ch = 'A' + i;
        for(int j=0; j<=i; j++) {
            cout << ch << " ";
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
// A 
// B B 
// C C C 
// D D D D 
// E E E E E