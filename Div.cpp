#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t;
	cin >> t;
	while(t--){
		vector<int> v;
		int sum = 0, T = 0, O = 0;
		cin >> n;
		while(n--){
			int k;
			cin >> k;
			v.push_back(k);
		}

		for(auto x : v){
			if(x == 1)
				O++;
			else 
				T++;

			sum += x;
		}

		if(O != 0 && T != 0){
			if(sum % 2 == 0)
				cout << "yes" << "\n";
			else 
				cout << "no" << "\n";
		}	

		else if(O != 0 && T == 0){
			if(O % 2 == 0)
				cout << "yes" << "\n";
			else 
				cout << "no" << "\n";
		} 

		else if(O == 0 && T != 0){
			if(T % 2 == 0)
				cout << "yes" << "\n";
			else 
				cout << "no" << "\n";
		}
		
	}
}