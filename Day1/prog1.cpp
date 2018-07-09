#include<cstdlib>
#include<iostream>
#include<cmath>
  using namespace std;
int main()
{
  int32_t x,y;
  cout<<"Enter 1st no:";
  cin>>x;
  cout<<"Enter 2nd no:";
  cin>>y;
  if((x+y)<(pow(2,32)-1))
  {
    cout<<"Sum of "<<x<<" + "<<y<<" = "<<x+y<<endl;
  }
  return EXIT_SUCCESS;
}
