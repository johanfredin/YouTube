//
// Created by johan on 4/7/16.
//

#ifndef POINTERSTUTORIALS_ARRAYSASFUNCTIONARGUMENTSTUTORIAL_H
#define POINTERSTUTORIALS_ARRAYSASFUNCTIONARGUMENTSTUTORIAL_H

int sumOfElements(int a[], int size) {
    puts("function sum\n");
    puts("int sumOfElements(int a[], int size) {");
    puts("\tint i, sum = 0;\n"
         "\t\tfor(i = 0; i < size; i++) {\n"
         " \t\t\tsum += a[i];\n"
         "\t\t}\n"
         "\treturn sum;\n");
    puts("}");

    int i, sum = 0;
    for(i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}

void ArraysAsFunctionArgumentsTutorial() {
    puts("============ ARRAYS AS FUNCTION ARGUMENTS TUTORIAL ====================");

    puts(" int a[] = {1,2,3,4,5}; \n\n "
    "if we divide the bytesize of the five integers(20)\n"
    "with the bytesize of an int(4) we get how many elements the array holds (5);\n"
    "int size = sizeof(a) / sizeof(int);");

    int a[] = {1,2,3,4,5};

    // if we divide the bytesize of the five integers(20)
    // with the bytesize of an int(4) we get how many elements the array holds (5);
    int size = sizeof(a) / sizeof(int);

    int total = sumOfElements(a, size);
    printf("Sum of elements = %i\n", total);
}

#endif //POINTERSTUTORIALS_ARRAYSASFUNCTIONARGUMENTSTUTORIAL_H
