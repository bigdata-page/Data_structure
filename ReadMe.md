

1.	ch1已看

2.	Main2-1.c  线性表的动态分配顺序存储结构
	Main2-2.c  线性表的单链表存储结构
	Main2-4.c   线性表的单循环链表存储结构
	再看Main2-5.c

3. 	bo3-1.c  	栈的顺序存储结构
	typedef struct SqStack
	{
		SElemType *base; 
		SElemType *top; 
		int stacksize; 
	}SqStack;

	bo3-2.c		队列的链式存储结构
		typedef struct QNode
		{
			QElemType data;
			struct QNode *next;
		}QNode,*QueuePtr;

		typedef struct
		{
			QueuePtr front,rear; /* 队头、队尾指针 */
		}LinkQueue;

	bo3-3.c		队列的循环存储结构（顺序存储）
		typedef struct
		{
			QElemType *base; 
			int front;
			int rear; 
		}SqQueue;

	bo3-4.c		队列的顺序存储结构（非循环）
		typedef struct
		{
			QElemType *base; 
			int front;
			int rear; 
		}SqQueue;

	bo3-5.c    栈的链式存储，这个就相当于链表中的在头插入数据
				和在头删除数据。

4.	bo4-1.c 	采用定长顺序存储结构
				第一位总是为数据的长度










