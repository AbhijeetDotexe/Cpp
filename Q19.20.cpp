//WAP to implement Lower Triangular Matrix using one-dimensional array
//WAP to implement Upper Triangular Matrix using one-dimensional array.
#include<iostream>
using namespace std;
void lower(int matrix[][50], int row, int col) 
{ 
    int i, j; 
    for (i = 0; i < row; i++) 
    { 
        for (j = 0; j < col; j++) 
        { 
            if (i < j) 
            { 
                cout << "0" << " "; 
            } 
            else
            cout << matrix[i][j] << " "; 
        } 
        cout << endl; 
    } 
} 
  

void upper(int matrix[][50], int row, int col) 
{ 
    int i, j; 
      
    for (i = 0; i < row; i++) 
    { 
        for (j = 0; j < col; j++) 
        { 
            if (i > j) 
            { 
                cout << "0" << " "; 
            } 
            else
            cout << matrix[i][j] << " "; 
        } 
        cout << endl; 
    } 
} 
  
 
int main() 
{ 
    int matrix[50][50];
    int size  ;
	cout<<"ENTER SIZE OF THE MATRIX";
	cin>>size;
	cout<<"\nENTER THE MATRIX";
	 for(int i=0;i<size;i++)
	 for(int j=0;j<size;j++)
	 cin>>matrix[i][j];
      
    cout << "Lower triangular matrix: \n"; 
    lower(matrix, size, size); 
      
    cout << "Upper triangular matrix: \n"; 
    upper(matrix, size, size); 
          
    return 0; 
} 

