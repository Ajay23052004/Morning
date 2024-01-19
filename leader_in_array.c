#include<stdio.h>

int main(){
    int max=0,n ,count=0;
    printf("Enter Your Array Size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Your Array Elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);    
    }

    for(int i=n-1;i>=0;i--){
        if(arr[i]>max){
            count++;
            max = arr[i];
            printf("Leader %d is %d \n",count,max);
            
        }
        else{
            continue;
        }
    }

}