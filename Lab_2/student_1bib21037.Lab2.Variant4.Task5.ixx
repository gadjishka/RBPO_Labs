module;
#include <math.h>
export module student_1bib21037.Lab2.Variant4.Task5;
namespace RBPO::Lab2::Variant4::Task5
{
	export double f1(double x);
	export double f2(double x);
	export double a(int i);
	export double f3(int n);
	export double f4(double epsilon);
}
module :private;

double RBPO::Lab2::Variant4::Task5::f1(double x)
{
	return (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
double RBPO::Lab2::Variant4::Task5::f2(double x)
{
	return (x > 0) ? (log(x) + 9.0) : ((x == -sqrt(7.0)) ? 0.0 : (-x / (x * x - 7.0)));
}
double RBPO::Lab2::Variant4::Task5::a(int i)
{
	return pow(-1, i) * ((pow(i, 2) + 1) / (pow(i, 3) + 3));
}
double RBPO::Lab2::Variant4::Task5::f3(int n)
{
	double sum = 0.0;
	for (int i = 0; i <= n; ++i) {
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab2::Variant4::Task5::f4(double eps)
{
	double sum = 0.0, term = 0.0, curr = a(0);
	for (int i = 1; (fabs(curr - term) > eps); ++i) {
		sum += curr;
		term = curr;
		curr = a(i);
	}
	return sum;
}