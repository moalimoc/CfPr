#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, sum = 0;
	cin >> t;
	while(t--){
		int x = 0;
		for(int i = 0; i < 3; i++){
			int n;
			cin >> n;
			if(n == 1)
				x++;
		}
		if(x >= 2)
			sum++;
	}

	cout << sum << "\n";
}