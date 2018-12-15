#include "singlyLinkedlist.h"
#include <stdio.h>  // printf(), scanf()
#include <stdlib.h>  // malloc(), free()

/*----------------------------------------------------------------------------------
Function name	: createList - ���� ����Ʈ ���� �� �ʱ�ȭ
Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
Returns			: ���� - TRUE / ���� - FALSE
----------------------------------------------------------------------------------*/
int createList(List *lp)
{
	if(lp==NULL){
      return FALSE;
   }   

   lp->head=(Node*)malloc(sizeof(Node));
   if(lp->head==NULL)
      return FALSE;


   lp->tail=(Node*)malloc(sizeof(Node));
   if(lp->tail==NULL){
      free(lp->head);
      return FALSE;
   }   
   
   lp->head->next=lp->tail;
   lp->tail->next=lp->tail;
   lp->size=0;

	return TRUE; // return ���� ������ �����ϼ���.
}

/*----------------------------------------------------------------------------------
Function name	: addFirst - head node �ڿ� node �߰�(���� ����)
Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
				  data - �߰��� ������
Returns			: ���� - TRUE / ���� - FALSE
----------------------------------------------------------------------------------*/
int addFirst(List *lp, int data)
{

	Node *newp;

   if(lp==NULL){
      return 0;
   }   

   newp=(Node*)malloc(sizeof(Node));
   if(newp!=NULL){
   newp->data=data;
   newp->next=lp->head->next;
   lp->head->next=newp;
   ++lp->size;
   return 1;
   }else{
   return 0;
   }

	return 0; // return ���� ������ �����ϼ���.
}
/*----------------------------------------------------------------------------------
Function name	: addLast - tail node �տ� �� node �߰�(���� ����)
Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
				  data - �߰��� ������
Returns			: ���� - TRUE / ���� - FALSE
----------------------------------------------------------------------------------*/
int addLast(List *lp, int data)
{

	Node *newp;
   Node *btp;

   if(lp==NULL){
      return 0;
   }

   newp=(Node*)malloc(sizeof(Node));
   if(newp!=NULL){
   newp->data=data;
   newp->next=lp->tail;
   btp=lp->head;
   while(btp->next!=lp->tail){
      btp=btp->next;
   }

   btp->next=newp;
   ++lp->size;
   return 1;
   }else{
   return 0;
   }

	return 0; // return ���� ������ �����ϼ���.
}

/*----------------------------------------------------------------------------------
Function name	: displayList - ����Ʈ ���� ��� ������ ���
Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
Returns			: ����
----------------------------------------------------------------------------------*/
void displayList(List *lp)
{
	
	Node *curp;

   if(lp==NULL){
      return;
   }

   curp=lp->head->next;
   while(curp != lp->tail){
      printf("%8d\n", curp->data);
      curp=curp->next;
   }

   printf("\n");
   return;

}

/*----------------------------------------------------------------------------------
Function name	: searchNode - data�� ��ġ�ϴ� ù ��° node �˻�
Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
				  data - �˻��� ������
Returns			: ���� - �˻��� ����� �ּ� / ���� - NULL pointer
----------------------------------------------------------------------------------*/
Node * searchNode(List *lp, int data)
{
	// TODO

	return 0; // return ���� ������ �����ϼ���.
}
/*----------------------------------------------------------------------------------
Function name	: removeNode - data�� ��ġ�ϴ� ù ��° ��� ����
Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
data - ������ ������
Returns			: ���� - TRUE / ���� - FALSE
----------------------------------------------------------------------------------*/
int removeNode(List *lp, int data)
{
	// TODO

	return 0; // return ���� ������ �����ϼ���.
}
/*----------------------------------------------------------------------------------
Function name	: sortList - ��� ����(��������)
Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
Returns			: ����
----------------------------------------------------------------------------------*/
void sortList(List *lp)
{
	// TODO

	return;
}
/*----------------------------------------------------------------------------------
Function name	: destroyList - ����Ʈ ���� ��� ���(head, tail ��� ����)�� ����
Parameters		: lp - ����Ʈ ���� ����ü�� �ּ�
Returns			: ����
----------------------------------------------------------------------------------*/
void destroyList(List *lp)
{
	// TODO

	return;
}

