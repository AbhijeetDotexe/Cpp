//to be compiled in turbo c++
#include<iostream.h>
#include<conio.h>
#include<graphics.h>

int** bubbleSort(int* array,int size);
void printArray(int* array,int size);
void drawGraph(int** graphCordinates,int size);

int main()
{
	clrscr();
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int* array = new int[size];
	int** graphCordinates;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>array[i];
	}
	cout<<"Array Before Sorting: ";
	printArray(array,size);
	graphCordinates = bubbleSort(array,size);
	cout<<endl<<"Arrat after sorting: ";
	printArray(array,size);
	cout<<endl<<"Press Enter to draw Graph...";
	getch();
	drawGraph(graphCordinates,size);
	getch();
	delete[] array;
	for(int j=0;j<size;j++)
		delete[] graphCordinates[j];
	delete[] graphCordinates;
	return 0;
}

int** bubbleSort(int* array,int size)
{
	int** graphCordinates = new int*[size];
	for(int k=0;k<size;k++)
		graphCordinates[k] = new int[2];
	int totalComparison=0;
	for(int i=0;i<size;i++)
	{
		for(int j=size-1;j>i;j--)
		{
			totalComparison+=2;
			if(array[j]<array[j-1])
			{
				int temp = array[j];
				array[j]=array[j-1];
				array[j-1]=temp;
			}
		}
		graphCordinates[i][0]=i;
		graphCordinates[i][1]=totalComparison;
		cout<<"After pass "<<i+1<<" : total Comparisons: "<<totalComparison<<endl;
		cout<<"Array: ";
		printArray(array,size);
	}
	cout<<"total comparisons: "<<totalComparison<<endl;
	return graphCordinates;
}

void printArray(int* array,int size)
{
	cout<<"{ ";
	for(int i=0;i<size;i++)
		cout<<array[i]<<" ";
	cout<<"}"<<endl;
}

void drawGraph(int** graphCordinates,int size)
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	setcolor(RED);
	line(10,15,10,470);
	line(10,470,600,470);
	outtextxy(5,5,"Y(total number of comparisons)");
	outtextxy(605,470,"G(N)");
	for(int i=0;i<size;i++)
	{
		circle(10+graphCordinates[i][0]*30,470-graphCordinates[i][1]*5,2);
	}
	for(i=0;i<size-1;i++)
	{
		line(10+graphCordinates[i][0]*30,470-graphCordinates[i][1]*5,
			10+graphCordinates[i+1][0]*30,470-graphCordinates[i+1][1]*5);
	}
}