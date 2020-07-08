#include "types.h"
#include "stat.h"
#include "user.h"

struct proc_info { 
int pid;
uint memsize;  
};

void swap(struct proc_info *p1,struct proc_info *p2)
{
	struct proc_info temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void bubble_sort(struct proc_info *p,int process_count)
{
	for(int i = 0 ;i<process_count;i++)
	{
		for (int j = 0; j < process_count-1; j++)
		{
			if(p[j].memsize>p[j+1].memsize)
			{
				printf(1,"%d\n",j );
				swap(&p[j],&p[j+1]);
			}
		}
	}
}





int main(void)
{
	int rc = fork();  
	if (rc < 0) {
        // fork failed; exit
        // fprintf(stderr, "fork failed\n");
        exit();
    } else if (rc == 0) {
	    int *temp = malloc(sizeof(int) * 5000000);
	    for (int i = 0; i < 5000000; i++)
	    {
	      *(temp+i) = 999999;
	    }
	    for (int i = 0; i < 10000000000; i++)
	    {
	      continue;
	    }

    } 
    else {
        // parent goes down this path (original process)
        // int wc = wait(NULL);
	    int wc = fork();
	    if (wc == 0)
	    {
	      int *temp2 = malloc(sizeof(int) * 100000);
	      for (int i = 0; i < 100000; i++)
	      {
	        *(temp2+i) = 999999;
	      }
	      for (int i = 0; i < 10000000000; i++)
	      {
	        continue;
	      }
	  	}
	    else if (wc > 0)
    	{
        // printf(1,"hello, I am (pid:%d)\n",(int) getpid());
    	sleep(50);
        int process_count = 0;
		struct proc_info *p=malloc(25*sizeof(struct proc_info));
		procinf(&p,&process_count);
		printf(1,"this is process_count %d\n",process_count); 
		bubble_sort(p,process_count); 
        for(int i =0;i<process_count;i++)
        {
        	printf(1,"this is pid %d and this is memsize %d \n", p[i].pid,p[i].memsize);
        }
		}
    }
    exit();
    return 0;

}  
