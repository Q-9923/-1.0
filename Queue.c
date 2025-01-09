#include"Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;

}
void QueueDestory(Queue* pq)
{
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* tmp = pq->head->next;
		free(cur);
		cur = tmp;
	}
	pq->head = pq->tail = NULL;
}
void QueuePush(Queue* pq, QDataType x)//尾入
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc开辟失败\n");
		exit(-1);

	}
	newnode->next = NULL;
	newnode->data = x;
	if (pq->head == NULL && pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}
void QueuePop(Queue* pq)//头出
{
	assert(pq);
	assert(pq->tail);
	if (pq->head->next == NULL)
	{
		printf("删掉了%d \n", pq->head->data);
		free(pq->head);
		free(pq->tail);
		pq->head = NULL;
		pq->tail = NULL;
	}
	else
	{
		printf("删掉了%d \n", pq->head->data);
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	
}

QDataType QueueFront(Queue* pq)//取队头数据
{
	assert(pq);
	assert(pq->head);
	//printf("目前的头数据是%d ", pq->head->data);
	return pq->head->data;
}
QDataType QueueBack(Queue* pq)//取队尾数据
{
	QNode* cur = pq->head;
	QNode* last = pq->head;
	while (cur->next)
	{
		last = cur;
		cur = cur->next;
	}
	return cur->data;
}
int QueueSize(Queue* pq)//个数
{
	int size = 0;
	QNode* cur = pq->head;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}
bool QueueEmpty(Queue* pq)//判断是否为空
{
	assert(pq);
	return pq->head == NULL;
}