#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string binary_convert(int x)
{
  string binary = "";
  while(x > 0)
  {
  if(x % 2 == 0)
   {
   binary += '0';
   x = x/2;
   }
   else{
    binary += '1';
    x = x/2;
   }
  }
  reverse(binary.begin() , binary.end());
 return binary;
}
int main()
{
  int size;
  cout << "Enter number of elements: ";
  cin >> size;
  int *arr = new int[size];
  cout << "Enter " << size << " elements : ";
  for(int i = 0; i < size;i++)
  {
    cin >> arr[i];
  }
  cout << "The binary represantation of each intger :\n";
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << "--> " << binary_convert(arr[i]) << endl;;
  }
  return 0;

}