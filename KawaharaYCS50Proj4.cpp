#include <iostream>
using namespace std;
//Yuto Kawahara 
//Project4 
//Bubble sort
//Complete bubble sorting program
//2021 Dec 5 

#define FALSE 0
#define TRUE 1

void bubbleSort(int data [], int dataSize);
int main()
{
  
	int data[20];
	int dataSize;
	printf("\nProject 4: Bubble Sort - Yuto Kawahara\n]n");
	srand(time(0));  //“Seed” random numbers
	dataSize = rand() % (20 - 15 + 1) + 15; //Choose data size between 15 and 20, randomly
	for (int i = 0; i < dataSize; i++)
		data[i] = rand() % (99 - 10 + 1) + 10;
	printf("Data size: %d\n", dataSize);
	for (int i = 0; i < dataSize; i++)
		printf("%4d", data[i]);
	printf("\n\n");
	bubbleSort(data, dataSize);
  printf("\nProject 4: Bubble Sort - Yuto Kawahara\n]n");
}

void bubbleSort(int data[], int dataSize)
{
	int sorted = FALSE;
  int ARRAY_SIZE;
  int i;
  int SampleData[i];
	while (!sorted)
	{
		sorted = TRUE;
		for (int i = 0; i < ARRAY_SIZE - 1; i++)
			if (SampleData[i] > SampleData[i + 1])
			{
				int temp = SampleData[i];
				SampleData[i] = SampleData[i + 1];
				SampleData[i + 1] = temp;
				sorted = FALSE;
			}
		for (int i = 0; i <ARRAY_SIZE; i++)
			printf("%d", SampleData[i]);
  }
  
}