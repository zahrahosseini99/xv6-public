#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{

	int pid;
int a=0;
int b=0;
//int fuck=0;
	pid = fork();
	if (pid == 0)
  	{
      sleep(40);
  	for(int i=0;i<500;i++)
    {

      printf(1,"%s\n","fuck off");
    }
    exit();
    }
  	else if(pid<0)
 	{
    	exit();
 	}
int  fuck=waitx(&a,&b);
int waitfuck=wait();
 	printf(1, "Wait Time = %d\n Run Time = %d with fuck %d \n waitingFuck time= %d\n pid= %d\n", a, b, fuck,waitfuck,pid);
 	exit();
}
