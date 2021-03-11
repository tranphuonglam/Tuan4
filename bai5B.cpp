#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "nhap n: ";
	cin >> n;
	int a[10000];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]+a[j] == 0) {
				cout << "tong 2 so = 0 la: " << a[i] << " va " << a[j];
			}
		}
	}
	return 0;
}
