//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int binary_to_decimal(string str)
    {
        // Code here
        int sum = 0;
        int j = 0;
        for (int i = str.length() - 1; i >= 0; i--)
        {
            int digit = str[i] - '0'; // Convert character to integer
            sum += digit * pow(2, j);
            j++;
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends