//ітераційний спосіб
#include <iostream>

using namespace std;

int Sum(int b[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        if (b[i] % 2 ==0 && b[i] % 3 !=0) sum += b[i];

    return sum;
}

int Count(int b[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
        if (b[i] % 2 ==0 && b[i] % 3 !=0) count++;

    return count;
}

void Create(int b[], int size)
{
    for (int i = 0; i < size; i++)
        b[i] = 10 + rand() % 90;

    return;
}

void Modify(int b[], int size)
{
    for (int i = 0; i < size; i++)
        if (b[i] % 2 ==0 && b[i] % 3 !=0) b[i] = 0;

    return;
}

void Print(int b[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%s%i%s%s", (i == 0 ? "{ " : ""), b[i], (i < size - 1 ? ", " : ""), (i == size - 1 ? " }\n" : ""));
}

int main()
{

    const int SIZE = 21;

    int* c = new int[SIZE];

    Create(c, SIZE);

    Print(c, SIZE);

    printf("Count: %i\nSum: %i\n", Count(c, SIZE), Sum(c, SIZE));

    Modify(c, SIZE);

    Print(c, SIZE);

    return 0;
}
