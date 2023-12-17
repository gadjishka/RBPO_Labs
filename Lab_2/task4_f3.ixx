module;
#include <math.h>
export module student_1bib21037.Lab2.Variant4.Task4:f3;
import :a;

namespace RBPO::Lab2::Variant4::Task4 {
    export double f3(int n) {
        double sum = 0.0;
        for (int i = 0; i <= n; ++i) {
            sum += a(i);
        }
        return sum;
    }
}