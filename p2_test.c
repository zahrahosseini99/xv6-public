#include "types.h"
#include "stat.h"
#include "user.h"



int main(void)
{
		set_priority(200);
	int _pid = fork();

	printf(1," pid= %d \n",_pid);
	if( _pid == 0)
	{
		int  _pid1 = fork();
			printf(1," pid1= %d \n",_pid1);

		if( _pid1 == 0)
		{
	int  _pid2 = fork();
	if(_pid2==0)
	{
		set_priority(20);
		sleep(90);
		int j = 0;
		for (int i = 0; i < 500000000; i++)
		{
		 j++;
		}
		exit();
	}
			else{
				set_priority(50);
				sleep(90);
				int j = 0;
				for (int i = 0; i < 500000000; i++)
				{
				 j++;
				}
				exit();
			}
			}
			else{
				set_priority(90);
				sleep(100);
				int j = 0;
				for (int i = 0; i < 500000000; i++)
				{
				 j++;
				}
				exit();
			}

		}
		else
		{
			sleep(100);
			printf(1,"waiting for child of this proc \n");
			ps();
			exit();

		}

	return 0;
	}
