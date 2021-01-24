#include "RTI/RTIambassadorFactory.h"
#include "NullRtiAmbassador.hpp"

#include <memory>
namespace rti1516e
{

    std::auto_ptr<RTIambassador> RTIambassadorFactory::createRTIambassador() throw(RTIinternalError)
    {
        return std::auto_ptr<RTIambassador>(new nullrti::NullRtiAmbassador());
    }

} // namespace rti1516e