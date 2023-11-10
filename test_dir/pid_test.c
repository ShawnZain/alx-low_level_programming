#include <stdio.h>
#include <unistd.h>

/**
 * main - tests how to get the PID and PPID
 * Included in this test is to run this program multiple times
 * to see if while the PID will change, if the PPID will
 * stay the same
 *
 * Return: 0
 */

int main(void)
{
	pid_t pro_id, ppro_id;

	pro_id = getpid();
	ppro_id = getppid();

	printf("The process ID is: %u\n", pro_id);
	printf("THe parent process ID is: %u\n", ppro_id);

	return (0);
}
