#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
 
typedef struct stackNode_t {
    int data;
    struct stackNode_t *next;
} StackNode;
 
typedef struct stack_t {
    StackNode *_top;
    unsigned _size;
} Stack;
 
void stack_init(Stack *stack);
bool stack_isEmpty(Stack *stack);
void stack_push(Stack *stack, int value);
void stack_pop(Stack *stack);
int stack_top(Stack *stack);
unsigned stack_size(Stack *stack);
 
void stack_init(Stack *stack)
{
    stack->_size = 0;
    stack->_top = NULL;
}
 
bool stack_isEmpty(Stack *stack) {
    return (stack->_top == NULL);
}
 
void stack_push(Stack *stack, int value)
{
    StackNode *newNode = (StackNode*) malloc(sizeof(StackNode));
    if (newNode) {
        stack->_size++;
        if (stack_isEmpty(stack)) newNode->next = NULL;
        else newNode->next = stack->_top;
 
        newNode->data = value;
        stack->_top = newNode;
    }
}
 
void stack_pop(Stack *stack)
{
    if (!stack_isEmpty(stack)) {
        StackNode *temp = stack->_top;
        stack->_top = stack->_top->next;
        free(temp);
        stack->_size--;
    }
}
 
int stack_top(Stack *stack)
{
    if (!stack_isEmpty(stack))
        return stack->_top->data;
    return 0;
}
 
unsigned stack_size(Stack *stack) {
    return stack->_size;
}
 
int main(int argc, char const *argv[])
{
    Stack myStack;
 
    stack_init(&myStack);
 
    int jumlah, T, n;
 
    scanf("%d", &jumlah);
    for(int i=0; i<jumlah; i++) {
        scanf("%d", &T);
        if(T == 1) {
            scanf("%d", &n);
            stack_push(&myStack, n);
        } else if (T==2) {
            stack_pop(&myStack);
        } else if (T==3) {
            if(!stack_isEmpty(&myStack)) {
                printf("%d\n", stack_top(&myStack));
            } else {
                printf("Empty!\n");
            }
        }
    }
 
    return 0;
}
 
