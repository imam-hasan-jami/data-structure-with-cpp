#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<n; i++) {
        //space
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        //alphabet
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=0; j<2*i+1; j++) {
            cout << ch;
            if(j<breakpoint) ch++;
            else ch--;
        }

        //space
        for(int j=0; j<n-i-1; j++) {
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
        printPattern(n);
    }

    return 0;
}

//output when n=5 :
//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA