#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < (n-1); j++)
			if(arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
} 

int main(){
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;

	int arr[] = {x1, x2, x3};
	bubble(arr, 3);

	int sum = (arr[1] - arr[0]) + (arr[2] - arr[1]);

	cout << abs(sum) << "\n";
}