#include <iostream>

using namespace std;

int main()
{
	int n, c = 0, r = 0, s = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int q;
		cin >> q;

		char t;
		cin >> t;
		t = toupper(t);

		if (t == 'C') {
			c += q;
		} else {
			if (t == 'R') {
				r += q;
			} else {
				if (t == 'S') {
					s += q;
				}
			}
		}
	}

	int total = c + r + s;
	cout << "Total: " << total << " cobaias\n";
	cout << "Total de coelhos: " << c << "\n";
	cout << "Total de ratos: " << r << "\n";
	cout << "Total de sapos: " << s << "\n";

	printf("Percentual de coelhos: %.2f %\n", (100.0 * c / total));
	printf("Percentual de ratos: %.2f %\n", (100.0 * r / total));
	printf("Percentual de sapos: %.2f %\n", (100.0 * s / total));

	return 0;
}