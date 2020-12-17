#include<stdio.h>
int main(){
   int i, j, count, temp, number[25];
   printf("Enter total number of elements:");
   scanf("%d",&count);
   printf("Enter elements:\n", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);
    for(i=0;i<count;i++){
      for(j=i+1;j<count;j++){
         if(number[i]>number[j]){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
   }
   printf("Sorted elements:\n");
   for(i=0;i<count;i++)
      printf("%d\t",number[i]);
}
