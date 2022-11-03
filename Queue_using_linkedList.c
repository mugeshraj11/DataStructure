#include <stdio.h>
#include <stdlib.h>
typedef struct Node* Queue;

struct Node{
    int data;
    struct Node* next;
};
Queue front,rear;
Queue FindPrev(Queue L)
{
    L=L->next;
    while(L->next->next!=NULL){
        L=L->next;
    }
    return L;
}


Queue L,T;
void Enqueue(Queue L,int newdata){
    Queue New=(struct Node*)malloc(sizeof(struct Node));
    if(front==NULL && rear==NULL){
        printf("Inside if");
    New->data=newdata;
    New->next=NULL;
    T->next=New;
    front=New;
    T=T->next;
    }
    else{
          New->data=newdata;
        New->next=NULL;
        T->next=New;
        T=T->next;
        rear=New;

    }
    
}

void Dequeue(){
    if(L->next->next==NULL){
    printf("Queue Underflow");
    }


    L->next=front->next;
    front->next=NULL;
    front=L->next;

}
void display(Queue L){
    //printf("%d",L->next->data);
    L=L->next;
    while(L->next!=NULL){
        printf("%d\n",L->data);
        L=L->next;
        }
        printf("%d",L->data);
       
}
int main(){
    front=malloc(sizeof(struct Node));
    front=NULL;
    rear=malloc(sizeof(struct Node));
    rear=NULL;
    int element,s;
    Queue P,node2;
    L=(Queue)malloc(sizeof(struct Node));
    T=(Queue)malloc(sizeof(struct Node));
    int n=0;
    //List newnode;
    /*newnode=(List)malloc(sizeof(struct Node));
    printf("Enter the data");
    scanf("%d",&newnode->data);
    L->next=newnode;
    L->next->data=newnode->data;*/
    //newnode->next=NULL;
    P=L;
    T=L;
    
    /*do{
        node2=(Queue)malloc(sizeof(struct Node));
       
    
   printf("Enter the data");
   scanf("%d",&node2->data);
      P->next=node2;
      P=P->next;
      P->data=node2->data;
      P->next=NULL;

    printf("Do You want to continue, Y/N");
    scanf("%d",&n);
    }while(n==1);
    //printf("%d",L->next->next->data);*/
    do{
        printf("Enter the data\n");
        scanf("%d",&element);
        Enqueue(L,element);
        printf("Enter 1 to continue");
        scanf("%d",&n);

    }while(n==1);
    display(L);
    printf("\nEnter 1 to insert, and 2 to Dequeue");
    scanf("%d",&s);
    

    switch(s){
        case 1:
        do{
        printf("Enter the element");
        scanf("%d",&element);
        Enqueue(L,element);
        printf("Enter 1 to continue inserting");
        scanf("%d",&n);
        display(L);

        }while(n==1);
        break;

        case 2:
        T=L;
        do{
        printf("After Dequeuing:\n");
        Dequeue();
        display(L);
        printf("\nEnter 1 to continue Dequeuing\n");
        scanf("%d",&n);
        }while(n==1);

    }

    return 0;


}
