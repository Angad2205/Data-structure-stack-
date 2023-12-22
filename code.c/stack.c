#include<stdio.h>
#define size 10
typedef struct{                                // typedef is used so that we can change the name 
int array[size];
int top;                                    // here we use structure to generalises the things , with the help of
}stack;                                    // structure we can you generalize the things here and can implement the same 
void init (stack *);                      // operations on multiple stacks 
void push (stack * , int);
int pop (stack *);
void push (stack *sp , int value)
{
	if (sp->top == size-1)     // stack over flow condition 
	{
		printf("its a stack over flow condition");
		return ;
	}
	else 
	{
	sp->top++;
	sp->array[sp->top] = value ;
	}
}
int pop (stack *sp)
{ int value ;
		if (sp->top == -1)     // stack under flow condition 
	{
		printf("its a stack under flow condition");
		return 99;
	}
	else 
	{
    value = sp->array[sp->top];
    sp->top--;
    return value ;
	}
}
void init (stack *sp)
{
	(*sp).top = -1;
}

int main ()
{int i;
	stack s1 ;
	init(&s1);                             // to initilize value top = -1 
	push(&s1,48);
		push(&s1,36);                     // operations 
			push(&s1,24);
				push(&s1,12);
	
for ( i = 0 ; i<4 ; i++)
{
printf("%d\n", s1.array[i]);         // testing loop for printing value of stack
}
printf("%d" , pop(&s1)) ;
	return 0;
}