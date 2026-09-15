#include <stdio.h>

// static 修饰局部变量
// void test_normal() {
// 	int a = 0;
// 	a++;
// 	printf("normal: %d\n", a);
// }

// void test_static() {
// 	static int a = 0; // 程序执行前在静态存储区分配空间, 此处初始化
// 	a++;
// 	printf("static: %d\n", a);
// }

// int main() {
// 	test_normal();
// 	test_normal();
// 	test_normal();
// 	printf("===================\n");
// 	test_static();
// 	test_static();
// 	test_static();

// 	return 0;
// }

// 特点：static 修饰的局部变量和全局变量一样只初始化一次
// void test_normal_init() {
// 	int a = 0; // 每次进入函数创建, 出函数销毁
// 	a++;
// 	printf("a: %d\n", a);
// }

// void test_static_init() {
// 	static int a = 0; // 程序执行前在静态存储区分配空间, 此处初始化
// 	a++;
// 	printf("a: %d\n", a);
// }

// int main() {
// 	test_normal_init();
// 	test_normal_init();
// 	test_normal_init();
// 	printf("===================\n");
// 	test_static_init();	
// 	test_static_init();	
// 	test_static_init();	

// 	return 0;
// }


// static 修饰全局变量
// extern int g_a;

// void test_static_global() {
// 	printf("g_a: %d\n", g_a);
// }

// int main() {
// 	test_static_global();

// 	return 0;
// }

// static 修饰函数
// void test();

// int main() {
// 	test();

// 	return 0;
// }

#include <stdio.h>

void normal(void) {
    int count = 0;
    printf("normal: %d\n", ++count);
}

void persistent(void) {
    static int count = 0;
    printf("static: %d\n", ++count);
}

int main(void) {
    normal(); normal(); normal();
    persistent(); persistent(); persistent();
    return 0;
}