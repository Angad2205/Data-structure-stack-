#include<stdio.h>
#define size 5
typedef struct{
	int array[size];
	int top1;
		int top2;
}stack; 

void push1(stack * , int);
void push2(stack * , int);
int pop1(stack *);
int pop2(stack *);
void init(stack*);  
//int condition(stack *);                                           
void push1(stack *sp , int value)
{
if (sp->top1 == size-1 ||  sp->top1 == sp->top2-1 )
{
	printf("stackover flow");
	}	
	else 
	{
	sp->top1++;
	sp->array[sp->top1] = value;
	}
} 
int pop1(stack *sp)
{int value ;
if (sp->top1 == -1)
{
	printf("stack underflow");
	}	
	else 
	{
	value = sp->array[sp->top1];
	sp->top1--;
	}
}

void push2(stack *sp , int value)
{
if (sp->top2 == -1 ||  sp->top1 == sp->top2-1)
{
	printf("stackover flow");
	
	}	
	else 
	{
	sp->top2--;
	sp->array[sp->top2] = value;
	}
}
int pop2(stack *sp)
{ int value ;
if (sp->top2 == size)
{
	printf("stack underflow");
	}	
	else 
	{
	value = sp->array[sp->top2];
	sp->top2--;
	}
}
void init (stack *sp)
{
	sp->top1 = -1;
	sp->top2 = size;
}

int main ()
{ int i ;
	stack s1;
	init(&s1);
	push1(&s1,24);
		push1(&s1,2);
			push1(&s1,36);
				push2(&s1,100);
					push1(&s1,130);
					for (i = 0 ; i<5 ; i++)
					{
						printf("%d\n" , s1.array[i]);
					}
	push1(&s1,45);
	push2(&s1,34);
	return 0;
}
