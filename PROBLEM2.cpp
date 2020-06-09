#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
	cin>>n;
    int t=n*2-1;
	for(int i=0;i<t;i++)
    {
		for(int j=0;j<t;j++)
        {
            int m=i<j?i:j;
            m=m<t-i?m:t-i-1;
            m=m<t-j-1?m:t-j-1;
			cout<<n-m<<" ";
        }
		cout<<endl;
    }
    return 0;
}

