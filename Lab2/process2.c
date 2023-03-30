#include <stdio.h>
#include <unistd.h>
int main()
{
	for(int i = 0; i<2; i++){
	fork();
	printf("forked%d\n",i);}
	return 0;
}
