#include <iostream>

using namespace std;

int main() {
	float n1, n2, n3, n4, m;
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	m = (n1*2 + n2*3 + n3*4 + n4) / 10;

	printf("Media: %.1f\n", m);
	
	if (m >= 7) {
		cout << "Aluno aprovado.\n";
	} else if (m < 5) {
		cout << "Aluno reprovado.\n";
	} else {
		cout << "Aluno em exame.\n";
		
		float mf, ne;
		cin >> ne;

		printf("Nota do exame: %.1f\n", ne);

		mf = (m + ne) / 2;

		if (mf >= 5) {
			cout << "Aluno aprovado.\n";
		} else {
			cout << "Aluno reprovado.\n";
		}

		printf("Media final: %.1f\n", mf);
	}
	return 0;
}
