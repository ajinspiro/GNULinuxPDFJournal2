#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **envp)
{
    const char *write = "w";
    FILE *filePointer = popen("sort", write);
    if (filePointer == 0)
        return -1;

    fprintf(filePointer, "Syed\n");
    fprintf(filePointer, "Arun\n");
    fprintf(filePointer, "Praseed\n");
    fprintf(filePointer, "Shalvin\n");
    fprintf(filePointer, "Sudin\n");
    fprintf(filePointer, "Jolly\n");
    fprintf(filePointer, "Anil\n");

    pclose(filePointer);
}