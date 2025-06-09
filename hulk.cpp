#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "I love", s2 = "I hate", i = "it", th = "that";
    int t, n = 1; 
    cin >> t;
    while(t--){
    	if(n % 2 == 0){
    		cout << s << " ";
    	}
    	else if(n % 2 != 0){
    		cout << s2 << " ";
    	}

    	if(t == 0)
    		cout << i << " ";
    	else
    		cout << th << " ";

    	n++;
    }
     
}
