int fact(int n) {
    if (n == 0) return 1;
    else return (n * fact(n - 1));
}

int askNumber() {
    int exit = 0;
    int input = 0;
    int nb = 0;
    while(exit == 0) {
        input = getchar();
        if(input == 10) {
            exit = 1;
        } else {
            input = input - '0';
            nb = nb * 10 + input;
        }
    }

    return nb;
}

int printNumber(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n/10) {
        printNumber(n/10);
    }

    putchar(n%10 + '0');
}


int main() {
    putchar('F');
    putchar('a');
    putchar('c');
    putchar('t');
    putchar('o');
    putchar('r');
    putchar('i');
    putchar('e');
    putchar('l');
    putchar(' ');
    putchar('d');
    putchar('e');
    putchar(' ');
    putchar(':');
    putchar(' ');

    int nb = askNumber();
    int result = fact(nb);

    printNumber(result);
    putchar(10);

    return result;
}
