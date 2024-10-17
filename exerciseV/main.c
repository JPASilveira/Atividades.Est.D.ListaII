#include <stdio.h>
#include <string.h>

void find_char(char *str, char c, int* return_vector, int* number_of_appearances) {
    int str_length = strlen(str);
    *number_of_appearances = 0;

    for (int i = 0; i < str_length; i++) {
        if (str[i] == c) {
            return_vector[*number_of_appearances] = i;
            (*number_of_appearances)++;
        }
    }
}

int main() {
    char str[] = "Hello World!";
    char char_find = 'l';
    int return_vector[strlen(str)];
    int number_of_appearances;

    find_char(str, char_find, return_vector, &number_of_appearances);

    printf("Indexes where the letter '%c' was found: ", char_find);
    for (int i = 0; i < number_of_appearances; i++) {
        printf("%d ", return_vector[i]);
    }
    printf("\n");


    printf("Total number of appearances: %d\n", number_of_appearances);

    return 0;
}
