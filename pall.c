#include <stdio.h>
 pallindrome() {
  int n, reversed = 0, remainder, original;
    printf("\n\nEnter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("\n%d is a palindrome.\n", original);
    else
        printf("\n%d is not a palindrome.\n", original);

   // return 0;
}
