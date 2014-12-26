#include <stdio.h>

int test(int* pointer1) {
    printf("TestMethod: *pointer1 = %d\n", *pointer1);
    printf("TestMethod: pointer1 = %d\n", pointer1);
    printf("TestMethod: &pointer1 = %d\n", &pointer1);
    return 0;
}

int test2(int* pointer) {
    printf("Test2: *pointer = %d\n", *pointer);
    printf("Test2: pointer = %d\n", pointer);
    return 0;
}

int main()
{
    printf("Hello, World!\n");

    int var = 9;
    int *pointer1;
    int *pointer2;
    pointer1 = &var;
    
    printf("pointer1 is: %d\n", pointer1);
    printf("*pointer1 is: %d\n", *pointer1);
    printf("&pointer1 is: %d\n", &pointer1);
    //printf("So that means a plain old pointer without\n \
        * or & is just a straight address. To access the value\n \
        you need to do *. To pass an address need &\n");
    
    test(pointer1);
    int testval = 89;
    test(&testval);
    test2(pointer1);
    //ok so if method is *val, then just pass val
    //becase val IS an *something
    // can also pass a regular int as &myInt to turn it intoa  pointer
    // then can just use it normally
        
    return 0;
}



