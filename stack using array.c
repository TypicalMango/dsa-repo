#include <stdio.h>
#define MAX 4

int arr[MAX];
int head = -1;


void push(int data)
{
    if (head == MAX - 1)
    {
        printf("stack overflow\n");
        return;
    }
    head++;
    arr[head] = data;
}

int pop()
{
    int value;
    if (head == -1)
    {
        printf("stack is empty\n");
        exit(1);
    }
    value = arr[head];
    head--;
    return value;
}

int peek() {
    return arr[head];
}

int isEmpty() {
    if (head == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull() {
    if (head == MAX -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int size() {
    return head + 1;
}

int main()
{
    int data;
    push(1);
    push(3);
    push(5);
    push(7);
    push(9);
    data = pop();
    printf("%d\n", data);
}
