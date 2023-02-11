						/*Stack using Array*/
struct Stack
{	
	int size;
	int top;
	struct Node **S;
};

void Stack_create(struct Stack *st,int size)
{
	st->size=size;
	st->top=1;
	st->S=(struct Node **)malloc(st->size*sizeof(struct Node *));
}

void Push(struct Stack *st,struct Node *x) 
{
	if(st->top==st->size-1)
		printf("Stack Overflow");
	else
	{
		st->top++;
		st->S[st->top]=x;
	}
}

struct Node *Pop(struct Stack *st)
{
	struct Node *x=NULL;
	if(st->top==-1)
		printf("Stack Underflow\n");
	else 
	{
		x=st->S[st->top--];
	}
	return x;	
}

int isEmptyStack(struct Stack st)
{
	if (st.top==-1)
		return 1;
	return 0;
}

int isFullStack(struct Stack st) 
{
	return st.top==st.size-1;
}