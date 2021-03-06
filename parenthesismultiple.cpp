#include<iostream>
#include<conio.h>
using namespace std;
struct stack
{
    int top;
    int size;
    char *array;
};
typedef struct stack stack1;
int Is_Full(stack1 *top)
{
    if(top->top==top->size-1)
    {
        return 1;
    }
    return 0;

}
int Is_Empty(stack1 *top)
{
    if(top->top==-1)
    {
        return 1;
    }
    else
    {
     return 0;
    }

}
int pop(stack1 *top)
{
    if(Is_Empty(top))
    {
        cout<<"underflow"<<endl;
        return -1;
    }
    else
    {
    int val=top->array[top->top];
    top->top--;
    return val;
    }
}
int push(stack1 *top,char element)
{
    if(Is_Full(top))
    {
        cout<<"overerflow"<<endl;
    }
    else
    {
    top->top++;
    top->array[top->top]=element;
    }
}
int match(char a,char b)
{
    if(a=='(' && b==')')
    {
        return 1;
    }
    if(a=='{' && b=='}')
    {
        return 1;
    }
    if(a=='[' && b==']')
    {
        return 1;
    }
    return 0;
}
int parenthesis(string exp)
{
    char poped;
    stack1 *sp=(stack1 *)malloc(sizeof(stack1));
    sp->size=100;
    sp->top=-1;
    sp->array=(char *)malloc(sp->size*sizeof(char));
    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            push(sp,exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
        {
            if(Is_Empty(sp))
            {
                return 0;
            }
            poped=pop(sp);
            if(!match(poped,exp[i]))
            {
                return 0;
            }

        }
    }
if(Is_Empty(sp))
{
     return 1;
}
else{
    return 0;
    }
};

int main()
{
    string exp="(2+9}";
    if(parenthesis(exp))
    {
        cout<<"balenced";
    }
    else
    {
        cout<<"not balenced";
    }
    
    return 0;
};