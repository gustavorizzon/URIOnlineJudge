#include <iostream>
#include <string>

using namespace std;

string crypt(string m) {
	string m2 = "";
	for (int i = m.size() - 1; i >= 0; i--) {
		char tmp;
		if (isalpha(m.at(i))) {
			tmp = char(int(m.at(i)) + 3);
		} else {
			tmp = m.at(i);
		}
		if (m.size() - i > m.size() / 2) {
			tmp = char(int(tmp) - 1);
		}
		m2 += tmp;
	}
	return m2;
}

int main() {
	int n;
	cin >> n;

	cin.clear();
	cin.ignore();
	
	while (n) {
		n--;
		string m;
		getline(cin, m);
		cout << crypt(m) << "\n";
	}

	return 0;
}