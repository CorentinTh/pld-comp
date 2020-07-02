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

int main() {
    putchar('D');
    putchar('o');
    putchar('n');
    putchar('n');
    putchar('e');
    putchar('z');
    putchar(' ');
    putchar('u');
    putchar('n');
    putchar(' ');
    putchar('n');
    putchar('o');
    putchar('m');
    putchar('b');
    putchar('r');
    putchar('e');
    putchar(' ');
    putchar(':');
    putchar(10);

    int nb = askNumber();

    if(nb & 1) {
        putchar('N');
        putchar('o');
        putchar('m');
        putchar('b');
        putchar('r');
        putchar('e');
        putchar(' ');
        putchar('i');
        putchar('m');
        putchar('p');
        putchar('a');
        putchar('i');
        putchar('r');
        putchar(' ');
        putchar('!');
        putchar(10);
    } else {
        putchar('N');
        putchar('o');
        putchar('m');
        putchar('b');
        putchar('r');
        putchar('e');
        putchar(' ');
        putchar('p');
        putchar('a');
        putchar('i');
        putchar('r');
        putchar(' ');
        putchar('!');
        putchar(10);
    }
}