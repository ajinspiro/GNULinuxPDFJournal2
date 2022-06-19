#include <stdio.h>
#include <stdlib.h>

int add(int, int);
int main(int argc, char **argv, char **envp)
{
    if (argc < 3)
        return -1;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int sum = add(a, b);

    printf("%d+%d=%d\n", a, b, sum);
}