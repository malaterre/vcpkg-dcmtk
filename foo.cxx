#include "public.h"

#include "dcmtk/config/osconfig.h" /* make sure OS specific configuration is included first */
#include "dcmtk/dcmdata/dctk.h"
#include "dcmtk/oflog/spi/logevent.h"  // dcmtk::log4cplus::spi::InternalLoggingEvent


#include <boost/filesystem.hpp>
#include <boost/filesystem/fstream.hpp>
#include <boost/filesystem/path.hpp>

dcmtk::log4cplus::Logger rootLogger = dcmtk::log4cplus::Logger::getRoot();


int myfoo() { return 42; }

std::string myfoo2() {
	const boost::filesystem::path path = "a path";
	return path.string();
}
