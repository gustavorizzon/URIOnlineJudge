#include <stdio.h>

int main() {
	do {
		unsigned int n;
		scanf("%d", &n);
		if (n == 0) {
			break;
		}

		for (int i = 0; i < n; i++) {
			char * marked;
			unsigned short count = 0;

			unsigned int a, b, c, d, e;
			scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

			if (a <= 127) {
				marked = "A";
				count++;
			}

			if (b <= 127) {
				marked = "B";
				count++;
			}

			if (c <= 127) {
				marked = "C";
				count++;
			}

			if (d <= 127) {
				marked = "D";
				count++;
			}

			if (e <= 127) {
				marked = "E";
				count++;
			}

			if (count != 1) {
				puts("*");
			} else {
				puts(marked);
			}
		}

	} while (1);

	return 0;
}