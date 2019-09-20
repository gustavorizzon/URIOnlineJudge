#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	char d;
	string n;

	do {
		cin >> d;
		cin >> n;

		if (d == '0' && n == "0") break;

		vector<char> numbers; 

		for (int i = 0; i < n.size(); i++) {
			if (n.at(i) != d) {
				numbers.push_back(n.at(i));
			}
		}

		if (numbers.size() == 0) {
			cout << 0 << "\n";
			continue;
		}

		// remove zeroes from beginning
		do {
			if (numbers.at(0) != '0') {
				break;
			}
			numbers.erase(numbers.begin());
		} while (numbers.size() > 1);

		// show result
		for (int i = 0; i < numbers.size(); i++) {
			cout << numbers.at(i);
		}

		cout << "\n";
	} while (true);

	return 0;
}