#include <stdio.h>

int main() {
	do {
		unsigned int k;
		scanf("%d", &k);
		if (k == 0) {
			break;
		}

		int n, m;
		scanf("%d%d", &n, &m);

		for (int i = 0; i < k; i++) {
			int x, y;
			scanf("%d%d", &x, &y);

			if (x == n || y == m) {
				puts("divisa");
				continue;
			}
	
			if (y > m) {
				printf("N");
			} else {
				printf("S");
			}

			if (x > n) {
				puts("E");
			} else {
				puts("O");
			}
		}
	} while (1);
	
	return 0;
}