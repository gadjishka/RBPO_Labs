#include <cmath>

module student_1bib21037.Lab2.Variant4.Task3;

double RBPO::Lab2::Variant4::Task3::f4(double eps) {
    double sum = 0.0, term = 0.0, curr = a(0);
    int i = 1;
    do {
        sum += curr;
        term = curr;
        curr = a(i);
        i++;
    } while (fabs(curr - term) > eps);
    return sum;
}