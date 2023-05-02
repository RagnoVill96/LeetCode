// TestCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include "Operations.h"
using namespace std;

class A
{
protected:
	virtual double Cover()
	{
		return 10;
	}
};

class B : A
{
public:
	void ShowCover()
	{
		std::cout << "Cover: " << Cover();
	}
protected:
	double Cover() override
	{
		return A::Cover() * 10;
	}
};
//double average(vector<int>& salary) {
//	double minimum = DBL_MAX;
//	int maximum = 0;
//	int total = 0;
//	for (const auto& amount : salary)
//	{
//		total += amount;
//		if (amount > maximum)
//			maximum = amount;
//		if (amount < minimum)
//			minimum = amount;
//	}
//	return (total - maximum - minimum) / (salary.size() - 2);
//}

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* dummy = new ListNode(0);
	ListNode* curr = dummy;
	int carry = 0;

	while (l1 != NULL || l2 != NULL || carry == 1) {
		int sum = 0;
		if (l1 != NULL) {
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2 != NULL) {
			sum += l2->val;
			l2 = l2->next;
		}
		sum += carry;
		carry = sum / 10;
		ListNode* node = new ListNode(sum % 10);
		curr->next = node;
		curr = curr->next;
	}
	return dummy->next;
}
int main()
{
	int a = 2;
	int b = 4;
	int c = 3;
	int d = 5;
	int e = 6;
	int f = 4;

	ListNode node_c(c);
	ListNode node_b(b, &node_c);
	ListNode node_a(a, &node_b);

	ListNode node_f(f);
	ListNode node_e(e, &node_f);
	ListNode node_d(d, &node_e);

	ListNode iterator = node_a;

	addTwoNumbers(&node_a, &node_b);
}
//class parent
//{
//public:
//	parent() = default;
//	virtual void PrintMessage() const
//	{
//		cout << "print parent";
//	}
//};
//
//class childOne : parent
//{
//public:
//	void PrintMessage() const
//	{
//		cout << "print child";
//	}
//};
//
//class childTwo : public parent
//{
//public:
//};

//int main()
//{
//	//vector<int> string_{ 3, 2 };
//	//int total = 1;
//	//cout << accumulate(string_.begin(), string_.end(), total, TotalReturn);
//
//	childOne child_one;
//	child_one.PrintMessage();
//
//	childTwo child_two;
//	child_two.PrintMessage();
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
