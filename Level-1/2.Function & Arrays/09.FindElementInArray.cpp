#include <iostream>

using namespace std;
void FindElementInArray() {
	int noe;
	cin >> noe;
	int* arr = new int[noe];
	for (int i = 0; i < noe; i++) {
		cin >> arr[i];
	}
	int find;
	cin >> find;
	int flag = 0;
	for (int i = 0; i < noe; i++) {
		if (arr[i] == find) {
			cout << i;
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		cout << -1;
	}
	
}
int main()
{

	FindElementInArray();
	
}

/*
no of elem:6
15
30
40
41
1
9
elem to be searched:40
o/p:  2
*/
