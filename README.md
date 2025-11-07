# 💻 C Programming Project Collection

This repository showcases a collection of **C Language Programs** written with clean logic, structure, and readability.  
Each program demonstrates **core programming concepts** like loops, arrays, pointers, strings, functions, and file handling.

## 🧠 Example Highlight Code

Here’s one of the most **popular demo programs** from this collection 👇  

✨ *It combines strings, loops, and logic to display a professional coding style.*

---------------------------------------------------------
 Author : Vaishnav Gophane
 Title  : Frequency of Each Character in a String
---------------------------------------------------------





#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int freq[256] = {0};
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = str[i];
        if (ch != '\n' && ch != ' ')
            freq[ch]++;
    }
    printf("\nCharacter Frequency:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0)
            printf("'%c' → %d times\n", i, freq[i]);
    }

    return 0;
}
