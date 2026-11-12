#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{

int m1,m2,m3,m4,m5, total;
float avg;

char name[30];

if (argc!=7)
{
   printf("usage: .\a.out name m1 m2 m3 m4 m5 \n");
   return 0;
}

strcpy(name,argv[1]);

m1 = atoi(argv[2]);
m2 = atoi(argv[3]);
m3 = atoi(argv[4]);
m4 = atoi(argv[5]);
m5 = atoi(argv[6]);

total=m1+m2+m3+m4+m5;
avg=total/5.0;

printf("\n-----------STUDENT REPORT-----------\n");
printf("\nSTUDENT NAME :%s",name);
printf("\nMARK 1 :%d",m1);
printf("\nMARK 2 :%d",m2);
printf("\nMARK 3 :%d",m3);
printf("\nMARK 4 :%d",m4);
printf("\nMARK 5 :%d",m5);
printf("\nTOTAL MARK :%d ",total);
printf("\nAVERAGE MARK :%f ",avg);
if(m1<35||m2<35||m3<35||m4<35||m5<35)
{
printf("\nRESULT : FAILED");
}
else
{
printf("\nRESULT : PASSED");

if(avg>=90)

printf("\nGRADE : A+");

else if(avg>=80)

printf("\nGRADE : A");

else if(avg>=70)

printf("\nGRADE : B");

else if (avg>=60)

printf("\nGRADE : C");

else

printf("\nGRADE : D");

}
return 0;
}