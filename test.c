#include"Queue.h"

int main() 
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q,1);
	QueuePush(&q,2);
	QueuePush(&q,3);
	QueuePush(&q,4);
	QueuePush(&q,5);
	//QueuePop(&q);
	//QueueFront(&q);
	while (!QueueEmpty(&q))
	{
		printf("%d ",QueueFront(&q));
		QueuePop(&q);
	}
	printf("\n");
	QueueDestory(&q);
	return 0;
}