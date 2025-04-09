
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct{
char friends[MAX][50];
int top;
}
stack;
void introduce(stack *s){
 s->top = -1;
}
int isFull(stack *s){
return s->top == MAX-1;
}
int isEmpty(stack *s){
return s->top == -1;
}
void push(stack *s){
 if (isFull(s)){
    printf("Stack is full! Cannot add more friends. \n");
    return;
 }
 s->top++;
 scanf("%s", s->friends[s->top]);
 printf("Pushed: %s\n",s->friends[s->top]);
}
void pop(stack *s){
if(isEmpty(s)){
    printf("Stack is empty! Nothing to remove.\n");
    return;
}
printf("Popped: %s\n", s->friends[s->top]);
s->top--;
}
void peek(stack *s){
if(isEmpty(s)){
    printf("Stack is empty! No friends to peek.\n");
    return;
}
printf("Top friend: %s\n", s->friends[s->top]);
}

int main()
{
    stack s;
    introduce(&s);
    int choice;

    do{
        printf("\n Stack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch(choice){
    case 1:
        push(&s);
        break;
    case 2:
        pop(&s);
        break;
    case 3:
        peek(&s);
        break;
    case 4:
        printf("Exiting program.\n");
        break;
    default:
        printf("Invalid choice. Please try again.\n");
        }
    }while(choice !=4);
    return 0;
}
