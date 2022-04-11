#include<stdio.h>
#include<malloc.h>
 struct node
{
	int data;
	struct node* next;
};
main()
{
	int i,numnodes,x;
	printf("\n enter the number of num nodes");
	scanf("%d",&numnodes);
	
	struct node* nptr;
	struct node* lptr;
	lptr=NULL;
	for(i=1;i<=numnodes;i++)
	{
		nptr=(struct node*)malloc(sizeof(struct node));
		printf("\n enter the data value ");
		scanf("%d",&x);
		nptr->data=x;
		nptr->next=lptr;
		lptr=nptr;
		
	}
	// traversing the linked list
	
	nptr=lptr;
	while(nptr!=NULL)
	{
		printf("%d\n",nptr->data);
		nptr=nptr->next;
	}
	
	// deletion of a linked list
	nptr=lptr;
	while(lptr!=NULL)
	{
		lptr=lptr->next;
		free(nptr);
		nptr=lptr;
	}
	
	
}
