#include <iostream>
#include <string>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	cin.clear();
	cin.ignore();

	for (int i = 0; i < n; i++) {
		string mine;
		getline(cin, mine);

		int mineLength = mine.size();
		int ltAmount = 0;
		int diamonds = 0;
		
		for (int j = 0; j < mineLength; j++) {
			if (mine.at(j) == '<') {
				ltAmount++;
			} else if (mine.at(j) == '>' && ltAmount > 0) {
				diamonds++;
				ltAmount--;
			}
		}

		cout << diamonds << "\n";
	}

	return 0;
}