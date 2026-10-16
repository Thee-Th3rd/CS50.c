#include <stdio.h>

int get_int(const char *prompt)
{
    int value;
    printf("%s", prompt);
    scanf("%d", &value);
    return value;
}

float average(int length, int numbers[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    return sum / (float)length;
}

int main(void)
{
    const int N = 3;
    int scores[N];

    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score 1: ");
    }
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score 2: ");
    }
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score 3: ");
    }

    printf("Average: %f\n", average(N, scores));
    return 0;
}
