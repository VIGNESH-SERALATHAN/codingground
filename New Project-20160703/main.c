#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head ;
void Print()
{
   struct Node* temp=head;
    while (temp!=NULL)
    {
        printf("List is: %d ",temp->data);
        temp=temp->next;
    }
}
void Insert(int data, int n)
{
   struct Node* temp1=malloc(sizeof(struct Node));
    temp1->data=data;
    temp1->next=NULL;
    
    if (n==1)
    
    {
        
        temp1->next=head;
        head=temp1;
        return;
    }
   struct Node* temp2=head;
   for(int i=0;i<=n-2;i++)
        {
            temp2=temp2->next;
        }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
int main()
{
    head=NULL;
    Insert(2,1);
    Insert(4,2);
    Insert(8,3);
    Insert(9,1);
    Print();
}