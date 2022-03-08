#include<bits/stdc++.h>
using namespace std;

struct node
{

    struct node *prev;
    int data;
    struct node *next;
};

node* insertAtTheBeginning(node *head,int data)
{
    if(head==NULL)
    {
        node *insertNode=(node*)malloc(sizeof(node));

        insertNode->prev=NULL;
        insertNode->data=data;
        insertNode->next=NULL;

        head=insertNode;
    }
    else
    {

        node *insertNode=(node*)malloc(sizeof(node));

        insertNode->prev=NULL;
        insertNode->data=data;
        insertNode->next=head;

        head->prev=insertNode;

        head=insertNode;
    }
    printf("\nNode Inserted at the Beginning\n");
    return head;
}

void displayLinkedList(node *head)
{
    printf("\nInserted Nodes Are: ");
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n\n");
}

node* insertAtTheEnd(node *head,int data)
{
    if(head==NULL)
    {
        node *insertNode=(node*)malloc(sizeof(node));

        insertNode->prev=NULL;
        insertNode->data=data;
        insertNode->next=NULL;

        head=insertNode;
        printf("\nNode Inserted at the EnD\n");

        return head;
    }
    else
    {
        node *newNode = (node*) malloc(sizeof(node));

        newNode->data=data;
        newNode->next = NULL;

        node *tempHead = head;

        while(tempHead->next!=NULL)
        {
            tempHead = tempHead->next;
        }
        tempHead->next = newNode;
        newNode->prev = tempHead;

        printf("\nNode Inserted at the End\n");

        return head;
    }
}

node* deleteElementAtTheBeginning(node *head)
{
    if(head==NULL)
    {
        return head;
    }

    if(head->next==NULL)
    {
        head=NULL;
        free(head);
        return head;
    }

    auto temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);

    return head;
}


node* deleteElementAtTheEnd(node *head)
{
    if(head==NULL)
    {
        return head;
    }

    if(head->next==NULL)
    {
        head=NULL;
        free(head);
        return head;
    }
    auto temp=head;
    while(temp->next!=NULL)temp=temp->next;

    temp->prev->next=NULL;
    free(temp);
    return head;

}

node* deleteMatchedFirstElement(node *head,int datas)
{
    if(head==NULL)return head;

    if(head->data==datas)
    {
        head=head->next;
        head->prev=NULL;
        return head;
    }

    auto temp=head;
    while(temp->data!=datas)temp=temp->next;

    if(temp->next==NULL)
    {
        temp->prev->next=NULL;
        free(temp);
        return head;
    }
    else if( temp->next!=NULL)
    {
        temp->prev->next=temp->next;
        temp->prev=temp;
        free(temp);
        return head;
    }


    return head;
}

node* deleteMatchedAllElement(node *head,int datas)
{
    if(head==NULL)return head;

    while(head->data==datas)
    {
        if(head->data==datas)
        {
            head=head->next;
            head->prev=NULL;
        }
    }

    auto temp=head;

    while(temp->next!=NULL)
    {
        if(temp->next->data==datas && temp->next->next==NULL)
        {
            temp->next=NULL;
            //clear(temp);
        }
        else if(temp->next->data==datas && temp->next->next!=NULL)
        {
            auto x=temp->next->prev;
            temp->next=temp->next->next;
            temp->next->prev=x;
        }
        else
        temp=temp->next;
    }


    return head;

}


int main()
{
    // Create just a pointer. Here 'head' is just a pointer like next and prev.
    node *head;//=(node*)malloc(sizeof (node));

    head=insertAtTheBeginning(head,5);
    head=insertAtTheBeginning(head,54);
    displayLinkedList(head);

    head=insertAtTheEnd(head,4);
    displayLinkedList(head);

    head=deleteElementAtTheBeginning(head);
    displayLinkedList(head);

    head=insertAtTheBeginning(head,54);
    head=deleteElementAtTheEnd(head);
    displayLinkedList(head);

    head=deleteMatchedFirstElement(head,54);
    displayLinkedList(head);

    head=insertAtTheBeginning(head,8);
    head=insertAtTheBeginning(head,2);
    head=insertAtTheBeginning(head,2);
    displayLinkedList(head);



    head=deleteMatchedAllElement(head,2);
    displayLinkedList(head);

    cout<<"\nbreak\n";

    head=insertAtTheBeginning(head,8);
    head=insertAtTheBeginning(head,2);
    head=insertAtTheBeginning(head,2);
     head=insertAtTheBeginning(head,22);
      head=insertAtTheBeginning(head,22);
    displayLinkedList(head);
    head=deleteMatchedAllElement(head,22);
    displayLinkedList(head);

    return 0;
}
