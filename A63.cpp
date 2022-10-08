#include <iostream>
using namespace std;
int getSum(int);
int main()
{
  int n;
  int sum;
  do
    {
      cout << "Enter the number of inputs: ";
      cin >> n;
      if (n != -1)
      {
        sum = getSum(n);
        cout << "The sum is " << sum << endl;
      }
    }
  while(n != -1);
  return 0;
}
int getSum(int n)
{
  int number;
  int max = -1;
  int min = 9999999;
  int sum = 0;
  cout << "Enter " << n << " values:\n";
  for (int i = 0 ; i < n ; i++)
    {
      cin >> number;
      sum += number;
      if (max < number)
      {
        max = number;
      }
      if (min > number)
      {
        min = number;
      }
    }
  sum = sum - max - min;
  return sum;
}