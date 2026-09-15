#include <stdio.h>

struct student {
	char name[20];
	int age;
	char id[15];
};


int main() {
	struct student s = {"张三", 18, "20260001"};
	struct student *ps = &s;

	printf("name = %s, age = %d, id = %s\n", s.name, s.age, s.id);
	printf("name = %s, age = %d, id = %s\n", ps->name, ps->age, ps->id);

	return 0;
}