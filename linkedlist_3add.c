#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

};
void traverse(struct node* n){
    while(n!=NULL)
    {
        printf("%d  ",n->data);
        n=n->next;
    }
}
struct node * add(struct node *ptr,int data)
{
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node)); 
    new->data=data;
    new->next=ptr;
    return new;
}

int main(){
    struct node *head;
    struct node *first;
    struct node *second;

    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));

    head->data=10;
    first->data=20;
    second->data=30;

    head->next=first;
    first->next=second;
    second->next=NULL;
    traverse(head);
    head=add(head,80);
    traverse(head);

    
    return 0;
}