/* This is any example for parameterized function*/
// #include<bits/stdc++.h>
// using namespace std;

// int doSum(int n1,int n2)
// {
//     int res = n1 + n2;
//     return res;
// }

// int main()
// {
//     int num1,num2;
//     cout << "Enter the Two Numbers " << endl;
//     cin >> num1 >> num2 ;
//     int res = doSum(num1,num2);
//     cout << "The addition of two numbers is : "<<res << endl;
//     return 0 ;
// }

// Pass by value Example
/*#include <bits/stdc++.h>
using namespace std;

void fun(int num)
{
    cout << "Value of Number in fun Function" << endl;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
}

int main()
{
    int n;
    cin >> n;
    fun(n);
    cout << "Value of the number in the main function " << n;
    return 0;
}
    --> This is an example for pass by value, where the copy of the argument is been passed to the working function ,the changes in the function will not be reflected to the original value of the argument
*/

// Pass by reference
/*#include <bits/stdc++.h>
using namespace std;

void fun(int &num)
{
    cout << "Value of Number in fun Function" << endl;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;

}

int main()
{
    int n;
    cin >> n;
    fun(n);
    cout << "Value of the number in the main function " << n;
    return 0;
}*/

// Arrays are always pass by reference in C++

#include <bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] += 5;
    }
}

int main()
{
    int n;
    cout << "Enter the Size of the array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Element Nor " << i << endl;
        cin >> arr[i];
    }

    cout << "Elements before parsing into the function :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Elements Nor " << i << " and its value : " <<arr[i] << endl;
    }

    doSomething(arr,n);

    cout << "Elements after parsing into the function " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Elements Nor " << i << " and its value : " <<arr[i] << endl;
    }




    return 0 ;
}