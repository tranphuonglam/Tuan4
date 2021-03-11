#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	// test d sinh so ngau nhien voi 100 phan tu
	
	/*int n;
	cin >> n;
	if(n<0 || n > 100) {
		cout << "invalid";
		return 0;
	}
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	for(int i=0;i<n;i++) {
		for(int j=i;j<n;j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0;i<n;i++) {
	cout << a[i] << " ";
}*/
int a[10000];
  srand(time(0));
			cout<<"mang khi chua sap xep(sinh ra ngau nhien):";
			for(int i=0;i<99;i++)
			{
			a[i] = rand()%(100)+1;cout<<a[i]<<" ";}
			for(int i=0;i<99;i++)
			{
				for(int j=i+1;j<99;j++)
				{
					if(a[i]>a[j])
					{
						int temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			cout<< endl <<"mang sau sap xep la:";
			for(int i=0;i<99;i++)
			cout << a[i] <<" ";
	return 0;
}
