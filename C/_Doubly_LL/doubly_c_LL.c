//doubly circular linked list

#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *node;
};

struct node *head=NULL;

int countnode(){
    struct node *temp=head;
    int count=0;
    while(temp->next != head){
        count++;
        temp=temp->next;
    }
    return count;
}

struct node* createnode(){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    printf("enter data:\n");
    scanf("%d",&newnode->data);

    newnode->next=NULL;
    return newnode;
}
void addnode(){
    struct node *newnode=createnode();
    if (head == NULL){
        head=newnode;
        head->next=head;
        head->prev=head;
    }else{
        head->prev->next=newnode;
        newnode->prev=head->prev;
        newnode->next=head;
        head->prev=newnode;
    }
}

void addfirst(){
    struct node *newnode = createnode();
    if (head == NULL){
        head=newnode;
        head->prev=head;
        head->next=head;
    }else{
        newnode->next=head;
        newnode->prev=head->prev;
        head->prev=newnode;
        head=newnode;
        head->prev->next=head;

    }
}

void main(){
    choice;
    do{
        printf("1.addnode\n");
        printf("2.addfirst\n");
        printf("3.addAtPos\n");
        printf("4.delLast\n");
        printf("5.delFirst\n");
        printf("6.delAtPos\n");
        printf("7.printDCLL\n");

        int ch;
        printf("enter your choice\n");
        scanf("%d\n",&ch);
        switch(ch){
            case 1: 
                addNode(); 
                printDCLL();
                break;
            case 2: 
                addfirst(); 
                printDCLL();
                break;
            case 3: 
                {
                    int pos;
                    printf("pos to add node\n");
                    scanf("%d\n",&pos);
                    addAtPos(pos);
                    printDCLL();
                }
                break;
            case 4: 
                delLast(); 
                printDCLL();
                break;  
            case 5:
                delFirst();
                printDCLL();
                break; 
            case 6: 
                {
                    int pos;
                    printf("pos to add node\n");
                    scanf("%d\n",&pos);
                    delAtPos(pos);
                    printDCLL();
                }
                break;
            case 7:
                printDCLL();
                break;
            default:
            printf("wrong choice\n");
            break;

        }
        getchr();
        printf("do you want to continue?\n");
        scanf("%c",&choice");       
    }while(choice == 'y' || choice == 'Y');
}