#include "RTI/RTI1516.h"

int main()
{
    rti1516e::RTIambassadorFactory rtiAmbFac;

    std::auto_ptr<rti1516e::RTIambassador> rtiamb = rtiAmbFac.createRTIambassador();

    return 0;
}