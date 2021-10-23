#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int array[MAX],top=-1;
void push();
void pop();
void display();
int main(int arg,char* argv[])
{
	printf("               [*] Stack In C Programing [*]\n");
	int ch;
	printf("\n\n\n[*] 1.Insert at end\n[*]2. Delete at end\n[*]3. Display Stack\n[*]4. exit\n");
	while(1){
		printf("Enter a choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		push();
		break;
		case 2:
		pop();
		break;
		case 3:
		display();
		break;
		case 4:
		exit(0);
		default:
		printf("wrong choice\n");
		
	}
	}
	return 0;
}
void push()
{
	int data;
	if(top==MAX-1)
	{
		printf("Stack is full you cant Insert");
		exit(0);
	}else
	{
		printf("Enter a value to strore in Stack");
		scanf("%d",&data);
		top+=1;
		array[top]=data;
	}
}
void display()
{
	if(top>=0)
	{
		for(int i=top;i>=0;i--)
		{
			printf("The Elements are : %d\n",array[i]);
		}
	}
}
void pop()
{
	if(top<0)
	{
		printf("Stack is empty");
	}else
	{
		printf("Elements is poped : %d \n",array[top]);
		top--;
	}
}
