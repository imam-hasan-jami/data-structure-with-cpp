#include<iostream>
using namespace std;

void printPattern1(int n) {
    for(int i=0; i<n; i++) {
        //space
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        //star
        for(int j=0; j<2*i+1; j++) {
            cout << "*";
        }
        //space
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void printPattern2(int n) {
    for(int i=0; i<n; i++) {
        //space
        for(int j=0; j<i; j++) {
            cout << " ";
        }
        //star
        for(int j=0; j<2*n-(2*i+1); j++) {
            cout << "*";
        }
        //space
        for(int j=0; j<i; j++) {
            cout << " ";
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
        printPattern1(n);
        printPattern2(n);
    }

    return 0;
}

//output when n=5 :
//     *    
//    ***   
//   *****  
//  ******* 
// *********
// *********
//  ******* 
//   *****  
//    ***   
//     *