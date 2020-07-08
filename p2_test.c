#include "types.h"
#include "stat.h"
#include "user.h"



int main(void)
{
	int _pid = fork();
	if( _pid == 0)
	{
		int  _pid1 = fork();
		if( _pid1 == 0)
		{
			int  _pid2 = fork();
			if( _pid2 == 0)
			{
				set_priority(30);
				sleep(100);
				int temp = 0;
				while(temp<1000000000)
					temp++;
				exit();
			}
			else
			{
				set_priority(40);

		   	sleep(90);

				int temp = 0;
				while(temp<1000000000)
					temp++;
				wait();
				exit();

			}
		}
		else{
			set_priority(70);
			sleep(100);
			int temp = 0;
			for (int i = 0; i < 1000000000; i++)
	    {
	     temp++;
	    }
			wait();
			exit();
		}
	}
	else
	{
		sleep(100);
		printf(1,"waiting for child of this proc \n");
		ps();
		wait();
	  exit();

	}

	return 0;
}
