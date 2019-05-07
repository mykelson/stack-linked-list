#include <stdio.h>
#include <cs50.h>

typedef struct _stack
{
    int val;
    struct _stack* next;
}
stack;

stack* create(int n);
stack* push(stack* list, int n);
int pop(stack* llist);

stack* numb;

int main(void)
{
    numb = create(20);
    numb = push(numb, 30);
    numb = push(numb, 49);
    printf("\thello agent %i\n", pop(numb));
    printf("\thello agent %i\n", pop(numb));
}

stack* create(int n)
{
    stack* head = malloc(sizeof(stack));
    if (head != NULL)
    {
        head->val = n;
        head->next = NULL;    
    }
    return head;
}

stack* push(stack* list, int n)
{
    stack* new_node = malloc(sizeof(stack));
    if (new_node != NULL);
    {
        new_node->val = n;
        new_node->next = list;
    }
    return new_node;
}

int pop(stack* llist)
{
    int x = llist->val;
    stack* tmpr = llist->next;
    free(llist);
    *llist = *tmpr;
    return x;
}