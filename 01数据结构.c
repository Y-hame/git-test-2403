#include<stdio.h>


int main()
{
ElementTvpe DeleteQ( Queue PtrQ)
{
      struct Node *FrontCell;
	  ElementType FrontElem;
   if (PtrQ->front == NULL){
   
     printf(�����пա�);
	  return ERROR;}
   FrontCell = PtrQ->front;
  if ( PtrQ->front == PtrQ->rear) //  ������ֻ��һ��Ԫ��*/
       PtrQ->front = PtrQ->rear=NULL: //ɾ���������Ϊ��*/
  else
    PtrQ->front = PtrQ->front->Next;
   FrontElem = FrontCell->Data;
   free( FrontCell );
/* �ͷű�ɾ�����ռ� */
    return FrontElem;	
 } 
}

