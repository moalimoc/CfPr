#include <iostream>
using namespace std;

int solve(int n, int k){
	for (int i = 0; i < k; i++)
		if (n % 10 == 0)
			n /= 10;
		else 
			n -= 1;
	return n;
}

int main()
{
	int n, k;
	cin >> n >> k;
	if ((n >= 2  && n <= 10^9) && (k >= 1 && k <= 50) )
		cout << solve(n, k) << endl;
	return 0;
}
