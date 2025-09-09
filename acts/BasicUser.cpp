#include "BasicUser.h"

void BasicUser::calculateBill(string discountCode) {
    int baseCharge = 500;
    int extraCharge = 0;

    if (dataUsage > 50) {
        extraCharge = (dataUsage - 50) * 5;
    }

    int total = baseCharge + extraCharge;

    cout << "User type = Basic. Extra data charge = Rs. "
         << extraCharge << ". Total Bill = Rs. " << total << endl;
}
