int iniSpaces = 0;
    for(int i=0; i<2*n-1; i++) {
        int stars = n - abs(n - 1 - i);
        int spaces = 2 * abs(n - 1 - i);

        // stars
        for(int j=0; j<stars; j++) {
            cout << "*";
        }

        // spaces
        for(int j=0; j<spaces; j++) {
            cout << " ";
        }

        // stars
        for(int j=0; j<stars; j++) {
            cout << "*";
        }

        cout << endl;
    }