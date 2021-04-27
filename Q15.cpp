//WAP to convert the Sparse Matrix into non-zero form and vice-versa
#include <iostream> 
using namespace std; 
  


  
int data[100][3]; 
  

int len; 
  

void insert(int r, int c, int val) 
{ 

    data[len][0] = r; 
  

    data[len][1] = c; 
  

    data[len][2] = val; 
  

    len++; 
} 
  

void print() 
{ 
    cout << "\nDIMENSIONS OF SPARSE MATRIX: "
         << len << " x " << 3; 
    cout << "\nSPARSE MATRIX: \nROW COLUMN VALUE\n"; 
  
    for (int i = 0; i < len; i++) { 
  
        cout << data[i][0] << " "
             << data[i][1] << " "
             << data[i][2] << "\n"; 
    } 
} 
  

int main() 
{ 
    int i, j; 
    int r ,c ; 
  
  
    int a[50][50];
    cout<<"\nENTER THE NUMBER OF ROWS AND COLUMNS OF THE MATRIX";
    cin>>r>>c;
cout<<"\nINPUT THE MATRI\n";
     
    for (i = 0; i < r; i++) { 
        for (j = 0; j < c; j++) { 
            cin >> a[i][j]; 
        } 
    
    } 

    for (i = 0; i < r; i++) 
        for (j = 0; j < c; j++) 
            if (a[i][j] > 0) 
                insert(i, j, a[i][j]); 
  
 
    print(); 
  
    return 0; 
} 
