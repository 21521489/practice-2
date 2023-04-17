#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	/* int t, n;
	cin >> t >> n;
	if (t < 0 || n < 0 || t>12||t<1) cout << "INVALID";
	switch (t)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: cout << 31; break;
	case 4: case 6: case 9: case 11: cout << 30; break;
	case 2:
		if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) cout << 29; 
		else cout << 28;
	}
	return 0;*/

	/*int n;
	cin>>n;
	bool ok=n%2==0;
	cout<<ok;*/

	/*char x;
	cin >> x;
	if (x >= 97 && x <= 122) cout << "YES";
	else cout << "NO";
	cout<<(int)x;//xem ma ASCII cua chu cai*/

	//cach 2
	//char x;
	//cin >> x;
	//if (x >= 'a' && x <= 'z') cout << "YES";
	//else cout << "NO";

	int a, b, c;
	cin >> a >> b >> c;
	int min=a, max=a;
	if (max < b) max = b;
	if (max < c) max = c;
	if (min > b) min = b;
	if (min > c) min = c;
	cout << min << " " << max;

}


