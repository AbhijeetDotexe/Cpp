//WAP to implement Diagonal Matrix using one-dimensional array
#include <iostream>
using namespace std;
int main()
{

  int diagonal_Matrix[50][50]; 
  int i, j, compact_Form[50],size;
  
  cout<<"\nENTER THE SIZE OF DIAGONAL MATRIX";
  cin>>size;
  cout<<"\nENTER THE DIAGONAL ELEMENTS MATRIX";
  for(i=0;i<size;i++)
    for(j=0;j<size;j++)
        if(i==j)
	    cin>>diagonal_Matrix[i][j];   
    
  
  for(i=0;i<size;i++)
  {
    for(j=0;j<size;j++)
	{
   if(i == j){
            compact_Form[i] = diagonal_Matrix[i][j]; 
			        }  
    
  }
}

  cout << endl << "In Diagonal Form " << endl;
  for(i=0;i<size;i++){
    cout << compact_Form[i] << " ";
  }

  cout << endl << "Displaying the Original Matrix" << endl;
  for(i=0;i<size;i++){
    cout << endl;
    for(j=0;j<size;j++){
        if(i == j){
            cout << compact_Form[i] << " ";
        }else{
            cout << "0 ";
        }
    }
  }
}
