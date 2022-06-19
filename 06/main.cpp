#include <stdlib.h>
#include <dlfcn.h>
#include <stdio.h>

typedef int (*binFunc)(int, int);
int main(int argc, char **argv, char **envp)
{
    if (argc < 3)
        return -1;

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    void *addso = dlopen("./add.so", RTLD_LAZY);

    if (addso == 0)
        return -1;

    binFunc add = (binFunc)dlsym(addso, "add");

    if (add == 0)
        return -1;

    int sum = (*add)(a, b);

    dlclose(addso);

    printf("%d+%d=%d\n", a, b, sum);
}