#include<stdio.h>

void main()

{
	short int a, b, c, g, h;
	unsigned short max, min, d, e, f;
	printf("�������������֣�");
	scanf("%d%d%d", &a, &b, &c);  //������������
	//ǿ������ת��
	d = (unsigned short)a;
	e = (unsigned short)b;
	f = (unsigned short)c;
	//�ж����ֵ��Сֵ
	if(d>e)
	{
		max = d;
		min = e;
	}
	else
	{
		max = e;
		min = d;
	}
	if (f>max)
		max = f;
	if (f < min)
		min = f;
	printf("����޷���Ϊ%u,��С�޷�����Ϊ%u\n", max, min);
	//�ж����ֵ������ֵ
	if(max == d)
		g = a;
	else if(max == e)
		g = b;
	else if(max == f)
		g = c;
	//�ж���Сֵ������ֵ
	if(min == d)
		h = a;
	else if(min == e)
		h = b;
	else if(min == f)
		h = c;
	printf("�������ֵ�ֱ�Ϊ%d��%d\n",g, h);

}