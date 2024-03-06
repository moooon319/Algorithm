#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int x = 31;
	int sum = 0;
	string s;

	cin >> n ;
	cin >> s;

	sum +=  (int)(s[0]-96);

	for (int i = 1; i < s.length(); i++) {
		sum += ((int)(s[i]) - 96) * x;
		x = x * 31;
	}
	 
	cout << sum;

	
	
	
	
	
	return 0;

}