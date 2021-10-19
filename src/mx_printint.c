#include "../inc/header.h"

void mx_printint(int n) {
    char res[10];
    int i = 0;

    if (n == 0) {
        mx_printchar('0');
        return;
    }

    if (n < 0) {
        mx_printchar('-');
    }

    while (n != 0) {
        res[i++] = n % 10 + '0';
        n = n / 10;
    }

    while (i > 0) {
        mx_printchar(res[i - 1]);
        i--;
    }
}
