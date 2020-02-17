#include <cstdio>
#include <iostream>

enum { ALTO, BAIXO, IGUAL };

using namespace std;

bool is_nlog(int *arr, int n);

int main(int argc, char **argv) {
    int arr[100], n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (n == 2 ? arr[0] != arr[1] : is_nlog(&arr[0], n)) << endl;

    return 0;
}

bool is_nlog(int *arr, int n) {

	if(arr[n-1] == arr[n-2]) return false;
	if(n==3){
		return (arr[n-1] > arr[n-2]) == (arr[n-2] < arr[n-3]);
	}
	return (arr[n-1] > arr[n-2]) == (arr[n-2] < arr[n-3]) && is_nlog(arr, n-1);
}
