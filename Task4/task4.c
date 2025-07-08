// TASK 4: RLE Compression

#include <stdio.h>
#include <string.h>

void compressRLE(const char *input) {
    int len = strlen(input);

    for (int i = 0; i < len; i++) {
        int count = 1;
        while (i < len - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", input[i], count);
    }
    printf("\n");
}

int main() {
    char str[] = "aaabbbbccddddd";
    printf("Original: %s\nCompressed: ", str);
    compressRLE(str);
    return 0;
}
