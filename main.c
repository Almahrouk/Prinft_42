#include "ft_printf.h"

int main() {
    //int
    ft_printf("Char 1 --> %c  %c  %c\n", 'A', 's', 'x');  // Test the character output
    ft_printf("Char 2 --> %c\n", 65);  // Test the character output
    ft_printf("Char 3 --> %c\n", -1);
    ft_printf("Char 4 --> %c\n", -5);
    int c;
    ft_printf("Char 5 --> %c\n", c);
    ft_printf("Char 6 --> %c\n", NULL);
    ft_printf("Char 7 --> %c\n", '\0');

    //const char *
    ft_printf("String 1 --> %s\n", "This Is My String");  // Test the String output
    ft_printf("String 2 --> %s\n", "This \n Is\t M\0y String");
    ft_printf("String 3 --> %s\n", "");
    ft_printf("String 4 --> %s\n", "\0");
    ft_printf("String 5 --> %s\n", NULL);
    char * str;
    ft_printf("String 6 --> %s\n", str);
    ft_printf("String 7 --> %s\n", (const char *)1!=1);

    //Void *
    ft_printf("Memory Address 1 --> %p\n", &c);
    ft_printf("Memory Address 2 --> %p\n", (int *)16);
    ft_printf("Memory Address 3 --> %p\n", (void *)71);
    ft_printf("Memory Address 4 --> %p\n", (char *)'G');
    ft_printf("Memory Address 5 --> %p\n", &(-20));
    ft_printf("Memory Address 6 --> %p\n", -0);
    ft_printf("Memory Address 7 --> %p\n", *(-10));
    ft_printf("Memory Address 8 --> %p\n", NULL);
    ft_printf("Memory Address 9 --> %p\n", '\0');
    ft_printf("Memory Address 10 --> %p\n", 1!=1);

    // Digit
    ft_printf("Digit 1 --> %d\n", INT_MAX);
    ft_printf("Digit 2 --> %d\n", UINT_MAX);
    ft_printf("Digit 3 --> %d\n", 0);
    ft_printf("Digit 4 --> %d\n", NULL);
    ft_printf("Digit 5 --> %d\n", (int *)'123');

    ft_printf("Digit 1 --> %i\n", -INT_MAX);
    ft_printf("Digit 2 --> %i\n", UINT_MAX);
    ft_printf("Digit 3 --> %i\n", 0);
    ft_printf("Digit 4 --> %i\n", NULL);
    ft_printf("Digit 5 --> %i\n", (int *)'123');

    ft_printf("Unsigned Digit 1 --> %u\n", 1234);
    ft_printf("Unsigned Digit 2 --> %u\n", -1234); // 2nd compliment
    ft_printf("Unsigned Digit 3 --> %u\n", 0);
    ft_printf("Unsigned Digit 4 --> %u\n", NULL);
    ft_printf("Unsigned Digit 5 --> %u\n", -1);
    ft_printf("Unsigned Digit 6 --> %u\n", -2);
    ft_printf("Unsigned Digit 7 --> %u\n", UINT_MAX);
    ft_printf("Unsigned Digit 8 --> %u\n", -UINT_MAX);
    ft_printf("Unsigned Digit 9 --> %u\n", INT_MAX);
    ft_printf("Unsigned Digit 10 --> %u\n", -(INT_MAX));
    ft_printf("Unsigned Digit 11 --> %u\n", (INT_MIN));
    ft_printf("Unsigned Digit 12 --> %u\n", -(INT_MIN));


    ft_printf("Hexa Digit 1 --> %x\n", 12345);
    ft_printf("Hexa Digit 2 --> %X\n", -1234);
    ft_printf("Hexa Digit 3 --> %x\n", 0);
    ft_printf("Hexa Digit 4 --> %x\n", NULL);
    ft_printf("Hexa Digit 5 --> %x\n", (int *)'123');
    ft_printf("Hexa Digit 6 --> %x\n", -1);
    ft_printf("Hexa Digit 7 --> %x\n", -2);
    ft_printf("Hexa Digit 8 --> %x\n", UINT_MAX);
    ft_printf("Hexa Digit 9 --> %x\n", -UINT_MAX);
    ft_printf("Hexa Digit 8 --> %x\n", INT_MAX);
    ft_printf("Hexa Digit 9 --> %x\n", -(INT_MAX));

    return 0;
}
