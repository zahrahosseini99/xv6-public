#include "types.h"
#include "stat.h"
#include "user.h"



int main(void)
{
	int rtime = 0;
	int wtime = 0;
	int _pid = fork();

	if (_pid < 0)
	{
        exit();
    }
		else if (_pid == 0)
		 {

	    sleep(50);

	    for (int i = 0; i < 500; i++)
	    {
	      printf(1,"%s\n","RUNNING" );
	    }
	    exit();
    }
    int id =waitx(&wtime,&rtime);
	printf(1," pid= %d  \n rtime= %d  \n  wtime= %d\n",id,rtime,wtime);
	exit();
	return 0;
}
