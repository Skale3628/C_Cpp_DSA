#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;

struct node* creatednode(){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:\n");
    scanf("%d",&newnode->daa);
    newnode->next=NULL;
    return newnode;
}
void addnode(){
    struct node *newnode=createnode();
    if (head==NULL){
        head=newnode;
        newnode->next=head;
    }else{
        struct node *temp=head;
        while(temp->next !=head){
            temp=temp-next;
        }
        temp->next=newnode;
        newnode->next=head;
    }
}

void printSCLL(){
    struct node *temp=head;
    while(temp->next !=head){
        printf("%d",temp-data);
        temp=temp->next;

    }

}

void main(){
    int nodecount;
    printf("enter no of nodes:\n");
    scanf("%d",&nodecount);
    for(int i=0;i<=nodecount;i++){
        addnode;
    }
    printSCLL();
}