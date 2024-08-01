//Input : feet		inches
	//		46			10
	//		55			6
//output :666

//height of tree = (feet *12)+inches

#include<stdio.h>

struct treeHeight{
	int feet;
	int inches;
};
int findtallest(struct treeHeight tree[],int n)
{
	int heights[n];
	if(n<=0)
	{
		return -1;
	}
	for(int i=0;i<n;i++)
	{
		heights[i] = tree[i].feet*12 +tree[i].inches;	
	}
	int maxheight=heights[0];
	for(int i=1;i<n;i++)
	{
		if(heights[i]>maxheight)
		{
			maxheight=heights[i];
		}
	}
	return maxheight;
}
int main()
{
	printf("Enter number of trees:");
	int n;
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Invalid tree count");
		return 1;
	}
	struct treeHeight tree[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter feet of tree %d: ",i+1);
		scanf("%d",&tree[i].feet);
		printf("Enter inches of tree %d: ",i+1);
		scanf("%d",&tree[i].inches);
	}
	int result=findtallest(tree,n);
	printf("Height of Tallest tree is %d",result);
}