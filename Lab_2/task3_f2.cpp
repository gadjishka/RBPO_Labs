#include <cmath>

module student_1bib21037.Lab2.Variant4.Task3;

double RBPO::Lab2::Variant4::Task3::f2(double x) {
	return (x > 0) ? (log(x) + 9.0) : ((x == -sqrt(7.0)) ? 0.0 : (-x / (x * x - 7.0)));
}