 //结构要求 

/*
(1) 初始化顺序表L。             
(2) 依次插入a、b、c、d、e元素。  
(3) 输出顺序表L。                
(4) 输出顺序表L的长度。          
(5) 判断顺序表L是否为空          
(6) 输出顺序表L的第3个元素。     
(7) 输出元素a的位置。             
(8) 在第4个元素位置上插入f元素   
(9) 输出顺序表L。                 
(10) 删除顺序表L的第3个元素
(11) 输出顺序表L。       
(12) 释放顺序表L。*/

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h> 

#define false 0
#define true 1
#define MaxSize 50

typedef char ElemType;   //数据元素的类型 
typedef struct{
	ElemType data[MaxSize];
	int length; 
}Sqlist;     //声明顺序表的类型
 
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

//1初始化线性表 
void InitList(Sqlist *L){
	
	L=(Sqlist *)malloc(sizeof(Sqlist));
	L->length =0;
}
//2整体建立线性表 
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



//3销毁线性表
bool DestoryList (Sqlist *L){
	free(L);
	
 } 


//4判断线性表是否为空 
int ListEmpty(Sqlist*L){
	return 1;//(L->length==0);
}

//5求线性表的长度
int ListLength(Sqlist*L){
	return(L->length);
}

//6输出线性表的长度
void DispList(Sqlist *L){
	int i;
	for ( i=0;i<L->length;i++)
	         printf("%c",L->data[i]);
			 printf("\n"); 
 } 

//7按序号求线性表中的元素
bool GetElem(Sqlist*L,int i,ElemType e){
	if(i<1||i>L->length)
	return 0;
    e=L->data[i-1];
    return 1;
} 

//8按元素值查找
int LocalElem(Sqlist *L,ElemType e){
	int i=0;
	while(i<L->length&&L->data[i]!=e)
	    i++;
	if (i>L->length)
	   return 0;
	else
	    return i+1;
} 

//9依次插入数据元素
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

//10删除数据元素
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
 
//主函数
int main()
{
	Sqlist *L;
	char a[5]={0};
    ElemType e;
     
     printf("顺序表的基本运算：\n");
     printf("(1)初始化线性表L");
	    InitSqlist(L);
	    printf("线性表初始化成功... ...\n\n");
	 printf("创建线性表：\n");
	  do {
	  	printf("输入线性表的长度（n>=0）:")
	  }
	    CreateSqlist(L,a,5);
     printf("(2)依次插入a,b,c,d,e元素\n");
	   SqlistInsert(L,1,'a');
	   SqlistInsert(L,2,'b');
	   SqlistInsert(L,3,'c');
	   SqlistInsert(L,4,'d');
	   SqlistInsert(L,5,'e');
	 printf("(3)输出线性表L:");
	    DispList(L);
	 pritnf("(4)输出线性表L的长度%d\n",Sqlistlength(L));
	 printf("(5)判断顺序表L为%s\n",SqlistEmpty(L)?"空":"非空");
	    GetElem(L,3,e);
	 printf("(6)输出线性表L的第3个元素%c\n",e);
	 printf("(7)输出元素a的位置为%d\n",Locate(L,'a'));
	 printf("(8)在第4个元素位置上插入f元素\n");
	    SqlistInsert(L,4,'f');
	 printf("(9)输出线性表L:");
             DispSqlist(L);
	 printf("(10)删除顺序表L的第3个元素\n");
	 	    SqlistDelete(L,3,e);
	 printf("(11)输出线性表L:");
	    DispSqlist(L);
	 printf("(12)释放顺序表L\n");
	    DestorySqlist(L);
	 
	 return 0; 
 } 
