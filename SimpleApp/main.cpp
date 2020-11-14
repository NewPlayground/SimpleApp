#include "libM.h"
import n; // Note: do not import 'm'.
int main() {
    if (munge(1, 2) != -1)
        return 1;
    if (libm_munge(1, 2) != 3)  // Note uses Module 'm' version of 'munge'.
        return 1;
}
