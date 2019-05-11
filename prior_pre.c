#include<stdio.h>
typedef struct
{	int pid,bt,at,prior,wt,tat,done;
}process;
process p[20];
int n;
void accept()
{
	printf("enter no of processes\n");
	scanf("%d",&n);
	printf("enter bt, at, prior for ");
	for(int i=0;i<n;i++)
	{
		printf(" %d: ",i+1);
		p[i].pid=i+1;
		scanf("%d %d %d",&p[i].bt,&p[i].at,&p[i].prior);
		p[i].wt=0;
		p[i].done=0;
	}
}
void sort(process t[])
{   for(int i=0;i<n-1;i++)
    {	for(int j=0;j<n-i-1;j++)
	{
		if(t[j].at>t[j+1].at)
		{
			process temp=t[j];
			t[j]=t[j+1];
			t[j+1]=temp;
		}
		else if(t[j].at==t[j+1].at  && t[j].prior>t[j+1].prior)
		{
			process temp=t[j];
			t[j]=t[j+1];
			t[j+1]=temp;
		}
	}
    }
    printf("\nProcess\tBT\tAT\tPrior");
    for(int i=0;i<n;i++)
	printf("\nP%d\t%d\t%d\t%d",t[i].pid,t[i].bt,t[i].at,t[i].prior);
}
void preprior()
{
      sort(p);
      int b[10],total=0,maxprior=999;
      float wt=0, tat=0;
      for(int i=0;i<n;i++)
      {
	b[i]=p[i].bt;
	total+=b[i];
      }
      printf("\ntotal time: %d\n",total);
      int i=0;
      for(int ct=0;ct<total;)
      { 
	if(b[i]>0&&p[i].at<=ct)
	{       
		b[i]--;
		printf("%d P%d %d|",ct,p[i].pid,ct+1);
        	ct=ct+1;
	}
        if(b[i]==0)
 	{
		p[i].done=1;
		p[i].wt=ct-p[i].at-p[i].bt;
		p[i].tat=p[i].wt+p[i].bt;
		wt+=p[i].wt;
		tat+=p[i].tat;
	}
	maxprior=999;
	for(int j=0;j<n;j++)
	{
		if(p[j].done!=1)
			if(p[j].at<=ct&&p[j].prior<maxprior)
			{
				maxprior=p[j].prior;
				i=j;
			}
	}
      
      }
      wt/=n;
      tat/=n;
      printf("\navg wt: %f avg tat: %f",wt,tat);
      printf("\nProcess\tWT\tTAT");
      for(int i=0;i<n;i++)
	printf("\nP%d\t%d\t%d",p[i].pid,p[i].wt,p[i].tat);

}
void main()
{
	accept();
	preprior();
}
