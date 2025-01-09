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
void QueuePush(Queue* pq, QDataType x)//β��
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc����ʧ��\n");
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
void QueuePop(Queue* pq)//ͷ��
{
	assert(pq);
	assert(pq->tail);
	if (pq->head->next == NULL)
	{
		printf("ɾ����%d \n", pq->head->data);
		free(pq->head);
		free(pq->tail);
		pq->head = NULL;
		pq->tail = NULL;
	}
	else
	{
		printf("ɾ����%d \n", pq->head->data);
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	
}

QDataType QueueFront(Queue* pq)//ȡ��ͷ����
{
	assert(pq);
	assert(pq->head);
	//printf("Ŀǰ��ͷ������%d ", pq->head->data);
	return pq->head->data;
}
QDataType QueueBack(Queue* pq)//ȡ��β����
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
int QueueSize(Queue* pq)//����
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
bool QueueEmpty(Queue* pq)//�ж��Ƿ�Ϊ��
{
	assert(pq);
	return pq->head == NULL;
}