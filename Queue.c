#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Queue
{
    int size;
    int roar;
    int *arr;

};
typedef struct Queue Queues;
int IsFull(Queues *ptr)
{
    if(ptr->roar==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
int IsEmpty(Queues *ptr)
{
    if(ptr->roar<0)
    {
        return 1;
    }
    return 0;
}
int Enqueue(Queues *ptr,int element)
{
    if(IsFull(ptr))
    {
        printf("Queue is Full Overflow\n");
    }
    else
    {
        ptr->roar=ptr->roar+1;
        ptr->arr[ptr->roar]=element;
        printf("element enqueued\n");
    };
}
int Dequeue(Queues *ptr)
{
    int dequeued;
    if(IsEmpty(ptr))
    {
        printf("Queue is Empty Underflow\n");
    }
    else
    {
        for(int i=0;i<=ptr->roar;i++)
        {
            ptr->arr[i]=ptr->arr[i+1];
        }
        ptr->roar--;
        printf("element Dequeued\n");
    };
}
int display(Queues *ptr)
{
    for(int i=0;i<=ptr->roar;i++)
    {
        printf("Queue1->%d = %d \n",i+1,ptr->arr[i]);
    };
}
int main(int argc,char *argv[])
{

    Queues *Queue1=(Queues *)malloc(sizeof(Queues));
    Queue1->roar=-1;
    Queue1->size=10;
    Queue1->arr=(int *)malloc(Queue1->size*sizeof(int));
    while(1)
    {
        int ch,item;
        printf("1] Enqueue\n2] Dequeue\n3] Display Queue\n4] Exit From Softwrae\n#bestmodaljustin\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("enter a element : ");
            scanf("%d",&item);
            Enqueue(Queue1,item);
            break;
            case 2:
            Dequeue(Queue1);
            break;
            case 3:
            if(IsEmpty(Queue1))
            {
                printf("Queue is Empty\n");
                break;
            }
            display(Queue1);
            break;
            case 4:
            exit(1);
            break;
            default:
            printf("invalid input\n");

        }
    }
    printf("Queue Program");
    return 0;
};