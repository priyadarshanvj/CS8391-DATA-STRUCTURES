#include<stdio.h>
int graph[10][10],visited[10],n;
void depth_first_traversal(int i)
{
    int j;
        printf("\n%d",i);
        visited[i]=1;

        for(j=0;j<n;j++)
            if(!visited[j]&&graph[i][j]==1)
            depth_first_traversal(j);
}
void main()
{
    int i,j;
    printf("Enter number of vertices:");

	scanf("%d",&n);
	printf("\nEnter adjecency matrix of the graph:");

	for(i=0;i<n;i++)
       for(j=0;j<n;j++)
			scanf("%d",&graph[i][j]);


   for(i=0;i<n;i++)
        visited[i]=0;

    depth_first_traversal(0);
}


