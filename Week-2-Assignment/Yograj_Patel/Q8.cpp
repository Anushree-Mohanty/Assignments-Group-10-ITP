/*
8. Find the sum of digits of a number using recursion.
*/

#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sum(n / 10);
}

int main() 
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << "Sum of digits of " << n << " is " << sum(n);
    return 0;
} 