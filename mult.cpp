#include<iostream>
using namespace std;
int main()
{
    int matA[20][20], matB[20][20], product[20][20];
    int arows, acolumns, brows, bcolumns;
    int i, j, k;

    //ask to the user to enter the rows & columns of a Matrix
    cout<<"Enter the rows & columns of Matrix A: "<<endl;
    cin>>arows>>acolumns;

    //ask to the user to enter the rows & columns of b Matrix
    cout<<"Enter the row & columns of Matrix B: "<<endl;
    cin>>brows>>bcolumns;

    //Check Multiplication possible or not!
    if (acolumns != brows)
    {
        cout<<"Can't be multiplied the two matrix"<<endl;
    }


    else
    {   
        //to take the elements of matrix A
       cout<<"Enter the elements of the Matrix A: "<<endl;
    for ( i = 0; i < arows; i++)
    {
        for ( j = 0; j < acolumns; j++)
        {
            cout<<"a"<<1+i<<1+j<<": ";
            cin>>matA[i][j];
        }
    }

        //to take the elements of matrix A
    cout<<"Enter the elements of the Matrix B: "<<endl;
    for ( i = 0; i < brows; i++)
    {
        for ( j = 0; j < bcolumns; j++)
        {
            cout<<"b"<<1+i<<1+j<<": ";
            cin>>matB[i][j];
        }
        
    } 
    }
    
    
        //Multiply the matA & matB
    for ( i = 0; i < arows; i++)
    {
        for ( j = 0; j < bcolumns; j++)
        {   
            int sum = 0;
            for ( k = 0; k < brows; k++)
            {
                sum += matA[i][k] * matB[k][j];
            }
            product[i][j]= sum;
        }
        
    }
    
    // print the results
    cout<<"Multiplication result of Matrix A & Matrix B: "<<endl;
    for ( i = 0; i < arows; i++)
    {
        for ( j = 0; j < bcolumns; j++)
        {
            cout<<product[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    return 0;
}