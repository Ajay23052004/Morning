#include<stdio.h>
#define size 5
int top = -1;
int arr[size];
void push(int val){
        if(top==size-1){
            printf("Stack is Overflow!!");
        }
        else{
            top=top+1;
            arr[top] = val;
        }
}

void pop(){
    if(top == -1){
        printf("stack is underflow \n");
    }
    else{
        printf("poped element is %d\n",arr[top]);
        top=top-1;
    }
}
void peek(){
    printf("Pointer pointed at value: %d \n",arr[top]);
}

int main(){
    int n;
    int val;
    // printf("Enter Size of Stack:");
    // scanf("%d",&size);
    l1:
     printf("----------------MENU------------\n");
     printf("1 => push \n");
     printf("2 => pop\n");
     printf("3 => peek\n");
     printf("4 => Exit\n");
     printf("---------------------------------\n");
     printf("Enter Your Operation:");
     scanf("%d",&n);
    if(n == 1){
       printf("Enter value to push:");
        scanf("%d",&val);
        push(val);
        goto l1;
    }
    else if(n == 2){
        pop();
        goto l1;
    }
    else if(n==3){
        peek();
        goto l1;
    }
    else if(n==4){
       
        goto l2;
    }
    l2:
     return 0;
}