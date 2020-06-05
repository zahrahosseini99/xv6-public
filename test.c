#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)
{
	int _pid = fork();
	if (_pid < 0)
  {
        // fork failed; exit
        // fprintf(stderr, "fork failed\n");
        exit();
    }
    else if (_pid == 0)
     {
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

	    int _pid = fork();
	    if (_pid == 0)
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
	    else if (_pid > 0)
    	{
    	sleep(50);
    int process_count = 0;
		struct proc_info *process=malloc(25*sizeof(struct proc_info));
	  int n=	apm(process_count,process);
		printf(1,"process_count: %d\n",n);
	//	sort(process,n);
        for(int i =0;i<n;i++)
        {
        	printf(1,"this is pid: %d \n this is memsize: %d \n", process[i].pid,process[i].memsize);
        }
		}
    }
  
    exit();
    return 0;

}
