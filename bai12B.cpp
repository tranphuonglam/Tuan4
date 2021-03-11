#include <iostream>
#include <cmath>
using namespace std;
int check(int n)
{
	int i;
    if (n < 2){
        return 0;
    }
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	for(int i=2;i<n;i++)
	{
		if(check(i)){
			cout << i << " ";
		}
	}
	return 0;
}
