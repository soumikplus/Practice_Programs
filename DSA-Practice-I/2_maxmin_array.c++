// time complexity is O(N), Constraints: 1 <= N <= 105 ; -109 <= Ai <= 109
int findSum(int A[], int N)
{
	long long min, max;
	min = max = A[0];
	for (int i = 0; i < N; i++)
	{
		if (A[i] > max)
		{
			max = A[i];
		}
		if (A[i] < min)
		{
			min = A[i];
		}
	}

	return (max + min);
}