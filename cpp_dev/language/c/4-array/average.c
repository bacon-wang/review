#include <stddef.h>
#include <stdio.h>

double average(const int scores[], size_t count) {
    int total = 0;

    for (size_t i = 0; i < count; i++) {
        total += scores[i];
    }
    return (double)total / count;
}

int main(void) {
    int scores[] = {86, 92, 79, 88, 95};
    size_t count = sizeof scores / sizeof scores[0];

    printf("人数：%zu\n", count);
    printf("平均分：%.2f\n", average(scores, count));
    return 0;
}