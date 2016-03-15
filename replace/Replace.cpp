#include "stdafx.h"
#include "Replace.h"
#include <boost/algorithm/string.hpp>

std::string FindAndReplace(std::string & subject, std::string const& search, std::string const& replace) 
{
	boost::replace_all(subject, search, replace);
	return subject;
}