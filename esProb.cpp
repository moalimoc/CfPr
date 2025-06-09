#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int n, m;
	string ans = "EASY";
	vector<int> v;

	cin >> m;
	while(m--){
		cin >> n;
		v.push_back(n);
	}
	for(int i = 0; i < v.size(); i++)
		if(v[i] == 1)
			ans = "HARD";

	cout << ans << endl;

	return 0;
}