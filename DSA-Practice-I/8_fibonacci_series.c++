#include <iostream>
using namespace std;
void fib_loop(int n)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n - 2; i++)
    {
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int fib_recursion(int n)
{

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    else
    {
        return fib_recursion(n - 1) + fib_recursion(n - 2);
    }
}
int main()
{
    int n;
    cout << "Enter the length of the series : ";
    cin >> n;
    fib_loop(n);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fib_recursion(i) << " ";
    }
    return 0;
}