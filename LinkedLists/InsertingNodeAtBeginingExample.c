#include <stdio.h>
#include <stdlib.h>

#include "InsertingNodeAtBeginingExample.h"

// main --------------------------------------------------------------------
void InsertingNodeAtBeginingExample_run() {
    Node *head = NULL;  // empty list

    int n, i, x;

    // Set how many numbers (entrys) to make
    printf("Input amount of numbers: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter the number: ");
        scanf("%d", &x);
        insert(x, &head);
        print(head);
    }

}

// definitions -------------------------------------------------------------
void insert(int x, Node **pointerToHead) {
    Node *temp = malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;
    if(*pointerToHead != NULL) {
        temp->next = *pointerToHead;
    }
    *pointerToHead = temp;
}

void print(Node *head) {
    while(head != NULL) {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}

