/* escape.c --使用转义字符*/

#include <stdio.h>
int main(void)

{
	float salary;
	printf("\aEnter your desired monthly salary: ");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);
	printf("\rGee!\n");
	return 0;
}
/* 
************************* 
   
\b ��Ϊһ����λ�ķ���Ҳ�Ǻ����õ�

ˢ����� ��
printf() ����������Ƚ����һ��������������(buffer)���н�洢����
�������е������ٲ��ϲ��ϵر����ݸ���Ļ��
��׼ C �涨�����¼�������½����������ݴ�����Ļ��
����������ʱ���������з���ʱ���Լ���Ҫ�����ʱ��
�����������ݴ��͸���Ļ���ļ���Ϊˢ�»�����(flushing the buffer).
���磬 �����У� ǰ�ɂ�printf()�Z����_�]����M���n�^Ҳ�������Q�з��� ��������o����һ��scanf()�Z��Ҫ��ݔ�롣
��ʹpintf()��ݔ�����ݱ����o��Ļ��

�еİ汾������scanf()�Z�䲻ǿ�Ⱦ��n�^ˢ�£� �ڌ�ʹ����ͣ�����Y�ȴ�����ݔ�룬���]���@ʾ�κ���ʾ��Ϣ�����ֹ�ˆ��}�������ÓQ�з�ˢ�¾��n�^�� ������ʾ

printf("Enter your desired monthly salary: \n");
scanf("%f", &salary);

�������m��ݔ���Z��r������ˢ�¾��n�^�� �Ĵ��a�������������� ���ǣ� ������ǹ���Ƶ���һ����ʼλ�ã� ��ֹ������ʾ�ַ�����ͬһ��ݔ�딵����
��һ����Q�k����ʹ��fflush()���� 
*************************
*/ 
