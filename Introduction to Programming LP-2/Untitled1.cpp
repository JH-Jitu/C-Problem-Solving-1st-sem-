#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 10, -2, 9, -4, -6, -7, 12, 14, 19, -20 };
//  Identifying length
	int length = *(&arr + 1) - arr;
	cout<<"Length of array is: " << length <<endl;
	int pos_count = 0;
	int neg_count = 0;
	int i;
//	Finding positive and negative value
	for (i = 0; i < length; i++) {
		if (arr[i] > 0)
			pos_count++;
	}
	cout << "Length of Positive Number: " << pos_count <<endl;

	for (i = 0; i < length; i++) {
		if (arr[i] < 0)
			neg_count++;
	}
	cout << "Length of Negative Number: " << neg_count <<endl;
}
