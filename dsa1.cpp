#include <iostream>
using namespace std;
int main ()
{
    int t, n, d, i, temp;
    cin >> t;
    while (t != 0)
    {
        cin >> n >> d;
        d = d-1;
        temp = n;
        int *arr = new int[n-1];
        for( i = 0; i < n; i++ )
            cin >> arr[i];
        for( i = 0; i < d/2; i++ )
            swap( arr[i], arr[d-i] );
        for( i = d+1; i < ((n-1)+(d+1))/2; i++)
            swap( arr[i], arr[--n]);
        for(i = 0; i < temp; i++)
            swap(arr[i], arr[temp-i-1]);
        for( i = 0; i < temp; i++ )
            cout << arr[i] << " " ;
        cout << endl;    
        t--;
    }
}
