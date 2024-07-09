/*Your task is to complete a function “count_heads()” that takes two inputs N and
R. The function should return the probability of getting exactly R heads on N
successive tosses of a fair coin. A fair coin has an equal probability of landing a
head or a tail (i.e. 0.5) on each toss.
Input: 4 3
Output: 0.250000 */

#include<stdio.h>
#include<math.h>

int fact(int n)
{
	int res=1;
	for(int i=2;i<=n;i++)
	{
		res=res*i;
	}
	return res;
}
float countheads(int n,int r)
{
	float output= fact(n)/(fact(r)*fact(n-r));
	output=output/pow(2,n);
	return output;
}
int main()
{
	int n,r;
	printf("Enter number of Rolls: ");
	scanf("%d",&n);
	printf("Enter number of heads: ");
	scanf("%d",&r);
	float pro=countheads(n,r);
	printf("Probability is : %f",pro);
	return 0;
}