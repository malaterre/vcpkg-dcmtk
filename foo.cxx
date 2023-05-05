//#include "dcmtk/config/osconfig.h" /* make sure OS specific configuration is included first */
#include "dcmtk/dcmdata/dctk.h"
#include "dcmtk/oflog/spi/logevent.h"  // dcmtk::log4cplus::spi::InternalLoggingEvent

dcmtk::log4cplus::Logger rootLogger = dcmtk::log4cplus::Logger::getRoot();

#include "public.h"

int myfoo() { return 42; }
