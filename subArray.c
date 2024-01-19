#include<stdio.h>
int l=0,r=0;
int main(){

    int n,key=0;
    printf("Enter Size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Array Value:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum = arr[0];
    printf("Enter Key Sum Value:");
    scanf("%d",&key);
  while(l!=n || r!=n){
       if(sum ==key){
        printf("Sum found  Between Range %d and %d.",l,r);
        break;
       }
       else if(sum<key){
        if(r!=n-1){
            r++;
            sum = sum+arr[r];

        }
        else{
            printf("Not FOund !!!!");
            break;
        }
       }
       else{
          if(l!=n-1){

          sum -= arr[l];
          l++;
          }
          else{
            printf("Not FOund!!");
            break;
          }
       }

    }


}