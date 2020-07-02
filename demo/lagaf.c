int main() {
    putchar('Q');
    putchar('u');
    putchar('e');
    putchar('l');
    putchar(' ');
    putchar('e');
    putchar('s');
    putchar('t');
    putchar(' ');
    putchar('l');
    putchar('e');
    putchar(' ');
    putchar('n');
    putchar('o');
    putchar('m');
    putchar('b');
    putchar('r');
    putchar('e');
    putchar(' ');
    putchar('?');
    putchar(10);

    int nb = 4269;

    int input = 0;
    int guess = 0;
    int exit = 0;

    while(guess != nb) {
        guess = 0;
        exit = 0;
        while(exit == 0) {
            input = getchar();
            if(input == 10) {
                exit = 1;
            } else {
                input = input - '0';
                guess = guess * 10 + input;
            }
        }

        if(guess < nb) {
            putchar('C');
            putchar(''');
            putchar('e');
            putchar('s');
            putchar('t');
            putchar(' ');
            putchar('p');
            putchar('l');
            putchar('u');
            putchar('s');
            putchar(10);
        }

        if(guess > nb) {
            putchar('C');
            putchar(''');
            putchar('e');
            putchar('s');
            putchar('t');
            putchar(' ');
            putchar('m');
            putchar('o');
            putchar('i');
            putchar('n');
            putchar('s');
            putchar(10);
        }
    }

    putchar('B');
    putchar('r');
    putchar('a');
    putchar('v');
    putchar('o');
    putchar(' ');
    putchar('!');
    putchar(10);
}