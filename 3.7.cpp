// 3.7 showf_pt.c -- �����ַ�ʽ��ʾ����ֵ

#include <stdio.h>
int main(void)
{
	float about = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	printf("%f can be written %e\n", about, about);
	printf("%f can be written %e\n", abet, abet);
	printf("%f can be written %e\n", dip, dip);
	return 0;
}
