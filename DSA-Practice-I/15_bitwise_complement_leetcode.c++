class Solution
{
public:
  int bitwiseComplement(int n)
  {
    int face = 0;
    int m = n;
    if (n == 0)
      return 1;
    while (m != 0)
    {
      m >>= 1; // m = m >> 1;
      face = (face << 1) | 1;
    }
    int complement = (~n) & face;
    return complement;
  }
};