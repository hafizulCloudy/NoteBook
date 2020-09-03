#include <bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    struct Node *next;
};
typedef struct Node *node;

node createNode();
node push(node head, int value);
node pop(node head);
void display(node head);

int main()
{
    node stck=NULL;
    int a,b,c,option,choice;
    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("------------------------------------------\n");

        printf ("Enter your choice\n");
        scanf  ("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter your push vlaue : ");
                scanf("%d",&a);
                stck=push(stck,a);
                break;
            case 2:
                stck=pop(stck);

                break;
            case 3:
                display(stck);
                break;
        }

        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &option);
    }

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
node push(node head, int value)
{
    node temp,p;// declare two nodes temp and p
    temp = createNode();//createNode will return a new node with data = value and next pointing to NULL.
    temp->value = value; // add element's value to data part of node
    if(head == NULL){
        cout<<"head is null\n";
        head = temp;     //when linked list is empty
    }
    else{
        temp->next=head;
    }
    head=temp;
    //traverseList(head);
    return head;
}
node pop(node head)
{
    int a;
    if(head==NULL){
        cout<<"stack is empty \n";
    }else{
        node temp=head;
        cout<<temp->value<<endl;
        head=temp->next;
        free(temp);
    }
    return head;
}
void display(node head)
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


