#define _USE_MATH_DEFINES
#include<iostream>
#include<algorithm>
using namespace std;
class SimpleVector {
	int* p;
	int realsize;
public:
	int size;
	SimpleVector() {
		size = 0;
		realsize = 1;
	}
	SimpleVector(int n) {
		size = n;
		realsize = 2 * n;
		p = new int[realsize];
		for (int i = 0; i < realsize; i++) {
			p[i] = 0;
		}
	}
	int& operator[](int i) {
		const int index = i;
		if (i < size) {
			return *(p+index);
		}
		delete &index;
	}
	void pushback(int value) {
		size++;
		if (size > realsize) {
			realsize *= 2;
			int* newp = new int[realsize];
			for (int i = 0; i < size - 1; i++) {
				newp[i] = p[i];
			}
			delete[size - 1] p;
			p = newp;
			delete& newp;
		}
		p[size - 1] = value;
	}
	~SimpleVector() {
		delete[size] p;
		delete& size;
		delete& p;
	}
	int find(int value) {
		for (int i = 0; i < size; i++) {
			if (p[i] == value) {
				return i;
			}
		}
		return -1;
	}
	void remove(int value){
		int index = find(value);
		if (index != -1) {
			size--;
			for (int i = index; i < size; i++) {
				p[i] = p[i + 1];
			}
		}
	}
	void isertafter(int value) {
		int index = find(value)+1;
		if (index != -1) {
			pushback(p[size - 1]);
			for (int i = size - 2; i >= index; i--) {
				p[i] = p[i - 1];
			}
			p[index] = value;
		}
	}
};
