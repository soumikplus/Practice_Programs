// only the function part excluding driver code
string reverseWord(string str)
{

  // Your code here
  int r = str.size() - 1;
  int l = 0;
  char temp;
  while (l < r)
  {
    temp = str[l];
    str[l] = str[r];
    str[r] = temp;
    l++;
    r--;
  }
  return str;
}