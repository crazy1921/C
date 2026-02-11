#include<stdio.h>
#include<conio.h> 
#include<stdlib.h> 
#define MAX 5
typedef struct { 
int front, rear; 
int arr[MAX]; 
}CircularQueue; 
void initQueue(CircularQueue *q) { 
q->front = -1; 
q->rear = -1; 
} 
int isFull(CircularQueue *q) { 
return ((q->rear + 1) % MAX == q->front); 
} 
int isEmpty(CircularQueue *q) { 
return (q->front == -1); 
} 
void enqueue(CircularQueue *q, int value) { 
if (isFull(q)) { 
printf("Queue is full. Cannot enqueue %d\n", value); 
} else { 
if (q->front == -1) { 
q->front = 0; 
} 
q->rear = (q->rear + 1) % MAX; 
q->arr[q->rear] = value; 
printf("%d enqueued to queue\n", value); 
} 
} 
int dequeue(CircularQueue *q) { 
if (isEmpty(q)) { 
printf("Queue is empty. Cannot dequeue\n"); 
return -1; 
} else { 
int dequeuedValue = q->arr[q->front]; 
if (q->front == q->rear) { 
q->front = q->rear = -1; 
} else { 
q->front = (q->front + 1) % MAX; 
} 
return dequeuedValue; 
} 
} 
void display(CircularQueue *q) { 
int i;
if (isEmpty(q)) { 
printf("Queue is empty\n"); 
} else { 
printf("Queue elements: "); 
i = q->front; 
while (i != q->rear) { 
printf("%d ", q->arr[i]); 
i = (i + 1) % MAX; 
} 
printf("%d\n", q->arr[q->rear]);
} 
} 
int main() { 
CircularQueue q; 
initQueue(&q); 
enqueue(&q, 10); 
enqueue(&q, 20); 
enqueue(&q, 30); 
enqueue(&q, 40); 
enqueue(&q, 50); 
enqueue(&q, 60);
display(&q); 
printf("Dequeued: %d\n", dequeue(&q)); 
printf("Dequeued: %d\n", dequeue(&q)); 
enqueue(&q, 60);
enqueue(&q, 70); 
display(&q);
getch(); 
return 0; 
}