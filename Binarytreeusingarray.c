#include <stdio.h>
#define MAXSIZE 20
#define left 2*j
#define right 2*j+1

int Binary_Tree[MAXSIZE],j=1,num,num1;
int left_element,right_element,n,count=0,count1=0;
int root,parent,pos,left_child,right_child;

void leftnode(int left_element){
     if(left_element==0){
        printf("Inside func %d",j);
        count=count+3;
        int k=count;
        Binary_Tree[k*2]=0;
        Binary_Tree[k*2+1]=0;
        Binary_Tree[k]=0;
    }
    else if(count!=n && left_element!=0){
    Binary_Tree[left]=left_element;
    count++;
    }
    else{printf("\nCannot be added\n");}
}

void rightnode(int right_element){
    if(right_element==0){
        printf("Inside func %d",j);
        count=count+3;
        int k=count;
        Binary_Tree[k*2]=0;
        Binary_Tree[k*2+1]=0;
        Binary_Tree[k]=0;
    }
    else if(count!=n && right_element!=0){
    Binary_Tree[right]=right_element;
    count++;
    }
    else{printf("\nCannot be added\n");}
}

void display(){
    j=1;
    int k=0;
    printf("The Binary tree\n");
    while(count>=0){
        printf("for j=%d\n",j);
        if(Binary_Tree[j]==0){
            count--;
            printf("No node\n");
            j++;
            continue;
            //j++;
            //continue;
        }
    else{
        count--;
            printf("root=%d\n",Binary_Tree[j]);
    }
        if(Binary_Tree[left]==0){
            count--;
        printf("No Left Node\n");   
        }
        else{
            count--;
        printf("Child of %d = %d\n",Binary_Tree[j],Binary_Tree[left]);
        }
        if(Binary_Tree[right]==0){
            count--;
        printf("No right node\n");
        }
        else{
            count--;
        printf("Child of %d = %d\n",Binary_Tree[j],Binary_Tree[right]);
        }
    j++;
    }
}


int main(){
    int k=0;
    printf("enter the number of nodes\n");
    scanf("%d",&n);
    int i=0;
    printf("Enter the root node:\n");
    scanf("%d",&Binary_Tree[j]);
    count++;
    while(count<n){
        k++;
    printf("For i=%d\n",k);
    printf("Enter the left node(if no node, then enter 0)\n");
    scanf("%d",&left_element);
    if(Binary_Tree[j]==0){
        j++;
    }
    leftnode(left_element);
    printf("Enter the right node(if no node, then enter 0)\n");
    scanf("%d",&right_element);
    if(Binary_Tree[j]==0){
        j++;
        }
    rightnode(right_element);
    j++;
    }
    display();

    printf("Enter the pos to find the parent and children");
    scanf("%d",&pos);
    num1=Binary_Tree[pos];
    if(pos%2==0)
    parent=pos/2;
    else{
    parent=(pos-1)/2;
    }
    
 right_child=2*pos+1;
 left_child=2*pos;

    printf("Parent of the given node %d=%d\n",Binary_Tree[pos],Binary_Tree[parent]);
    if(left_child==0){
        printf("No left child\n");
    }
    else
    printf("Left Child== %d\n",Binary_Tree[left_child]);

    if(right_child==0){
        printf("No right child\n");
    }
    else
    printf("right Child== %d",Binary_Tree[right_child]);
    return 0;
}
