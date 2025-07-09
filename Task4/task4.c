// TASK 4: Run-Length Encoding Compression and Decompression

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to perform RLE compression
void compressRLE(const char *input) {
    int len = strlen(input);
    printf("Compressed Output: ");
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

// Function to perform RLE decompression
void decompressRLE(const char *input) {
    printf("Decompressed Output: ");
    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        i++;
        int count = 0;

        // Convert character digits to integer count
        while (isdigit(input[i])) {
            count = count * 10 + (input[i] - '0');
            i++;
        }
        i--; // Adjust since outer loop will increment again

        // Print character 'count' times
        for (int j = 0; j < count; j++) {
            printf("%c", ch);
        }
    }
    printf("\n");
}

int main() {
    int choice;
    char input[1000];

    do {
        printf("\n===== RLE Compression Menu =====\n");
        printf("1. Compress String\n");
        printf("2. Decompress String\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline from buffer

        switch (choice) {
            case 1:
                printf("Enter a string to compress: ");
                fgets(input, sizeof(input), stdin);
                input[strcspn(input, "\n")] = '\0'; // Remove trailing newline
                compressRLE(input);
                break;

            case 2:
                printf("Enter an RLE string to decompress: ");
                fgets(input, sizeof(input), stdin);
                input[strcspn(input, "\n")] = '\0'; // Remove trailing newline
                decompressRLE(input);
                break;

            case 3:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }

    } while (choice != 3);

    return 0;
}
