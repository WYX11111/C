#include <stdio.h>
#include <io.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int M;
char a1[] = "import serial";
char a2[] = "import time";
char b[] = "ser = serial.Serial('/dev/ttyAMA0', 115200, timeout=1)";
char c[] = "print ser.isOpen()";
char d[] = "words";
char ee[] = "=\"#21P1500";
char ff[] = "\\n\\r\"";
char e[100];
char f[100];
char g[] = "while (1):";
char h[] = "ser.write(words";
char ii[] = "time.sleep(";

int main()
{
	char str[800][800];
	char nu[800][5];
	int num[800];
	int n, i, j, k;

	FILE *fp;

    //文件存储信息结构体 
    struct _finddata_t fileinfo;
    //保存文件句柄 
    long fHandle;
    //文件数记录器
    int ij = 0;

	scanf("%d",&n);

    if( (fHandle=_findfirst( "./data/*.txt", &fileinfo )) == -1L ) 
    {
        printf( "当前目录下没有txt文件\n");
        return 0;
    }
    else{
        do{
            ij ++;
			memset(e,0,sizeof(e));
			e[0] = '.';
			e[1] = '/';
			e[2] = 'd';
			e[3] = 'a';
			e[4] = 't';
			e[5] = 'a';
			e[6] = '/';
			e[7] = '\0';
			strcat (e,fileinfo.name);
            printf( "找到文件:%s,文件大小：%d\n",e,fileinfo.size);
			
			fp = fopen(e,"r");

	if (fp == NULL)
	{
		printf("文件不存在!\n");
		exit(0);
	}
	
	for(i = 0; i < 400; i++)
	{
		fscanf(fp,"%s",&str[i]);
		if(str[i][0] != '#')
			break;
	}
    
	M = i;

	fclose(fp);

	for(i = 0; i < M; i++)
	{
		for(j = 0; str[i][j] != 'T'; j++);
		j++;
		for(k = 0; str[i][j] != '\0'; j++,k++)
			nu[i][k] = str[i][j];
		nu[i][k] = '\0';
	}
	
	for(i = 0; i < M; i++)
	{
		num[i] = atoi(nu[i]);
		num[i] = num[i]*n/1000;
	}

	fclose(fp);

	//输出数据
	memset(f,0,sizeof(f));
			f[0] = '.';
			f[1] = '/';
			f[2] = 'o';
			f[3] = 'u';
			f[4] = 't';
			f[5] = 'p';
			f[6] = 'u';
			f[7] = 't';
			f[8] = '/';
			f[9] = '\0';
			strcat (f,fileinfo.name);
	fp = fopen(f,"w");
	if (fp == NULL)
	{
		printf("文件不存在!\n");
		exit(0);
	}
	
	fprintf(fp,"%s",a1);
	fprintf(fp,"\n");
	fprintf(fp,"%s",a2);
	fprintf(fp,"\n");
	fprintf(fp,"\n");
	fprintf(fp,"%s\n",b);
	fprintf(fp,"%s\n",c);

	for (i = 0;i < M; i++)
	{
		fprintf(fp,"%s",d);
		fprintf(fp,"%d",i+1);
		fprintf(fp,"%s",ee);
		for(j = 0; str[i][j] != 'T'; j++)
			fprintf(fp,"%c",str[i][j]);
		fprintf(fp,"%c",str[i][j]);
		fprintf(fp,"%d",num[i]);
		fprintf(fp,"%s\n",ff);
	}

	fprintf(fp,"\n%s",g);

	for (i = 0;i < M; i++)
	{
		fprintf(fp,"\n\t%s",h);
		fprintf(fp,"%d)",i+1);
		fprintf(fp,"\n\t");
		fprintf(fp,"%s",ii);
		fprintf(fp,"%.3lf)",num[i]/1000.0);
	}

	fprintf(fp,"\n\n\tendTime = time.time()");
	fprintf(fp,"\nser.close()");

	fclose(fp);

        }while( _findnext(fHandle,&fileinfo)==0);
    }
    //关闭文件 
    _findclose( fHandle );

    printf("文件数量：%d\n",ij);

    return 0;
}