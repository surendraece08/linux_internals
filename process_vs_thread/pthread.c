#include <stdio.h>
#include <pthread.h>

void *myfun(void *ptr)
{
}

int main()
{
	pthread_t tid;
	pthread_create(&tid, NULL, myfun, NULL);

	return 0;
}
