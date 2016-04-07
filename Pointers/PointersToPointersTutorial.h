//
// Created by johan on 4/6/16.
//

#ifndef POINTERSTUTORIALS_POINTERSTOPOINTERSTUTORIAL_H
#define POINTERSTUTORIALS_POINTERSTOPOINTERSTUTORIAL_H

//
// Created by johan on 4/6/16.
//

#include "PointersToPointersTutorial.h"
#include <stdio.h>

void PointersToPointersTutorial() {

    puts("========== POINTERS TO POINTERS TUTORIAL ============\n");
    puts("here are the variables we will be working on");
    puts("int x = 5;\n"
         "int *p = &x;\n"
         "*p = 6;\n"
         "int **q = &p;\n"
         "int ***r = &q;\n"
         "int ************wtf; \n");


    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    int ************wtf;

    wtf = &r;

    puts("see what p is pointing at (will be the value 6)");
    printf("value of p=%i\n", *p);

    puts("let's get the address of P");
    printf("address of p=%i\n", p);

    puts("this will get us the address of q (which is the same as the address of p)");
    printf("address of q=%i\n", *q);

    puts("to dereference q we have to add another * sign");
    printf("value of q=%i\n", **q);

    puts("let's get the address of r and the wtf");
    printf("address of p=%i\n", r);
    printf("address of wtf=%i\n", wtf);

    puts("");
}

#endif //POINTERSTUTORIALS_POINTERSTOPOINTERSTUTORIAL_H
