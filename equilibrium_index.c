// Test case -7,1,

#include<stdio.h>
int main(){
    int n,lsum=0,rsum=0,count=0;
    printf("Enter Array Size:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        //left sum
        if(i<0){
            rsum=0;
        }else{
            for(int j=i;j>=0;j--){
            lsum= lsum+arr[j];
        }
        }
        

        // Right Sum
        for(int k=i+1;k<n;k++){
            rsum=rsum+arr[k];
        }
        if(lsum==rsum){
            printf("Equilibrium Index is:%d\n",i);
            count++;
            break;
        }
        else{
            // printf("%d is not Equilibrium Index.\n",i);
            continue;

        }
    }    


return 0;
}