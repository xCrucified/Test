#include <iostream>
using namespace std;
#include <vector>
int main() {

	cout << "Hello World, it's a new repository" << endl;
	vector<int> v{ 10,23,43,665,3,334 };
	for (auto& i : v)
	{
		cout << i << "\t";
	}
}