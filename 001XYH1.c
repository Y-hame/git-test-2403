 //�ṹҪ�� 

/*
(1) ��ʼ��˳���L��             
(2) ���β���a��b��c��d��eԪ�ء�  
(3) ���˳���L��                
(4) ���˳���L�ĳ��ȡ�          
(5) �ж�˳���L�Ƿ�Ϊ��          
(6) ���˳���L�ĵ�3��Ԫ�ء�     
(7) ���Ԫ��a��λ�á�             
(8) �ڵ�4��Ԫ��λ���ϲ���fԪ��   
(9) ���˳���L��                 
(10) ɾ��˳���L�ĵ�3��Ԫ��
(11) ���˳���L��       
(12) �ͷ�˳���L��*/

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h> 

#define false 0
#define true 1
#define MaxSize 50

typedef char ElemType;   //����Ԫ�ص����� 
typedef struct{
	ElemType data[MaxSize];
	int length; 
}Sqlist;     //����˳��������
 
/*void InitList(Sqlist*&L);
void Create_SqList(Sqlist*&L,ElemType a[],int n);
void DestoryList (Sqlist * &L);
bool ListEmpty(Sqlist*L);
int ListLength(Sqlist*L);
void DispList(Sqlist*L);
bool GetElem(Sqlist*L,int i,ElemType &e);
int LocalElem(Sqlist*L,ElemType e);
bool ListIntsert(Sqlist*&L,int i,ElemType e);
bool ListDelete(Sqlist*&L,int i,ElemType &e);*/

//1��ʼ�����Ա� 
void InitList(Sqlist *L){
	
	L=(Sqlist *)malloc(sizeof(Sqlist));
	L->length =0;
}
//2���彨�����Ա� 
void Create_Sqlist(Sqlist* L,ElemType a[],int n){
	int i;
	L=(Sqlist *)malloc(sizeof(Sqlist));
	for(i=0;i<n;i++)
		L->data[i]=a[i];
		L->length=n;
} 
void CreatList(Sqlist*&L,ElemType a[],int n){
	int i=0,k=0;
	  L=(Sqlist *)malloc (sizeof(Sqlist));
	while (i<n)
	{
		L->data[k]=a[i];
	    k++,i++;	
	}
	L->length =k
	 
}



//3�������Ա�
bool DestoryList (Sqlist *L){
	free(L);
	
 } 


//4�ж����Ա��Ƿ�Ϊ�� 
int ListEmpty(Sqlist*L){
	return 1;//(L->length==0);
}

//5�����Ա�ĳ���
int ListLength(Sqlist*L){
	return(L->length);
}

//6������Ա�ĳ���
void DispList(Sqlist *L){
	int i;
	for ( i=0;i<L->length;i++)
	         printf("%c",L->data[i]);
			 printf("\n"); 
 } 

//7����������Ա��е�Ԫ��
bool GetElem(Sqlist*L,int i,ElemType e){
	if(i<1||i>L->length)
	return 0;
    e=L->data[i-1];
    return 1;
} 

//8��Ԫ��ֵ����
int LocalElem(Sqlist *L,ElemType e){
	int i=0;
	while(i<L->length&&L->data[i]!=e)
	    i++;
	if (i>L->length)
	   return 0;
	else
	    return i+1;
} 

//9���β�������Ԫ��
bool ListIntsert(Sqlist *L,int i,ElemType e){
	int j;
	if (i<1||i>l->length+1||L->length==MaxSize)
	    return 0;
	    i--;
   for(j=L->length;j>i;j--)
   {
   	     L->data[j]=L->data[j-1];
   	 L->data[i]=e;
   	 L->length++;
   	 return 1;
   }
}

//10ɾ������Ԫ��
bool ListDelete(Sqlist *L,int i,ElemType e){
	int j;
	if(i<1 || i>L->length)
	   return 0;
	 i--;
	 e=L->data[i];
	 for(j=i;j<L->length-1;j++)
	    L->data[j]=L->data[j+1];
	 L->length--;
	 return 1; 
} 
 
//������
int main()
{
	Sqlist *L;
	char a[5]={0};
    ElemType e;
     
     printf("˳���Ļ������㣺\n");
     printf("(1)��ʼ�����Ա�L");
	    InitSqlist(L);
	    printf("���Ա��ʼ���ɹ�... ...\n\n");
	 printf("�������Ա�\n");
	  do {
	  	printf("�������Ա�ĳ��ȣ�n>=0��:")
	  }
	    CreateSqlist(L,a,5);
     printf("(2)���β���a,b,c,d,eԪ��\n");
	   SqlistInsert(L,1,'a');
	   SqlistInsert(L,2,'b');
	   SqlistInsert(L,3,'c');
	   SqlistInsert(L,4,'d');
	   SqlistInsert(L,5,'e');
	 printf("(3)������Ա�L:");
	    DispList(L);
	 pritnf("(4)������Ա�L�ĳ���%d\n",Sqlistlength(L));
	 printf("(5)�ж�˳���LΪ%s\n",SqlistEmpty(L)?"��":"�ǿ�");
	    GetElem(L,3,e);
	 printf("(6)������Ա�L�ĵ�3��Ԫ��%c\n",e);
	 printf("(7)���Ԫ��a��λ��Ϊ%d\n",Locate(L,'a'));
	 printf("(8)�ڵ�4��Ԫ��λ���ϲ���fԪ��\n");
	    SqlistInsert(L,4,'f');
	 printf("(9)������Ա�L:");
             DispSqlist(L);
	 printf("(10)ɾ��˳���L�ĵ�3��Ԫ��\n");
	 	    SqlistDelete(L,3,e);
	 printf("(11)������Ա�L:");
	    DispSqlist(L);
	 printf("(12)�ͷ�˳���L\n");
	    DestorySqlist(L);
	 
	 return 0; 
 } 
