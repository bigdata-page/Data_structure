 /* c10-3.h ����������������� */
 #define MAX_NUM_OF_KEY 8 /* �ؼ������������ֵ */
 #define RADIX 10 /* �ؼ��ֻ�������ʱ��ʮ���������Ļ��� */
 #define MAX_SPACE 1000
 typedef struct
 {
   KeysType keys[MAX_NUM_OF_KEY]; /* �ؼ��� */
   InfoType otheritems; /* ���������� */
   int next;
 }SLCell; /* ��̬�����Ľ������ */

 typedef struct
 {
   SLCell r[MAX_SPACE]; /* ��̬�����Ŀ����ÿռ䣬r[0]Ϊͷ��� */
   int keynum; /* ��¼�ĵ�ǰ�ؼ��ָ��� */
   int recnum; /*  ��̬�����ĵ�ǰ���� */
 }SLList; /* ��̬�������� */

 typedef int ArrType[RADIX]; /* ָ���������� */