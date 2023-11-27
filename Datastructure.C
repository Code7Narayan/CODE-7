#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
NODE *start=NULL;

int main()
{
   printf("******Select the deffrunt list operations do you perfom******\n");
	int ch;
	do{
	
	
	printf("\n1)Creat at astart\n2)Creat at end\n3)creat at given location\n4)Delete at start\n5)Delete at End\n6)Delete at given location\n7)Travers\n");
  scanf("%d",&ch);
  switch (ch)
  {
  	case 1:
  	    creatatstart ();
  	    //creatatend();
  	    //creatatgivenlocation();
  	    //travers();
  	    //deleteatstart();
  	    //deleteatend();
  		break;
  	case 2:
  		
	  creatatend();
	    break;
	  
	case 3:
    	creatatgivenlocation();
	    break;
	 
	case 4:
		deleteatstart();
    	break;
	 case 5:
	 	deleteatend();
	 	break;
	 	
	 case 6:
	 	deletatgivenlocation();
	 	break;
	 	
	 case 7:
	 	travers();
	    break;	
	 case 8:
	 	printf("END THE LIST OPRTATIONS\n");
	 	break;
	       
  		
  }
  }
  while(ch!=8);
  
}



void creatatstart ()
{
	
	NODE *p;
	p=(NODE*)malloc(sizeof(NODE));
	printf("Enter the data element=\n");
	scanf("%d",&p->data);
	if(start==NULL)
	{
		p->next=NULL;
		start=p;
	}
	else
	{
		p->next=start;
		start=p;
	}
}


void travers()
{
	NODE *q;
	
	if(start==NULL)
	{
		printf("No data in the list\n");
	}
	else
	{
		q=start;
		while(q!=NULL)
		{
			printf("%d",q->data);
			q=q->next;
		}
		printf("\n");
	}
	}
	


 void creatatend()
 {
 	
 
    NODE *q,*p;
	p=(NODE*)malloc(sizeof(NODE));
	printf("Enter  the data=\n");
	scanf("%d",&p->data);
	
	
		if(start==NULL)
		{
			p->next=NULL;
			start=p;
		}
		else
		{
			q=start;
			while(q->next!=NULL)
			{
				q=q->next;

			}
			
			q->next=p;
			p->next=NULL;
		}
	}
	

void creatatgivenlocation()
 
	{
		
		NODE*p,*q;
		int loc;
		p=(NODE*)malloc(sizeof(NODE));
		
		printf("Enter the data element\n");
	    scanf("%d",&p->data);
		printf("Enter location=\n");
		scanf("%d",&loc);
		
		if(start==NULL)
		{
			if(loc==1)
			{
				p->next=NULL;
				start=p;
			}
			else
			{
				printf("Invalid given Location\n");
				
			}
		}
		else
		{
			if(loc==1)
			{
				p->next=NULL;
				start=p;
			}	
		    else
			{
				q=start;
				int i=1;
				while(i<loc-1 && q!=NULL)
				
				 q=q->next;
				 i++;
				 
			}
			if(q!=NULL)
			{
				p->next=q->next;
				q->next=p;	
			}
			else
			{
				printf("Invalid location \n");
			}
				
		}	
}



void deleteatstart()

{
		NODE*p;
	if(start==NULL)
	{
		printf("Element are not prsent in list\n");
	}
	else
	{
	    p=start;
		start=p->next;
		printf("Starting deleted nod is=%d\n",p->data);
		free(p);
	}
	printf("\n");
	
}



void deleteatend()
{
	NODE*p,*q;

	if(start==NULL)
	{
		printf("Data are not prsent\n");
	}
	else if(start->next==NULL)
	{
		printf("Last deleted element is=%d\n",start->data);
	    free(start);
	    start=NULL;
	}
	

	else
	{
		p=start;
		while(p->next!=NULL)
		{
			q=p;
		    p = p->next;
		
			
		}
			printf("Last deleted element is=%d\n",p->data);
			free(p);
			p->next=NULL;
	}
}




void deletatgivenlocation()
{
	NODE*p,*q;
	int loc;
	int i=1;
	printf("Enter deleting element location\n");
	scanf("%d",&loc);
	if(start==NULL)
	{
		printf("List are empty\n");
		
	}
	else 
	{
		p=start;
		i=1;
		while(i<loc && p!=NULL)
		{
			q=p;
		  p=p->next;
		  
		  i++;
		}
		if(q!=NULL)
		{
	       
	       q->next=p->next;
	       printf("Deleted element of given location is=%d\n",p->data);
	       free(p);
	  	}
	  	else
	  	{
	  		printf("Invalid location\n");
		}
	   
		
	}
	printf("\n");
}
 


