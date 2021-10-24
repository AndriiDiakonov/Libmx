#include "../inc/libmx.h"

int mx_bubble_sort(char **arr, int size) {
    char *temp;
    int i, j;
    int check = 0;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (mx_strcmp(arr[j], arr[j + 1]) < 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                check++;
            }
        }
    }
    return check;
}