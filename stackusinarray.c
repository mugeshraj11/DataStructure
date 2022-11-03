#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100


void push(){
    if(top==MAX_SIZE){
        printf("Overflow!!!\n");
    }
    else{
        top=top+1;
        S[top]=element;
    }
    return NULL;
}
int main(){
    int S[MAX_SIZE];
    int top=-1;
    printf("Enter 1 to push\n Enter 2 to pop\n");
    scanf("%d",&s);


    switch(s){
        case 1:
        push()

        case 2:
        pop();
    }






    return 0;
}