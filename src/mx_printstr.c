#include "../inc/libmx.h"

void mx_princhar(char c) {
    write(1, &c, 1);
}
