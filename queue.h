#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

typedef struct item
{
    long arrive;
    int processtime;
} Item;

#define MAXQUEUE 10

typedef struct node //结构体
{
    Item item;
    struct node *next;
} Node;

typedef struct queue
{
    Node *front;
    Node *rear;
    int items;
} Queue;

void InitializeQueue(Queue *pq);      //初始化队列
bool QueueIsFull(const Queue *pq);    //检查队列是否已满
bool QueueIsEmpty(const Queue *pq);   //检查队列是否为空
int QueueItemCount(const Queue *pq);  //确定队列中的项数
bool EnQueue(Item item, Queue *pq);   //在队列末尾添加项
bool DeQueue(Item *pitem, Queue *pq); //从队列的开头删除项
void EmptyTheQueue(Queue *pq);        //清空队列；

#endif