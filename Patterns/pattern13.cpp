#include<iostream>
using namespace std;

void printPattern(int n) {
    int num = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << num << " ";
            num++;
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
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15