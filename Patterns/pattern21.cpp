#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i == 0 || j == 0 || i == n-1 || j == n-1) {
                cout << "*";
            }
            else cout << " ";
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
// *****
// *   *
// *   *
// *   *
// *****