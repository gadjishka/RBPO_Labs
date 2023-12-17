module;
#include <math.h>
export module student_1bib21037.Lab2.Variant4.Task4:f1;

namespace RBPO::Lab2::Variant4::Task4 {
    export double f1(double x) {
        return (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
    }
}
