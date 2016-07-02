#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
Insert(int x)
{
    struct Node* temp=(int*)malloc(sizeof(struct Node*));
    temp->data=x;
    temp->next=head;
    head=temp;
}
Print()
{
    struct Node* temp=head;
    printf("List is:");
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        
    }
    printf("\n");
}
int main()
{
    head = NULL;
    
    int n,i,x;
    printf("How many nos., do u want to insert:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter the list:\n");
        scanf("%d",&x);
       
        Insert(x);
        Print();
    }
    return 0;
}
