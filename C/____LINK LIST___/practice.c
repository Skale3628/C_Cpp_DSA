#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

void addNode(int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = head;
    if(head != NULL) {
        head->prev = new_node;
    }
    head = new_node;
}

void addFirst(int new_data) {
    if(head == NULL) {
        addNode(new_data);
    } else {
        struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
        new_node->data = new_data;
        new_node->prev = NULL;
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void addAtPos(int pos, int new_data) {
    if(pos == 0) {
        addFirst(new_data);
    } else {
        struct Node* temp = head;
        int count = 0;
        while(temp != NULL && count < pos - 1) {
            temp = temp->next;
            count++;
        }
        if(temp == NULL) {
            printf("The position is more than the number of nodes\n");
        } else {
            struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
            new_node->data = new_data;
            new_node->prev = temp;
            new_node->next = temp->next;
            if(temp->next != NULL) {
                temp->next->prev = new_node;
            }
            temp->next = new_node;
        }
    }
}

void delLast() {
    if(head == NULL) {
        printf("The list is empty\n");
    } else {
        struct Node* temp = head;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        if(temp->prev != NULL) {
            temp->prev->next = NULL;
        } else {
            head = NULL;
        }
        free(temp);
    }
}

void delFirst() {
    if(head == NULL) {
        printf("The list is empty\n");
    } else {
        struct Node* temp = head;
        head = temp->next;
        if(head != NULL) {
            head->prev = NULL;
        }
        free(temp);
    }
}

void delAtPos(int pos) {
    if(head == NULL) {
        printf("The list is empty\n");
    } else {
        struct Node* temp = head;
        int count = 0;
        while(temp != NULL && count < pos) {
            temp = temp->next;
            count++;
        }
        if(temp == NULL) {
            printf("The position is more than the number of nodes\n");
        } else {
            if(temp->prev != NULL) {
                temp->prev->next = temp->next;
            } else {
                head = temp->next;
            }
            if(temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            free(temp);
        }
    }
}

void printDCLL() {
    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int ch, new_data, pos;
    do {
        printf("1. addNode\n");
        printf("2. addFirst\n");
        printf("3. addAtPos\n");
        printf("4. delLast\n");
        printf("5. delFirst\n");
        printf("6. delAtPos\n");
        printf("7. printDCLL\n");
        printf("0. exit\n");
    }
}