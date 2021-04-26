#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	unsigned long long n;
	unsigned long long a = 2;
	unsigned long long result = 1;
	unsigned long long result2;

	cin >> n;

	for (int i = 0; i < n; i++){
		result = a * result;
	}

	result = result + 1;
	result2 = result * result;

	cout << result2 << "\n";

	return 0;
}