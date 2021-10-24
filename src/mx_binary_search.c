#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int check = 0;
    while (check <= size) {
        int m = check + (size - check - 1) / 2;
        if (arr[m] == s) {
            ++*count;
            return m;
        }
        if (arr[m] < s) {
            ++*count;
            check = m + 1;
        }
        else {
            ++*count;
            size = m - 1;
        }
    }
    *count = 0;
    return -1;
}
