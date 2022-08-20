#include <iostream>



int solve (int C, int D,int P, int M, char * S) 
{
	int N = sizeof(S);

	for (N=0; N < strlen(S); N++) 
	{
		switch(S[N]) {
			case 'D':
			  M +2;
			case 'C':
			  --M;	
		}
	}
}


 int main ()  
{
	printf("\t \n Cats And Dogs Kickstart Google CodeJam. \n enter amount of test cases");
	char * S;
	std::cin >> S;
	
}
