#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	vector<int> v1{ 1,9,23,22,18,84 };
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	//Print the size of the vector
	cout << v.size() << endl;
	//Print the vector contents using the iterator
	cout << "Contents of v using iterator:" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}
	//Print it using auto
	cout << "Contents of v using auto:" << endl;
	for(auto i : v)
	{
		cout << i << endl;
	}
	//Print the first element of the vector
	cout << "First element of v:" << endl;
	cout << v[0] << endl;
	//Print the last element of the vector
	cout << "Last size of v:" << endl;
	cout << v[v.size() - 1] << endl;
	//Print the last element of the vector
	cout << "Last element of v:" << endl;
	cout << v.back() << endl;
	//Print the first element of the vector
	cout << "First element of v:" << endl;
	cout << v.front() << endl;
	//Print the element at index 2
	cout << "Element at index 2 of v:" << endl;
	cout << v.at(2) << endl;
	//Assign 100 to element at index 2
	v.assign(2, 100);
	//Insert 200 at index 2
	v.insert(v.begin() + 2, 200);
	//Erase the element at index 1
	v.erase(v.begin() + 1);
	//Swap the contents of v with an empty vector
	v.swap(v1);
	//Push 120 to the end of v
	v.push_back(120);
	//Print the contents of v1
	cout << "Contents of v1:" << endl;
	for (size_t i = 0; i < v1.size(); i++)
	{
		cout <<	v1.at(i) << endl;
	}
	//Print the contents of v
	cout << "Contents of v:" << endl;
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	//Clear the contents of v
	cout << "Clear the contents of v:" << endl;
	v.clear();
	//Print the size of the vector
	cout << "Size of v:" << v.size();
}