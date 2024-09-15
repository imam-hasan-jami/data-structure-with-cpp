#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<n; i++) {
        for(int i=0; i<n; i++) {
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

    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    printPattern(n);
    
    return 0;
}

//output when n=4 :
// * * * * 
// * * * * 
// * * * * 
// * * * *