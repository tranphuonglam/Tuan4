#include <iostream>
#include <cstring>
using namespace std;
int main() {
	string s;
	cin >> s;
	int a = s.length();
	int i,j,k;
	for(i=0;i<a;i++) {
		for(j=0;j<a;j++) {
			for(k = 0;k<a+1;k++) {
				cout << s[i] << s[j];
				if(k!=0) {
					cout << s[k-1];
				}
				cout << " ";
			}
		}
	}
	return 0;
}
