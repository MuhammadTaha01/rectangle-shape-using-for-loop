#include<iostream>
using namespace std;
int main()
{
  int row,col;
  cin>>row>>col;

  // This will print rectangle shape
  // And will ask user to enter rows & columns

      for(int i=1; i<=row; i++)
      {
          for(int j=1; j<=col; j++)
          {
            cout<<"*";
          }
          cout<<endl;
      }
}
