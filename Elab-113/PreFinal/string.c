#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dest[20];

    strcpy(dest, src);

    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);
    return 0;
}
