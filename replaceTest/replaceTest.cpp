#include "stdafx.h"
#include "../Replace/Replace.h"

BOOST_AUTO_TEST_SUITE(FindAndReplace_test)

BOOST_AUTO_TEST_CASE(dont_do_anything_with_empty_strings)
{
	std::string emptyString;;
	BOOST_CHECK(FindAndReplace(emptyString, "da", "sdas").empty());
}

BOOST_AUTO_TEST_SUITE(when_processing_a_string)

	BOOST_AUTO_TEST_CASE(replace_string_if_find_string_that_we_want_to_replace)
	{
		std::string string = "mammamama papapapa";
		BOOST_CHECK(FindAndReplace(string, "ma", "mama") == "mamammamamamamama papapapa");
	}

	BOOST_AUTO_TEST_CASE(dont_replace_anything_if_replaced_string_empty)
	{
		std::string string = "mammamama papapapa";
		BOOST_CHECK(FindAndReplace(string, "", "mama") == "mammamama papapapa");
	}

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE_END()