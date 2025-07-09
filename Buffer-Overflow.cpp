#include <stdio.h>
#include <string.h>

int main()
{
    char input[8];
    printf("Enter some text: ");
    // Unsafe: Scanf does not check input's length.     
    scanf("%s", input);
    // Typing more letters than the size of input causes buffer overflow.
    // The extra letter replace the system memory.
    printf("You entered: %s\n", input);
    return 0;
}
