#include "types.h"
#include "stat.h"
#include "user.h"



int main(void)
{
	int rc = fork();
	if(rc == 0)
	{
		int rc1 = fork();
		if(rc1 == 0)
		{
			int rc2 = fork();
			if(rc2 == 0)
			{
				set_priority(38);
				sleep(100);
				printf(1,"lanat behet khodaE\n");
				int temp = 0;
				while(temp<1000000000)
					temp++;
				exit();
			}
			else
			{
				set_priority(48);

			sleep(90);

				int temp = 0;
				while(temp<1000000000)
					temp++;
				wait();
				exit();

			}
		}
		else{
			set_priority(78);
			sleep(90);
			int temp = 0;
			while(temp<1000000000)
				temp++;
			wait();
			exit();
		}
	}
	else
	{
		sleep(100);
		printf(1,"waiting for my childs\n");
		ps();
		wait();
	exit();
		
	}
	
	return 0;
}