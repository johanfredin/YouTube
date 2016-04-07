//
// Created by johan on 4/7/16.
//

#include "TutorialUtils.h"
#include <stdio.h>
#include <string.h>

void print_header(char *header) {
    printf("===== ");
    printf("%s", header);
    printf(" =====\n");
}

void print_function(char *function_name) {
    puts("");
    puts(function_name);
    int length = strlen(function_name);
    char underline[length + 1];
    int i;
    for(i = 0; i < length; i++) {
        underline[i] = '-';
    }
    underline[length] = '\0';
    puts(underline);
}