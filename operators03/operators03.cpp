#include <iostream>
using namespace std;

class Vector {
	double vector[2];
public:
	Vector(double vec_begin, double vec_end) { vector[0] = vec_begin; vector[1] = vec_end; }
	Vector operator-- (int ) {
		vector[0]--;
		vector[1]--;
		return *this;
	}
	double get_begin() { return vector[0]; }
	double get_end() { return vector[1]; }
	void printinfo() { cout << "(" << get_begin() << "; " << get_end() << ")" << endl; }
};

int main() {
	Vector vec(1, 1);
	vec--.printinfo();
}