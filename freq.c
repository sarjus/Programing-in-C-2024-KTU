/******************************************************
 * File         :   Freq.c
 * Description  :   C program to count the frequency of
 *                  each character in a given string.
 *                  Ignore case sensitivity and consider
 *                  only alphabetical characters.
 * Author       :   Sarju S
 * Version      :   1.0
 * Date         :   19/02/2025
 * ***************************************************/
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}; // Initialize frequency array to 0

    // Read input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count character frequency using ASCII values
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Convert uppercase to lowercase (ASCII: 'A' = 65, 'a' = 97)
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;  // Convert to lowercase
        }

        // Check if character is a lowercase letter (ASCII: 'a' = 97, 'z' = 122)
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 97]++; // Increment the count for the character
        }
    }

    // Print character frequencies
    printf("Character Frequency:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i + 97, freq[i]); // Convert index back to character
        }
    }

    return 0;
}
