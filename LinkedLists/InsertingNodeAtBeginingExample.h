//
// Created by johan on 4/6/16.
//

#ifndef LINKEDLISTSTUTORIAL_ASD_H
#define LINKEDLISTSTUTORIAL_ASD_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

// declarations
void insert(int, Node**);
void print(Node*);
void InsertingNodeAtBeginingExample_run();

#endif //LINKEDLISTSTUTORIAL_ASD_H
