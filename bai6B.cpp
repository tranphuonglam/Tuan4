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
			for(int k=j+1;k<n;k++) {
			if(a[i]+a[j]+a[k] == 0) {
				cout << "tong 3 so = 0 la: " << a[i] << " " << a[j] << " va " << a[k];
			}
			}
		}
	}
	return 0;
}
