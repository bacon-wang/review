#include <stdio.h>

// define 定义标识符常量
// #define MAX 100

// int main() {
// 	printf("%d\n", MAX);

// 	return 0;
// }

// define 定义宏
#define ADD(x, y) ((x) + (y));

int main() {
	int x = 1;
	int y = 2;
	int result = ADD(x, y);

	printf("%d\n", result);

	return 0;
}