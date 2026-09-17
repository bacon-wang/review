#include <stddef.h>
#include <stdio.h>

int sum_array(const int values[], size_t count) {
    int sum = 0;
    for (size_t i = 0; i < count; i++) {
        sum += values[i];
    }
    return sum;
}

double average_array(const int values[], size_t count) {
    return (double)sum_array(values, count) / count;
}

void find_min_max(const int values[], size_t count,
                  int *minimum, int *maximum) {
    *minimum = values[0];
    *maximum = values[0];

    for (size_t i = 1; i < count; i++) {
        if (values[i] < *minimum) {
            *minimum = values[i];
        }
        if (values[i] > *maximum) {
            *maximum = values[i];
        }
    }
}

void print_report(const int scores[], size_t count) {
    int minimum;
    int maximum;

    find_min_max(scores, count, &minimum, &maximum);
    printf("人数：%zu\n", count);
    printf("平均分：%.2f\n", average_array(scores, count));
    printf("最低分：%d\n", minimum);
    printf("最高分：%d\n", maximum);
}

int main(void) {
    int scores[] = {86, 92, 75, 88, 95};
    size_t count = sizeof scores / sizeof scores[0];

    print_report(scores, count);
    return 0;
}