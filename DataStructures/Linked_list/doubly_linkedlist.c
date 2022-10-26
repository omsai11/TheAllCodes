//Implementing doublelink list

#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list *next;
	struct list *prev;
	};
struct list *top=NULL;
struct list *rear=NULL;
void create(){
	int val;
	printf("Enter the element:\n");
	scanf("%d",&val);
	
	struct list *p=(struct list*)malloc(sizeof(struct list));
	if(top==NULL)
		{
		p->data=val;
		p->next=top;
		p->prev=rear;
		top=p;
		rear=p;
		}
	else
		{
		p->data=val;
		p->next=top;
		top->prev=p;
		top=p;
		}
	}

void deletelast(){
	struct list *ptr=top;
	printf("Deleted element is: %d\n",top->data);
	top=top->next;
	top->prev=NULL;
	free(ptr);
	}
	
void deletefirst(){
	struct list *ptr1=rear;
	printf("Deleted element is: %d\n",rear->data);
	rear=rear->prev;
	rear->next=NULL;
	free(ptr1);
	}
	
void displayfirst(){
	struct list *ptr2=top;
	while(ptr2!=NULL){
		printf("--<%d",ptr2->data);
		ptr2=ptr2->next;
		}
	printf("\n");
	}
void displaylast(){
	struct list *ptr3=rear;
	while(ptr3!=NULL){
		printf("-->%d",ptr3->data);
		ptr3=ptr3->prev;
		}
	printf("\n");
	}
void middle(){
	struct list *m=top;
	int mm;
	printf("Enter position:\n");
	scanf("%d",&mm);
if(mm==rear->data)
mm=rear->prev->data;
	while(m->data!=mm){
		m=m->next;}
		
	struct list *p=(struct list*)malloc(sizeof(struct list));
	printf("Enter value;\n");
	scanf("%d",&p->data);
	p->next=m->next;
	m->next=p;
	p->prev=m;
	p->next->prev=p;
	}
	
void main()
{
 int o;
 while(1)
 {
  printf("1 for create element\t");
  printf("2 for deletefirst element\t"); 
  printf("3 for deletelast element\t");
  printf("4 for displaylast element\t");
  printf("5 for displayfirst element\t");
  printf("6 for addatmiddle element\n");
  printf("7 exit\n");
  printf("enter your choice:");
  scanf("%d",&o);
  
  switch(o)
  {
  case 1:
  create();
  break;
  
  case 2:
  deletefirst();
  break;
  
  case 3:
  deletelast();
  break;
  
  case 4:
  displayfirst();
  break;
  case 5:
  displaylast();
  break;

  case 6: middle(); break;

  case 7:
  exit(0);
  
  default:
  break;
   
  }//end of switch
  }//end of while
}//end of main