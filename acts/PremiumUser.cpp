#include "PremiumUser.h"

void PremiumUser::calculateBill(string discountCode) {
    int baseCharge = 1000;
    int extraCharge = 0;

    if (dataUsage > 100) {
        extraCharge = (dataUsage - 100) * 5;
    }

    int total = baseCharge + extraCharge;

    if (discountCode == "NET50") {
        total -= 50;
    }

    cout << "User type = Premium. Extra data charge = Rs. "
         << extraCharge << ". Total Bill = Rs. " << total;

    if (discountCode == "NET50") {
        cout << " (after Rs. 50 discount)";
    }

    cout << endl;
}
