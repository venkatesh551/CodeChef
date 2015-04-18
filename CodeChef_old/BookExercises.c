#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack
{
	int x;
	int min;
	char name[16];
};

static int top = 0;

int _Min(int x, int y)
{
	return x < y ? x : y;
}

void push(struct Stack *s, int x, const char *name)
{
	s[top].x = x;
	strcpy(s[top].name, name);
	
	if (top == 0)
	{
		s[top].min = x;
	}
	else
	{
		s[top].min = _Min(x, s[top-1].min);
	}
	
	top++;
}

void getMin(struct Stack *s)
{
	int curTop = top;
	top--;
	while (s[top].min != s[top].x)
	{
		top--;
	}
	printf("%d %s\n", curTop - top -1, s[top].name);
}

int main(int argc, char *argv[])
{
	int N;
	
	scanf("%d", &N);
	struct Stack *s = (struct Stack *) malloc(sizeof(struct Stack) * N);
	top = 0;
	while (N--)
	{
		int x;
		
		scanf("%d", &x);
		if (x == -1)
		{
			getMin(s);
		}
		else
		{
			char name[16];
			
			scanf("%s", name);
			if (x > 0)
			{
				push(s, x, name);
			}
		}
	
	}
	free(s);
	return 0;
}
