#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int n, char *radix, int base) {
    if (n >= base) ft_putnbr(n / base, radix, base);
    ft_putchar(radix[n % base]);
}

int main() {
    ft_putnbr(1337, "0123456789abcdef", 16);
    return (0);
}
