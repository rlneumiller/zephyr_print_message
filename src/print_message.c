#include "print_message.h"
#include <stdarg.h>

#define MESSAGE_PREFIX_TEXT "zephyr_helper"

void print_message(const char *format, ...) {
    const char *prefix = "\033[34m" MESSAGE_PREFIX_TEXT "\033[0m";
    char msg[256]; // Buffer for the formatted message
    char *sentences[10]; // Assuming a maximum of 10 sentences
    char *token;
    int i = 0;

    // Format the message
    va_list args;
    va_start(args, format);
    vsnprintf(msg, sizeof(msg), format, args);
    va_end(args);

    // Tokenize the message using \n as the delimiter
    token = strtok(msg, "\n");
    while (token != NULL && i < 10) {
        sentences[i++] = token;
        token = strtok(NULL, "\n");
    }

    if (i > 0) {
        // Print first sentence with prefix
        printk("%s: %s\n", prefix, sentences[0]);
        // Print remaining sentences with padding
        for (int j = 1; j < i; j++) {
            printk("%*s%s\n", (int)strlen(MESSAGE_PREFIX_TEXT) + 2, "", sentences[j]);
        }
    }
}
