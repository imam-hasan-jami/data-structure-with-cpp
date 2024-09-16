#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int i=0; i<2*n-1; i++) {
        for(int j=0; j<2*n-1; j++) {
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            // int min = top;
            // if(min > left) min = left;
            // if(min > right) min = right;
            // if(min > down) min = down;
            // cout << n-min << " ";
            cout << (n - min (min (top, down), min (left, right))) << " ";

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

//output when n=4 :
// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4 
// 4 3 2 2 2 3 4 
// 4 3 2 1 2 3 4 
// 4 3 2 2 2 3 4 
// 4 3 3 3 3 3 4 
// 4 4 4 4 4 4 4