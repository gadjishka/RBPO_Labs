#include <cmath>

module student_1bib21037.Lab2.Variant4.Task2;

double a(int i) {
	return pow(-1, i) * ((pow(i, 2) + 1) / (pow(i, 3) + 3));
}

double RBPO::Lab2::Variant4::Task2::f1(double x) {
	return (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}

double RBPO::Lab2::Variant4::Task2::f2(double x) {
	if (x > 0) {
		return log(x) + 9.0;
	}
	else if (x == -sqrt(7.0)) {
		return 0.0;
	}
	else {
		return (-x / (x * x - 7.0));
	}
}

double RBPO::Lab2::Variant4::Task2::f3(int n) {
	double sum = 0.0;
	int i = 0;
	while (i <= n) {
		sum += a(i);
		i++;
	}
	return sum;
}

double RBPO::Lab2::Variant4::Task2::f4(double eps) {
	double sum = 0.0, term = 0.0, curr = a(0);
	int i = 1;
	while (fabs(curr - term) > eps) {
		sum += curr;
		term = curr;
		curr = a(i);
		i++;
	}
	return sum;
}