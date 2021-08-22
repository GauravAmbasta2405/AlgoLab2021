#include<stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
int *arr;
int n, i;
int randomiser=0;
void generate(int x)
{
 n=x;
 randomiser++;
 srand(n+randomiser);
 free(arr);
 arr=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
  *(arr+i)=rand();
}
void ascend()
{
 int i=0,j=0,k=0,temp;
 for(i=1;i<n;i++)
 {
  k=*(arr+i);
  j=i;
  while(j>0&&*(arr+j-1)>k)
  {
   temp=*(arr+j);
   arr=(arr+j-1);
   *(arr+j-1)=temp;
   j=j-1;    
  }
 }
}
void descend()
{
int i=0,j=0,k=0,temp;
 for(i=1;i<n;i++)
 {
  k=*(arr+i);
  j=i;
  while(j>0&&*(arr+j-1)<k)
  {
   temp=*(arr+j);
   arr=(arr+j-1);
   *(arr+j-1)=temp;
   j=j-1;    
  }
 }
}
void bestcase()
{
 ascend();
 start=clock();
 ascend();
 end=clock();
 cpu_time_used=((double)(end-start)/CLOCKS_PER_SEC);
 printf("%lf",cpu_time_used);
}
void worstcase()
{
 descend();
 start=clock();
 ascend();
 end=clock();
 cpu_time_used=((double)(end-start)/CLOCKS_PER_SEC);
 printf("%lf",cpu_time_used);
}
void avgcase()
{
 start=clock();
 ascend();
 end=clock();
 cpu_time_used=((double)(end-start)/CLOCKS_PER_SEC);
 printf("%lf",cpu_time_used);
}
void totalcase()
{
	int i;
 printf("\nInput\tbest case\tworst case\taverage case\n");
 for(i=5000;i<=50000;i=i+5000)
 {
  generate(i);
  printf("\n%d",i);
  printf("\t");
  bestcase();
  printf("\t");
  worstcase();
  printf("\t");
  avgcase();
  printf("\n");
 }
}
void display()
{
 int i;
 for (i=0;i<n;i++)
  printf("\n%d",*(arr+i));
}
int main()
{
 arr=(int*)malloc(100000000000000*sizeof(int));
 int opt,x;
 printf("Enter number of elements:");
 scanf("%d",&x);
 generate(x);
 menu:
 printf("\n1.Generate 2.Display 3.Sort ascending 4.Sort descending 5.Best case 6.Worst case 7.Average case 8.Total time complexity 9.exit Enter your choice:");
 scanf("%d",&opt);
 switch(opt)
 {
  case 1:
		 printf("Enter the number of elements:");
                 scanf("%d",&x);
                 generate(x);
		 break;
  case 2:
		 display();
		 break;
  case 3:
		 ascend();
		 break;
  case 4:
		 descend();
		 break;
  case 5:
		 bestcase();
		 break;
  case 6:
		 worstcase();
		 break;
  case 7:
		 avgcase();
		 break;
  case 8:
		 totalcase();
		 break;
  case 9:
		 return 0;
		 break;
  default:
		  printf("\nWrong option entered");
		  break;
 }
 goto menu;
}
