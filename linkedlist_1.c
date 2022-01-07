#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
}
struct node * InsertatFirst(struct node *head,int data)
{
    struct node *ptr ;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;

    return ptr;

}
    int main()
    {

        struct node *head;
        struct node *first;
        struct node *second;
        struct node *third;
        struct node *fourth;
        struct node *fifth;

        head = (struct node *)malloc(sizeof(struct node));
        first = (struct node *)malloc(sizeof(struct node));
        second = (struct node *)malloc(sizeof(struct node));
        third = (struct node *)malloc(sizeof(struct node));
        fourth = (struct node *)malloc(sizeof(struct node));
        fifth = (struct node *)malloc(sizeof(struct node));

        head->data = 10;
        head->next = first;
        first->data = 20;
        first->next = second;
        second->data = 30;
        second->next = third;
        third->data = 40;
        third->next = fourth;
        fourth->data = 50;
        fourth->next = fifth;
        fifth->data = 60;
        fifth->next = NULL;
        printf("LinkedList : ");
        traverse(head);
        printf("\nAfter insertion :");
        head = InsertatFirst(head ,5 );
        traverse(head);

        return 0;
    }