#include<stdio.h>
void main()
{
    int a[5],c=1,rear=0,front=0,p=5;
    printf("****Queue Menu****");
    printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
    while(c)
    {
        printf("\nEnter Choice:");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            if(rear==p)
            printf("Queue is full");
            else
            {
                printf("\nEnter number:");
                scanf("%d",&a[rear++]);
            }
            break;
        case 2:
                if(front==rear)
                    printf("nQueue is empty");
            else
            {
                printf("\nElement deleted element is: %d",a[front++]);
                p++;
            }
            break;
        case 3:
            if(front==rear)
                printf("\nQueue is empty");
            else{
                printf("\nThe elements in the queue is: ");
                for (int m=0;m<rear;m++)
                {
                    printf("\n");
                    printf("%d",a[m]);
                }
            }
            break;
        case 4:
            exit(0);
        default:
            printf("Entered wrong option!!!!!");
        }
    }
}
