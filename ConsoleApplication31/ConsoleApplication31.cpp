#include <iostream>
using namespace std;
int main() {
	int arr[] = {3,7,4,9,12,6,1,11,2,10};
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	int hashh[12] = { 0 };
	for (int i = 0; i < 10; i++) {
		hashh[arr[i]]++;
	}
	cout << endl;
	for (int i = 0; i < 12; i++) {
		cout<<hashh[i]<<" ";
	}
	for (int i = 0; i < 12; i++) {
		if (hashh[i] == 0) {
			cout << i<<endl;
		}
	}

	return 0;
}