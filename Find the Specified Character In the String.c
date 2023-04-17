#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char line;
    int length;

    // Prompt user to enter a string and read input from user
    printf("Enter a string (maximum 99 characters): ");
    if (fgets(string, sizeof(string), stdin) == NULL) {
        // If fgets() fails to read input, print an error message and exit program with failure status
        fprintf(stderr, "Input reading failed\n");
        return 1;
    }

    // Prompt user to enter a character to search for and read input from user
    printf("Enter a character to search for: ");
    if (scanf(" %c", &line) != 1) {
        // If scanf() fails to read input, print an error message and exit program with failure status
        fprintf(stderr, "Input reading failed\n");
        return 1;
    }

    length = strlen(string);
    
    int i = 0;
    while (i < length) {
        // Search for the entered character in the string
        if (string[i] == line) {
            break;
        }
        i++;
    }

    if (i == length) {
        printf("No matching character found in the string.\n");
        return 0;
    }
    
    // Print the rest of the string starting at the index of the matching character
    for (int j = i; j < length; j++) {
        printf("%c", string[j]);
    }

    return 0;
}
