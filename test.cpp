//program CHRL3

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>

using namespace std;

int get()
{
  char c;
  while(c=getchar(),(c<'0'||c>'9')&&(c!='-'));
  bool flag=(c=='-');
  if(flag)
    c=getchar();
  int x=0;
  while(c>='0'&&c<='9')
    {
      x=x*10+c-48;
      c=getchar();
    }
  return flag?-x:x;
}

void output(int x)
{
  if(x<0)
    {
      putchar('-');
      x=-x;
    }
  int len=0,data[10];
  while(x)
    {
      data[len++]=x%10;
      x/=10;
    }
  if(!len)
    data[len++]=0;
  while(len--)
    putchar(data[len]+48);
  putchar('\n');
}

const int inf=1000000000;

int main()
{
	int n=get(),ans=0;
	static int dp[100001];
	dp[0]=-inf;
	for(int i=1;i<=n;i++)
	dp[i]=inf;
	for(int i=0;i<n;i++)
	{
	  int x = -get(),Left=0,Right=ans;
	  while(Left<Right)
		{
		  int mid=(Left+Right+1)/2;
		  if(x>dp[mid])
		    Left=mid;
		  else
		    Right=mid-1;
		}
	  dp[Left+1]=min(dp[Left+1],x);
	  ans=max(ans,Left+1);
	}
  output(ans);
  return 0;
}

