#include <bits/stdc++.h>
using namespace std;

void solve(){
	int p = 1, n, w, h;
		cin >> w >> h >> n;
		if(n == 1){
			cout << "YES" << "\n";
		}
		else{
			while(w % 2 == 0){
				p *= 2;
				w /= 2;
			}
			while(h % 2 == 0){
				p *= 2;
				h /= 2;
			}

			if(p >= n)
			    cout << "YES" << "\n";
		    else
			    cout << "NO" << "\n";
        }

}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
