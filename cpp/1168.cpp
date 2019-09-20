#include <iostream>
#include <string>

using namespace std;

const int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string v;
		cin >> v;
		int ledAmount = 0;

		for (int j = 0; j < v.size(); j++) {
			ledAmount += leds[v.at(j) - '0'];
		}

		cout << ledAmount << " leds\n";
	}

	return 0;
}