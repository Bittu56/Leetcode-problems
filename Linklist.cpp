#include <iostream>
using namespace std;


struct node
{
    int data;
    struct node* next;
};

struct node *reverse(struct node* head)
{
    struct node *current,*prev,*next;

    prev=NULL;
    current= head;

    while(current != NULL)
    {
        next=current->next;
        current->next =prev;
        prev=current;
        current=next;
    }
      head =prev;
      return head;
}
struct node *insert(struct node *head, int data)
{
   node *temp=new node();
   temp->data=data;
   temp->next =NULL;
   head=temp;
   if(head!=NULL)
   {

       temp->next=head;
       head=temp;
   }
   return head;

};
struct node *print(struct node *head)
{

    struct node* temp;
    temp=head;
    while(temp!=NULL)
    {

        cout<<temp->data;
        temp=temp->next;
    }
};

int main()
{
struct node*  head =NULL;
insert(head,2);
insert(head,4);
insert(head,7);
insert(head,9);
cout<<print(head);

}




