#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./keygen5 username\n");
        return 1;
    }
    char *username = argv[1];
    char key[10];
    for (int i = 0; i < 10; i++)
    {
        key[i] = rand() % 26 + 'a';
    }
    printf("The key for %s is %s\n", username, key);
    return 0;
}
