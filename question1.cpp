#include<iostream>
using namespace std ;
int main ()
{
    int m ;
    cout<<"enter  the number of rows of square matrix ";
    cin >> m ;
    int arr[m][m];
    for (int i=0;i<m ;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout << endl ;
    }
    cout << endl ;
    int maxc = m-1;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (i==j|| j==maxc) cout << arr[i][j];
            else cout << " ";

        }
        cout<< endl ;
        maxc--;
    }
}