//This is program which will place all the zeros from the array to the last of the array
#include<bits/stdc++.h>
using namespace std;
//Brute Force
// void moveZerosToEnd(int arr[], int n)
// {
//     //Inserting/placing all non-zero number into a temp arr
//     vector<int> temp;
//     for(int i = 0; i < n; i++)
//     {
//         if(arr[i] != 0)
//         {
//             temp.push_back(arr[i]);
//         }
//     }

//     //Reverting/replacing all the non-zero numbers into the orginal array
//     for(int i = 0; i < temp.size();i++)
//     {
//         arr[i] = temp[i];

//     }
    

//     //marking or inserting zero in the remaining blocks of array
//     for(int i = temp.size(); i < n; i++)
//     {
//         arr[i] = 0;
//     }
// }
void moveZerosToEnd(int arr[],int n)
{
    //loop through array to find the elem which is equal to 0
    int j = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if(j == -1)
    {
        return;
    }

    //swaping the j+1th ele if it is nonzero
    for(int i = j+1; i < n; i++ )
    {
        if(arr[i] !=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    moveZerosToEnd(arr,n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}