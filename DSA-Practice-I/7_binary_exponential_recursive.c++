long long power(int N, int R)
{
    // Your code here
    const int m = 1e9 + 7;
    if (R == 0)
    {
        return 1;
    }
    int res = power(N, R >> 1);
    if (R & 1)
    {
        return (N * ((res * 1LL * res) % m)) % m;
    }
    else
    {
        return ((res * 1LL * res) % m);
    }
}
