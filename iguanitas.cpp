#include <iostream>

using namespace std;

double f(double y) {
	return (0.40*y - 3);
}

int main() {
	double t0 = 0;
    double y0 = 8;
    double dt = 0.1;
    cout << t0 << ',' << y0 << endl;
    for (int k = 0; k < 50; k++) {
    	double t1 = t0 + dt;
        double y1 = y0 + dt*f(y0);
        cout << t1 << ',' << y1 << endl;
        t0 = t1;
        y0 = y1;
    }
}
