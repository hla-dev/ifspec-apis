#include "RTI/RTIambassadorFactory.h"

namespace rti1516e
{

    std::auto_ptr<RTIambassador> RTIambassadorFactory::createRTIambassador()
    {
        return std::auto_ptr<RTIambassador>(0);
    }

} // namespace rti1516e