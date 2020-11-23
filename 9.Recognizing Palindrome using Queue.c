#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stack;
int top = -1;


void push(char ele)
{
    stack[++top] = ele;
}


char pop()
{
    return stack[top--];
}


int isPalindrome(char str[])
{
    int length = strlen(str);


    stack = (char*)malloc(length * sizeof(char));


    int i, mid = length / 2;

    for (i = 0; i < mid; i++) {
        push(str[i]);
    }


    if (length % 2 != 0) {
        i++;
    }

    while (str[i] != '\0') {
        char ele = pop();
        if (ele != str[i])
            return 0;
        i++;
    }

    return 1;
}


int main()
{
    char str[100];
    printf("Enter the word: ");
    scanf("%s",&str);
    if (isPalindrome(str)) {
        printf("Yes,it's a palindrome!!!");
    }
    else {
        printf("No,it's not a palindrome!!!");
    }

    return 0;
}
