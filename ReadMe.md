

1.	ch1�ѿ�

2.	Main2-1.c  ���Ա�Ķ�̬����˳��洢�ṹ
	Main2-2.c  ���Ա�ĵ�����洢�ṹ
	Main2-4.c   ���Ա�ĵ�ѭ������洢�ṹ
	�ٿ�Main2-5.c

3. 	bo3-1.c  	ջ��˳��洢�ṹ
	typedef struct SqStack
	{
		SElemType *base; 
		SElemType *top; 
		int stacksize; 
	}SqStack;

	bo3-2.c		���е���ʽ�洢�ṹ
		typedef struct QNode
		{
			QElemType data;
			struct QNode *next;
		}QNode,*QueuePtr;

		typedef struct
		{
			QueuePtr front,rear; /* ��ͷ����βָ�� */
		}LinkQueue;

	bo3-3.c		���е�ѭ���洢�ṹ��˳��洢��
		typedef struct
		{
			QElemType *base; 
			int front;
			int rear; 
		}SqQueue;

	bo3-4.c		���е�˳��洢�ṹ����ѭ����
		typedef struct
		{
			QElemType *base; 
			int front;
			int rear; 
		}SqQueue;

	bo3-5.c    ջ����ʽ�洢��������൱�������е���ͷ��������
				����ͷɾ�����ݡ�

4.	bo4-1.c 	���ö���˳��洢�ṹ
				��һλ����Ϊ���ݵĳ���










