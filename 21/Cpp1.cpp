#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    char huase[4][10]={"����","����","��Ƭ","÷��"};
	char *dianshu[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	int hua[4] = {0,1,2,3};
	int dian[13] ;//��Ӧ���ַ����鶼������Ӧ����������
	int s1=0,s2=0;//����
	int wanjia1[2][15],wanjia2[2][15];//�������
	int mark[2][15] = {0};//�������ƽ��б��
	int w1,w2;//���û�������бȽ�
	int flag=1;//��־����
	void fapai(int p[2][15],int *i);
	int shuchu(int p[2][15],int *i1,int m[2][15],int *i2 );
	int A(int p[2][15],int *i);
void main()
{

	int d1=0,d2=0;//��¼���1�����ַ��Ƶ���

	int *p = &s1;
	int *q = &s2;
		for( int i =0;i<=12;i++)
		{
			dian[i] = i+1;
			if(i>9)
			dian[i] = 10;
		}
		//�׷���
		printf("��Ϸ��ʼ�����ƿ�ʼ\n");
		srand(time(NULL));
		while((*p)<2)
		{
			fapai(wanjia1,p);
			d1 = A(wanjia1,p);
			printf("�����ڵĵ���Ϊ%d:\n",d1);
		}
		while((*q)<2)
		{
			fapai(wanjia2,q);
			d2 = A(wanjia2,q);
			printf("�����ڵĵ���Ϊ%d:\n",d2);
		}
		while(flag)
		{
			shuchu(wanjia1,p,wanjia2,q);
		}
}

void fapai(int p[2][15],int *i)//ָ�봫�ݣ��ѷ������Ƽ�¼�ڶ�ά������
{
	int m,n;
	while(1)
	{
		m = rand()%4;
		n = rand()%13;
        if(mark[m][n]==0)
        {
            p[0][*i] =  hua[m];
            p[1][*i] = dian[n];
            printf("�����ڵ���Ϊ:%s%s\n",huase[hua[m]],dianshu[dian[n]]);
            mark[m][n] = 1;
            (*i) += 1;
            break;
        }
        else
            continue;
	}
}
//�ж�aΪ���ĺ���
int A(int p[2][15],int *i)//p������ң�i������������
{
	int a = 0;
	int k = 0;
	int n = 0;
	int m ;
	for(m =0;m<(*i);m++)
	{
		a=a+p[1][m]+1;
	if(p[1][m] == 1)
		k = k+1;//k��¼�м���a��
	}
    if((a+10*k) > 21)
	{
		n = a + 10*k -10;
		return (n);
	}
	else
	{
		n = a + 10*k;
		return (n);
	}
	if((a+10*k)>31)
	{
		n =a+10*k-20;
		return (n);
	}
	else
	{
		 n = a+10*k-10;
		 return (n);
	}
	if((a+10*k)>41)
	{
		n=a+10*k-30;
		return (n);
	}
	else
	{
		n = a+10*k-20;
		return (n);
	}
	if((a+10*k)>51)
	{
		n=a+10*k-40;
		return (n);
	}
	else
	{
		n = a+10*k-30;
		return (n);
	}
	//����A��ʼ��ֵΪʮһ�������Ƶĵ���
}
//�˻�������������֡�
int shuchu(int p[2][15],int *i1,int m[2][15],int *i2)
{
	int m1,n,o,j;
	printf("�����1��������ѡ��0��������Ҫ�ƣ�1����Ҫ��\n");
	scanf("%d",&m1);
	if(m1==1)
	{
		fapai(p,i1);
		n = A(p,i1);
		printf("�����ڵĵ���Ϊ:%d\n",n);
		if(n>21)
			printf("�Բ�����������~ ~ ~\n");
		    n =0;
	}
	else
	{
		n = A(p,i1);
		printf("������ѡ��Ҫ�ƣ����ĵ���Ϊ%d\n",n);
	}
	printf("�����2��������ѡ��\n");
	scanf("%d",&o);
	if(o==1)
	{
		fapai(m,i2);
		j = A(m,i2);
		printf("�����ڵĵ���Ϊ%d",j);
			if(j>21)
				printf("�Բ�����������~ ~ ~\n");
			    j =0;
	}
	else
	{
		j = A(m,i2);
		printf("��ѡ�����Ҫ��,�����ڵĵ���Ϊ%d\n",j);
	}
	if(o==0&&m1==0)
	{
		printf("��λ��Ҿ�ѡ���������Ϸ����\n");
		if(n>j)
			printf("Ӯ��Ϊ���1\n");
		else if(j>n)
			printf("Ӯ��Ϊ���2\n");
		else
			printf("���һ��ƽ��\n");
		flag =0;
		return 0;
	}
}
//�߼����֣�Ҫ�Ƶļ������