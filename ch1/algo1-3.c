#include<stdio.h>
void fa(int a) // �ں����иı�a�������������������(���������е�a����ԭֵ)
{
    a++;
printf("�ں���fa�У� a=%d\n",a);
}
void fb(int &a) // ����aΪ�������ͣ��ں����иı�a����ֵ��������������
{
    a++;
    printf("�ں���fb�У� a=%d\n",a);
}

int main()
{
    int n=1;
    printf("�������У����ú���fa֮ǰ�� n=%d\n",n);
    fa(n);
    printf("�������У����ú���fa֮��,���ú���fb֮ǰ�� n=%d\n",n);
    fb(n);
    printf("�������У����ú���fb֮�� n=%d\n",n);
    
    return 0;
}
