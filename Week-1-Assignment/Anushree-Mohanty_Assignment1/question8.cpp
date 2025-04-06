#include <iostream>
using namespace std;

void printPattern(int n) {
    for (int i = 1; i <= n; i++)
    { 
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

    
        int spaces = (n - i) * 2;
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        
        for (int j = i; j >= 1; j--) 
        {
                cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n=4;
    
    printPattern(n);

    return 0;
}