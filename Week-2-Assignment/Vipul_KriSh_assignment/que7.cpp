#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n, x;
    cout << "Fibonacci Series: " << endl;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        x = fibonacci(i);
    }
    cout << "The " << n << "th term of the fibonacci series is " << x << " ";
    cout << endl;
}