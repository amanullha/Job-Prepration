#include<bits/stdc++.h>
using namespace std;

typedef struct mylist
{
    int data;
    struct mylist *next;
} node;

void insertNodeAtEnd(node *head, int data)
{
    while(head->next!=NULL)head=head->next;

    head->next=(node*)malloc(sizeof(node));

    head->next->data=data;
    head->next->next=NULL;
    printf("\nData inserted At the END!\n");
}

node* insertNodeAtStart(node *head, int data)
{
    node *headFirst=(node*)malloc(sizeof (node));

    headFirst->data=data;
    headFirst->next=head->next;

    head->next=headFirst;
    printf("\nData inserted at the FIRST!\n");

    return head;
}

void DisplayNodes(node *head)
{
    printf("\nInserted nodes are: \n");

    while(head->next!=NULL)
    {
        printf("%d ",head->next->data);
        head=head->next;
    }
}

void DeleteFirstMatchedNode(node *head,int deleteNode)
{
    while(head->next!=NULL)
    {
        if(head->next->data==deleteNode)
        {
            if(head->next->next==NULL)
            {
                head->next=NULL;
                free(head->next);
                return ;
            }
            else
            {
                head->next=head->next->next;
                return;
            }
        }
        head=head->next;
    }
}


void DeleteAllMatchedNodes(node *head,int deleteNode)
{
    while(head->next!=NULL)
    {
        if(head->next->data==deleteNode)
        {
            if(head->next->next==NULL)
            {
                head->next=NULL;
                return ;
            }
            else
            {
                head->next=head->next->next;
            }
        }
        else head=head->next;
    }
}


void DeleteNthPositionNodes(node *head,int position)
{
    if(position==1 && head->next!=NULL)
    {
        head->next=head->next->next;
        return;
    }

    while(head->next!=NULL && position>1)
    {
        head=head->next;
        position--;
    }
    if(head->next==NULL && position>=1)
    {
        printf("\nInvalid position\n");
        return;
    }

    if(head->next->next==NULL)
    {
        head->next=NULL;
        return ;
    }
    else
    {
        head->next=head->next->next;
        return;
    }
}

node* sortNodesIncreasingOrder(node *head)
{
    node *current=head;

    if(head->next==NULL)
    {
        DisplayNodes(head);
        return head;
    }
    else
    {
        while(current->next!=NULL)
        {
            node *temp=current->next->next;

            while(temp!=NULL)
            {
                if(current->next->data > temp->data)
                {
                    int tm=current->next->data;
                    current->next->data=temp->data;
                    temp->data=tm;
                }
                temp=temp->next;
            }

            current=current->next;
        }
    }

  return head;
}


node* sortNodesDecreasingOrder(node *head)
{
    node *current=head;

    if(head->next==NULL)
    {
        DisplayNodes(head);
        return head;
    }
    else
    {
        while(current->next!=NULL)
        {
            node *temp=current->next->next;

            while(temp!=NULL)
            {
                if(current->next->data < temp->data)
                {
                    int tm=current->next->data;
                    current->next->data=temp->data;
                    temp->data=tm;
                }
                temp=temp->next;
            }

            current=current->next;
        }
    }

  return head;
}

int main()
{
    node *head=(node*)malloc(sizeof (node));

    insertNodeAtEnd(head,1);
    DisplayNodes(head);
    insertNodeAtEnd(head,2);
    DisplayNodes(head);

    head=insertNodeAtStart(head,3);
    DisplayNodes(head);

    DisplayNodes(head);

    DeleteAllMatchedNodes(head,22);
    DisplayNodes(head);

    DeleteNthPositionNodes(head,3);
    DisplayNodes(head);

    insertNodeAtEnd(head,5);
    insertNodeAtEnd(head,4);
    DisplayNodes(head);
   // DeleteNthPositionNodes(head,1);
  //  DeleteNthPositionNodes(head,1);
  //  DeleteNthPositionNodes(head,1);
  //  DeleteNthPositionNodes(head,1);
    DisplayNodes(head);


    head=sortNodesIncreasingOrder(head);
    DisplayNodes(head);
    head=sortNodesDecreasingOrder(head);
    DisplayNodes(head);
    DeleteFirstMatchedNode(head,4);
    DisplayNodes(head);


    return 0;
}
