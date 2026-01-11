#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
      int c=-45,sum=0;
      for(int i=0;i<=3;i++)
      {
          for(int j=1;j<=4;j++)
          {
              sum=(arr[i][j]+arr[i][j-1]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j]);
              if((sum) > c)
              c=sum;
          }
      }
      cout<<c<<endl;
}
