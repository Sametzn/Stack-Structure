#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
int array[SIZE], top = -1;

void push(int add) {
    if (top + 1 == SIZE) {
        printf("Stack is full");
    } else {
        top = top + 1;
        array[top] = add;
    }
}

void screenclear() {
    system("cls");
}

void pop() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else
        top = top - 1;
}

void listing() {
    if (top != -1) {
        for (int i = 0; i < top + 1; ++i) {
            printf("%d ", array[i]);
        }
        printf("  TOP==> %d\n", array[top]);
    } else
        printf("Stack is empty\n");
}

void peek() {
    if (top != -1) {
        printf("Peek==>%d\n", array[top]);
    } else printf("Peek==>%d\n", top);

}

void Clear() {
    while (top > -1) {
        top--;
        if (top == -1) {
            printf("Stack is empty\n");
        }
    }
}

int main() {
    int number = 0, add;
    while (number != 6) {
        printf("*****MENU******\n");
        printf("1)PUSH\n");
        printf("2)POP\n");
        printf("3)PEEK\n");
        printf("4)LISTING\n");
        printf("5)CLEAR\n");
        printf("6)EXIT\n");
        printf("Please make your choise:");
        scanf("%d", &number);
        screenclear();

        switch (number) {
            case 1:
                printf("Enter the number to add\n");
                scanf("%d", &add);
                push(add);
                system("cls");
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                listing();
                break;
            case 5:
                Clear();
                break;
            case 6:
                printf("Thank you, See you again:)))");
                break;
            default:
                printf("You made the wrong choice\n");
                break;
        }
    }
}
