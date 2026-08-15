#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {20,10,15,6,7};

    vector<int>::iterator it = arr.begin();

    it++;
    cout << *(it) <<" ";

    it = it + 2;
    cout << *(it) << " ";

    for(auto it = arr.begin(); it < arr.end(); it++)
    {
        cout << *(it) <<  " ";
    }
    cout << endl;

    for( auto it : arr)
    {
        cout << it << " ";
    }

}