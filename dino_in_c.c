// What do I need ?
// I need a console type of thing to make my dino character stay inside the region
// THen it should move automatically and jump only with 'spacebar'
// Should create some land and flying obstacles
// The score should be calculated realtime
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

bool break_loop() {
    char ch;
    scanf("%c", &ch);
    if (ch == 's') {
        return true;
    } else {
        return false;
    }
}

char* str_copy_(char* input) {
    char* h_span_copy = malloc((strlen(input)+1)*sizeof(char));
    if (h_span_copy == NULL) {
        printf("Error");
    }
    for (int i=0; i<strlen(input); i++) {
       h_span_copy[i] = input[i];
    }
    return h_span_copy;
}

int main() {
    char h_span[20] = "                    ";
    int pos = 0;
    int itr = 0;
    while (1) {
        char* h_span_copy = str_copy_(h_span);
        h_span_copy[pos] = '1';
        printf("\r%s", h_span_copy);
        fflush(stdout);
        free(h_span_copy);

        pos++;
        usleep(500000);

        // reset condn
        if (pos == 20) {
            pos = 0;
            itr++;
            if (itr == 10) {
                itr = 0;
                break;
            }
        }
    }
    return 0;
}