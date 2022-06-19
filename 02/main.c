// command line splitter

#include <stdio.h>
int main(int argc, char **argl, char **envl)
{
    for (size_t i = 0; i < argc; i++)
    {
        printf("%s\n", argl[i]);
    }
}