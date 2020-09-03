#include <bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    struct Node *next;
};
typedef struct Node *node;

node createNode();
node addNode(node head, int value);
void traverseList(node head);

int main()
{
    node a=NULL;
    a=addNode(a,12);
    a=addNode(a,13);
    a=addNode(a,14);
    a=addNode(a,15);
    a=addNode(a,16);
    //traverseList(a);

    return 0;
}
node createNode()
{
    node temp;
    temp = (node) malloc(sizeof(struct Node));
    if(temp==NULL){
        cout<<"unable to create memory\n";
    }
    temp->next=NULL;
    return temp;
}
node addNode(node head, int value)
{
    node temp,p;// declare two nodes temp and p
    temp = createNode();//createNode will return a new node with data = value and next pointing to NULL.
    temp->value = value; // add element's value to data part of node
    if(head == NULL){
            cout<<"head is null\n";
        head = temp;     //when linked list is empty
    }
    else{
        p  = head;//assign head to p
        while(p->next != NULL){
            p = p->next;//traverse the list until p is the last node.The last node always points to NULL.
            cout<<(p->value)<<" ";
        }
        p->next = temp;//Point the previous last node to the new node created.
    }
    traverseList(head);
    return head;
}

void traverseList(node head)
{
    node temp;

    cout<<"traverse function\n";
    if(head == NULL)
    {
        printf("List is empty.");
        return;
    }

    temp = head;
    while(temp != NULL)
    {
        printf("Value = %d\n", temp->value); // Print data of current node
        temp = temp->next;                 // Move to next node
    }
}

