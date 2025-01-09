#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
typedef int QDataType;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode; 
typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;
void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
void QueuePush(Queue* pq, QDataType x);//尾入
void QueuePop(Queue* pq);//头出

QDataType QueueFront(Queue* pq);//取对头数据
QDataType QueueBack(Queue* pq);//取队尾数据
int QueueSize(Queue* pq);//个数
bool QueueEmpty(Queue* pq);//判断是否为空