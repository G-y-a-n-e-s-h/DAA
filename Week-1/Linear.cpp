#include<iostream>
using namespace std;
void Linear(int a[],int n,int key)
{
  int c=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]==key)
    {
      c++;
      cout<<"PRESENT "<<c<<endl;
      return;
    }
    else
    {
      c++;
    }
  }
  if(c==n)
  {
    cout<<"NOT PRESENT "<<c<<endl;
  }
}

int main()
{
  int n, size, key;
  cin>>n;

  cout<<"No. of test case "<<n<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>size;
    int array[size];
    for(int j=0;j<size;j++)
    {
      cin>>array[j];
    }
    cin>>key;
    Linear(array,size,key);
  }
  return 0;
}