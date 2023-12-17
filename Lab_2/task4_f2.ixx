module;
#include <math.h>
export module student_1bib21037.Lab2.Variant4.Task4:f2;

namespace RBPO::Lab2::Variant4::Task4 {
    export double f2(double x) {
        return (x > 0) ? (log(x) + 9.0) : ((x == -sqrt(7.0)) ? 0.0 : (-x / (x * x - 7.0)));
    }
}