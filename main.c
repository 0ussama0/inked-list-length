#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
void count_of_nodes(struct Node *head) {
    int count = 0;
    if(head == NULL)
        printf("Linked List is empty");
    struct Node*ptr = NULL;
    ptr = head;
    while(ptr != NULL)
        {

            count++;
            ptr=ptr->next;
        }
        printf("The\tlenth\tof\tthe\tlinked\tlist\tis\t:\t");
        printf("%d", count);
}

int main()
{

struct Node* head = NULL;
struct Node* second = NULL;
struct Node* third = NULL;
struct Node* forth = NULL;

head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
forth = (struct Node*)malloc(sizeof(struct Node));
head->data = 10;
head->next = second;
second->data = 20;
second->next = third;
third->data = 30;
third->next = forth;
forth ->data = 40;
forth->next = NULL;


count_of_nodes(head);
return 0;

  }
