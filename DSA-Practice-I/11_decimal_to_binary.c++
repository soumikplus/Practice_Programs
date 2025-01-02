//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

void toBinary(int n)
{
	// your code here
	int sum = 0;
	int i = 0;
	while (n != 0)
	{
		int lsb = n & 1;
		sum = (lsb * pow(10, i)) + sum;
		n = n >> 1;
		i++;
	}
	cout << sum;
}

//{ Driver Code Starts.

int main()
{
	// code

	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		toBinary(n);
		cout << endl;
	}
	return 0;
}
// } Driver Code Ends