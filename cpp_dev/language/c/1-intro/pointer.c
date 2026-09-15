#include <stdio.h>

void change(int *pa) {
	*pa = 10;
}

int main() {
	int a = 1;

	change(&a);

	printf("%d\n", a);
	
	return 0;
}