#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	long long  answer;
	long long x = 1;
	long long sum = 0;
	long long m = 1234567891;
	string s;

	cin >> n ;
	cin >> s;


	for (int i = 0; i < s.length(); i++) {
		sum += ((long (s[i]) - 96) * x)%m ; 
		x = (x * 31)%m;
		 answer = sum % m;
	}
	 
	cout << answer;
	
	
	return 0;

}