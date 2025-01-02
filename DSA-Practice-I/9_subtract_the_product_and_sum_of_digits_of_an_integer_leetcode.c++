class Solution
{
public:
  int subtractProductAndSum(int n)
  {
    int ld, sum = 0, prod = 1;
    while (n > 0)
    {
      ld = n % 10;
      sum = sum + ld;
      prod = prod * ld;
      n /= 10;
    }
    return prod - sum;
  }
};