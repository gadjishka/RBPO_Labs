#include <cmath>

module student_1bib21037.Lab2.Variant4.Task3;

double RBPO::Lab2::Variant4::Task3::f1(double x) {
	return (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
