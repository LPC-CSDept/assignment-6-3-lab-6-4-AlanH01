//		Write a program that calculate the summation of the given N numbers
//		with removing the minimum and maximum numbers.
//		[example]  N = 5, [2, 1, 5, 10, 7] =  2 + 5 + 7 = 14
//		the function int getsum(int N) needs to get the N user inputs
//		and then calculate the summation of list with removing the minimum and maximum value.

#include <iostream>
using namespace std;

int getsum(int);
int main()
{
        int N;
        int sum;

        cout << "Enter your input ( N )\n";
        cin >> N;
        sum = getsum(N);
        cout << "The sum is " << sum << endl;
}

int getsum(int N)
{
        int i;
        int max, min, num, sum = 0;
        for (i = 0; i < N; i++) //* N = 3
        {
                cout << "Enter your th number: ";
                cin >> num;
                sum += num;
                if ((i == 0) || (min > num)) //* min = 1, num = 3
                        min = num;
                if ((i == 0) || (max < num)) //* max = 2 , num = 3
                        max = num;           //* max = 3
        }
        sum = sum - min - max;
        return sum;
}
