#include <bits/stdc++.h>
using namespace std;
int main()
{
	int A[100],s,B;
	cin >> s;
	for(int i=0;i<s;i++)
		cin >> A[i];
	cin >> B;

	int low=0;int high=s-1;int result=-1;
    while(low<=high)
    {
       int mid=high+low/2;
        if(A[mid]<=B )
        {
            result=mid;
            low=mid+1;
        }
        else if(A[mid]>B)
        {
            high=mid-1;
        }
    }
    cout <<result <<"\s";
    return 0;
}
