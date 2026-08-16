//so this is a code which will rearrage the arrange in +ve -ve +ve -Ve fashion and where +ve != -ve

#include<bits/stdc++.h>
using namespace std;

void rearrageElemsBySign(int arr[], int n)
{
    vector<int> pos,neg;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > 0)
        {
            pos.push_back(arr[i]);
        }
        else
        {
            neg.push_back(arr[i]);
        }
    }

    if( pos.size() > neg.size())
    {
        //for following +ve , -ve pattern
        for( int i = 0; i < neg.size(); i++)
        {
            arr[i*2] = pos[i];
            arr[i*2+1] = neg[i];
        }
        //for adding remaining postive elems
        int ind = neg.size()*2;
        for( int i = neg.size(); i < pos.size(); i++ )
        {
            arr[ind] = pos[i];
            ind++;
        }
    }
    else //=> if neg > postive
    {
        //for following +ve , -ve pattern
        for( int i = 0; i < pos.size(); i++)
        {
            arr[i*2] = pos[i];
            arr[i*2+1] = neg[i];
        }
        //for adding remaining negative elems
        int ind = pos.size()*2;
        for( int i = pos.size(); i < neg.size(); i++ )
        {
            arr[ind] = neg[i];
            ind++;
        }
    }
    
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for( int i = 0; i < n; i++ )
    {
        cin >> arr[i];
    }

    rearrageElemsBySign(arr,n);

        for( int i = 0; i < n; i++ )
    {
        cout << arr[i] << " ";
    }

}