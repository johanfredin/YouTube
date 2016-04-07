//
// Created by johan on 4/7/16.
//

#ifndef POINTERSTUTORIALS_CHARACTERARRAYSANDPOINTERSTUTORIAL_H
#define POINTERSTUTORIALS_CHARACTERARRAYSANDPOINTERSTUTORIAL_H

#include "string.h"
#include "TutorialUtils.h"

void example1();
void example2();

void CharacterArraysAndPointersTutorial() {
    print_header(__FUNCTION__);
    example1();
    example2();

}

void example1() {
    print_function(__FUNCTION__);
    char c[5];
    c[0] = 'J';
    c[1] = 'O';
    c[2] = 'H';
    c[3] = 'N';

    // The value will be undefined character arrays
    // that are not string literals e.g char name[] = "JOHN"; must
    // end with a null character '\0'.
    printf("char array without null character:%s\n", c);

    // If we add the null character we should be safe
    c[4] = '\0';
    printf("char array with null character:%s\n", c);

    // the length of char c will be 4 and not 5 (null character not counted)
    int length = strlen(c);
    printf("Length = %i\n", length);
}

void example2() {
    print_function(__FUNCTION__);
    // Character arrays created as string literals don't need null character at the end.
    char c[] = "JOHN";
    int length = strlen(c);
    // This will print out 4
    printf("Lenght = %i\n", length);
}

#endif //POINTERSTUTORIALS_CHARACTERARRAYSANDPOINTERSTUTORIAL_H
