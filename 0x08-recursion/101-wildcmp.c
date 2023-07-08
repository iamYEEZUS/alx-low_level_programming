#include <stdio.h>
#include "alx.h"

int wildcmp(char *s1, char *s2);

int main() {
    char str1[] = "hello world";
    char str2[] = "hello *";
    int result = wildcmp(str1, str2);
    
    if (result == 1) {
        printf("Strings are identical.\n");
    } else {
        printf("Strings are different.\n");
    }
    
    return 0;
}

int wildcmp(char *s1, char *s2) {
    // Base case: If both strings are empty, they are identical
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }
    
    // If the current character in s2 is '*', it can replace any string (including empty string)
    if (*s2 == '*') {
        // Recursively check all possibilities by moving s1 pointer and incrementing s2 pointer
        while (*s1 != '\0') {
            if (wildcmp(s1, s2 + 1)) {  // Check for each possibility
                return 1;
            }
            s1++;
        }
        
        // If s1 reaches the end, check if the remaining characters in s2 are all '*'
        while (*s2 == '*') {
            s2++;
        }
        
        // If s2 reaches the end as well, both strings can be considered identical
        if (*s2 == '\0') {
            return 1;
        }
        
        return 0;
    }
    
    // If the characters are equal or s2 has a '?', move both pointers to the next character
    if (*s1 == *s2 || *s2 == '?') {
        return wildcmp(s1 + 1, s2 + 1);
    }
    
    return 0;  // If none of the conditions match, the strings are different
}
