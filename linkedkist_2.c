#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;


};
void traverse(struct node* n)
{
    while(n!=NULL)
    {
        printf("%d  ",n->data);
        n= n->next;
    }
}
void add(struct node** new_head,int new_data)
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=new_data;
    new_node->next=(*new_head);
    *new_head=new_node;
}


int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    second->data=20;
    third->data=30;
    head->next=second;
    second->next=third;
    third->next=NULL;

    
    add(&head,100);
    traverse(head);
    
    return 0;
}