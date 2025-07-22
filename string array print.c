#include <stdio.h>
int main() {
    char *arr[]= {"hello","world","this","is","a","test"};
    int length =sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i< length; i++) {
        printf("%s\t",arr[i]);
    }
    return 0;
}

