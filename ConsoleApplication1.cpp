﻿#include <iostream> 

int main()
{
    const int size = 1000;
    int arr[size];
    int quantity = 0;
    int max,k,num;
    int i, j;
    std::cin >> quantity;
    for (i = 0; i < quantity; i++)
    {
        std::cin >> arr[i];
    }
    k = 0;
    while (k < quantity)
    {
        max = INT_MIN;
        for (int i = quantity - 1; i >= k; i--)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                num = i;
            }
        }
        for (int i = num; i >= k; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[k] = max;
        k++;
    }
    for (int i = 0; i < quantity; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    std::system("PAUSE");
}   