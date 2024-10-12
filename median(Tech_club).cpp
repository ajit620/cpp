#include <iostream>

using namespace std;

int main()
{
    int n, numbers[n];
    double median;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    if (n % 2 == 0)
    {
        median = (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0;
        cout << "Median: " << median << endl;
    }
    else
    {
        median = numbers[n / 2];
        cout << "Median: " << median << endl;
    }

    return 0;
}

/*
1. first we will input an array of list for data points
2. we will input all the data elements
3. sort all the data elements using bubble sort
4. calculate & print print the  median according to odd or even number of data points
 */