// WAP to convert infix to postfix.
#include<stdio.h>
#include<ctype.h>// alnum()
int top=-1;
char *e;
char arr[100];
void push(char ch ){
arr[top++]= ch;

}
int pop(){
  if(top ==-1){
    return 0;
  }
  else{
    return arr[top--];
  }
}
int priority(char ch){

    if(ch == '('){
        return 0;
    }
    else if(ch =='+' || ch == '-'){
        return 1;
    }
    else if(ch == '*' || ch == '/'){
        return 3;
    }

    return 0;
}
int main(){
    char x;
    e = arr;

   printf("Enter Your Expression Here:");
   scanf("%s",arr);

   printf("%c",e[0]);
//    while(*e != '\0' ){
//     if(isalnum(*e)){
//         printf("%c",*e);
//     }
//     else if(*e =='('){
//         push(*e);
//     }
//     else if(*e == ')'){

//         while((x = pop()) != '(' ){
            
//         }
//    }
//    else {
//     while(priority(arr[top])<= priority(arr[*e])){
//        printf("%c",pop());
//      }

   
//    }

// }
}