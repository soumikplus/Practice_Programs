#include <iostream>
using namespace std;
int GCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a % b);
    }
}
int LCD(int a, int b)
{

    int gcd = GCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}
int main()
{
    int a, b;
    cout << "Enter two number";
    cin >> a >> b;
    cout << "Entered numbers = " << a << " " << b << endl;
    cout << "Ans = " << LCD(a, b);
}