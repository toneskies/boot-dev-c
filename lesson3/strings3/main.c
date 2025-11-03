#include <stdio.h>
#include <string.h>

typedef struct {
    size_t length;
    char buffer[64];
} TextBuffer;

void append_str(char* str1, const char* str2) {
    char* end = str1;
    while(*end){
        end++;
    }
    const char* start = str2;
    while(*start != '\0') {
        *end = *start;
        start++;
        end++;
    }
    *end = '\0';
}

int smart_append(TextBuffer* dest, const char* src) {
    // int out = 0;
    // char* end = dest->buffer;
    // // go to end of text in the dest buffer
    // while(*end) {
    //     end++;
    // }

    // char* start = src;
    // size_t current_index = end - dest->buffer;
    
    // while(*start != '\0') {
    //     if (start == NULL) {
    //         out = 1;
    //     }
    //     const int max_size = 64;
    //     int src_len = strlen(src);
    //     int space_left = max_size - src_len - 1;
    //     if(src_len > space_left) {
    //         strncat(dest->buffer, src, src_len);
    //         dest->length = max_size-1;
    //         out = 1;
    //     }
    //     else {
    //         *end = *start;
    //         if (current_index >= 62) {
    //             out = 0;
    //             break;
    //         }
    //         start++;
    //         end++;
    //         out = 1;
    //     }
    // }
    // *end = '\0';

    // dest->length = end - dest->buffer;

    // return out;
    if (dest == NULL || src == NULL) {
        return 0;
    }
    
    char* end = dest->buffer;

    while (*end) {
        end++;
    }
    
    const char* original_end = end; 
    
    const char* start = src;

    while (*start && (end - dest->buffer) < 63) {
        *end = *start;
        start++;
        end++;
    }
    *end = '\0';
    dest->length = end - dest->buffer;

    return (*start == '\0');
}

int main() {

    TextBuffer text = {
        .length = 10,
        .buffer = "hey man."
    };
    
    printf("Buffer Size: %zu\n", text.length);
    printf("Buffer Contents: %s\n", text.buffer);

    // Simple Append
    char first[16] = "hey";
    char* second = "man";
    append_str(first, second);
    printf("%s\n", first);

    // Smart Append
    char* smart_src = " additional text...";
    TextBuffer* text1 = &text;
    int output = smart_append(text1, smart_src);
    printf("Length: %zu, Buffer: %s\n", text1->length, text1->buffer);
    printf("Returned with output: %d\n", output);

    return 0;
}