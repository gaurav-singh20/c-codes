//main()
//{
//	int rn1,rn2,rn3,rn4,rn5,rn6,...,rn72
//	int rn[72]; // "rn"-array name, "[72]" is the no. of elemenets it contain.
//72 is the array size
//} %=

#include <stdio.h>
void main()
{
	int regno[5]={11,22,23,34,45}; //INDEX NO.- 11-regno[0],22-regno[1],...
	//float cgpa[72];
	//char grade[72];
	printf("ENTER THE ELEMENTS OF ARRAY: ");
	scanf("%d",&regno[3]); //changing the value of element at 3rd index
	printf("ELEMENT 4 IS: %d",regno[3]);
}
