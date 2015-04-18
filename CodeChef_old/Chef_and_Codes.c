#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 150000
static char freq[27], str[MAX_SIZE], map[27];
struct pair{
	int key;
	int val;
};

int cmp (const void *a, const void *b)
{
	const struct pair *x = a;
	const struct pair *y = b;
	
	if (x->val == y->val)
	{
		return x->key - y->key;
	}
	else
	{
		return x->val - y->val;
	}
}

int main(void)
{
	int T;
	
	gets(str);
	T = atoi(str);
	while (T--)
	{
		struct pair p[26];
		int i;
		
		for (i = 0; i < 26; i++)
		{
			p[i].key = i;
			p[i].val = 0;
		}
		gets(freq);
		gets(str);
		for (i = 0; str[i]; i++)
		{
			if (isalpha(str[i]))
			{
				int x = tolower(str[i]) - 'a';				
				p[x].val++;
			}
		}
		qsort(p, 26, sizeof(struct pair),cmp);
		for (i = 25; i >= 0 && p[i].val > 0; --i)
		{
			int temp = p[i].key;
			map[temp] = freq[i];
		}
		for (i = 0; str[i]; i++)
		{
			if (isalpha(str[i]))
			{
				int x = tolower(str[i]) - 'a';
				if (isupper(str[i]))				
					putchar(toupper(map[x]));
				else
					putchar(map[x]);
			}
			else
			{
				putchar(str[i]);
			}
			
		}
		putchar('\n');
	}
	
	return 0;
}
