#include <stdio.h>
#include <string.h>

//function for printing all the elements in the array
output_print(char *input)  {
    for (int i = 0; i < strlen(input); i++) {
        printf("%d ", input[i]);
    }
}

void main() {
    char input[2];

    printf("Need a reminder on the different data types?\n");
    printf("Enter a single number or character to see how it is interpreted:\n");
    scanf("%s", input);
    output_print(input);

    return 0;
}