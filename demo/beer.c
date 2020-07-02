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
    putchar('v');
    putchar('o');
    putchar('t');
    putchar('r');
    putchar('e');
    putchar(' ');
    putchar('a');
    putchar('g');
    putchar('e');
    putchar(' ');
    putchar('?');

    int firstDigit = getchar() - '0';
    int secondDigit = getchar() - '0';

    int age = firstDigit * 10 + secondDigit;
    if(age >= 18) {
        putchar('T');
        putchar('i');
        putchar('e');
        putchar('n');
        putchar('s');
        putchar(' ');
        putchar('t');
        putchar('a');
        putchar(' ');
        putchar('b');
        putchar('i');
        putchar('e');
        putchar('r');
        putchar('e');
        putchar(' ');
        putchar('!');
    } else {
        putchar('R');
        putchar('e');
        putchar('t');
        putchar('o');
        putchar('u');
        putchar('r');
        putchar('n');
        putchar('e');
        putchar(' ');
        putchar('c');
        putchar('h');
        putchar('e');
        putchar('z');
        putchar(' ');
        putchar('m');
        putchar('a');
        putchar('m');
        putchar('a');
        putchar('n');
        putchar('!');
    }
}