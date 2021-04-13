
#include <iostream>
#include <climits>
using namespace std;

struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n)
{
	int mx = INT_MIN;
	for (int i = 0; i < n; i++) {
		int temp = 12 * (arr[i].feet)
					+ arr[i].inches;
		mx = max(mx, temp);
	}
	return mx;
}


int main()
{

	Height arr[] = {
		{ 1, 2 },
		{ 2, 1 }
		
	};
	int res = findMax(arr, 2);
	cout << "max :: " << res << endl;
	return 0;
}
