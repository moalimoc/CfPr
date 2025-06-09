#include <bits/stdc++.h>
using namespace std;

int main(){
	int a = 2020, b = 2021, t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		while(n >= a){
			if(n % a == 0){
				n -= a;
				continue;
			}
			else
				n-=b;
		}
		
		if(n == 0)
			cout << "Yes" << endl;
		else 
			cout << "NO" << endl;
	}
}