#include "mbed.h"
#include "Eigen/Dense"

using namespace std;
using namespace Eigen;

DigitalOut led1(LED1);

int main() {

    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);

    while (true) {
        led1 = !led1;
        Thread::wait(500);
    }
}
