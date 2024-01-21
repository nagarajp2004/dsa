#include <stdio.h>

// Function to accept input string and character from the user
void accept(char *input_str, char *char_to_remove) {
    printf("Enter a string: ");
    scanf("%s", input_str);

    printf("Enter the character to remove: ");
    scanf(" %c", char_to_remove); // Note the space before %c to consume any leading whitespace
}

// Function to display the modified string
void display(const char *modified_str) {
    printf("Modified string: %s\n", modified_str);
}

// Function to remove the first occurrence of a character from the string
void strdel(char *input_str, char char_to_remove) {
    // Find the index of the first occurrence of the character
    int index = -1;
    for (int i = 0; input_str[i] != '\0'; i++) {
        if (input_str[i] == char_to_remove) {
            index = i;
            break;
        }
    }

    // If the character is found, remove it by shifting the remaining characters
    if (index != -1) {
        for (int i = index; input_str[i] != '\0'; i++) {
            input_str[i] = input_str[i + 1];
        }
    }
}

int main() {
    char original_str[100]; // Assuming a maximum string length of 100
    char char_to_remove;

    // Accept input from the user
    accept(original_str, &char_to_remove);

    // Call the strdel function
    strdel(original_str, char_to_remove);

    // Display the modified string
    display(original_str);

    return 0;
}
