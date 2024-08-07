//
// LinearHashTableTest.h
//
// Definition of the LinearHashTableTest class.
//
// Copyright (c) 2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// SPDX-License-Identifier:	BSL-1.0
//


#ifndef LinearHashTableTest_INCLUDED
#define LinearHashTableTest_INCLUDED


#include "Poco/Foundation.h"
#include "CppUnit/TestCase.h"


class LinearHashTableTest: public CppUnit::TestCase
{
public:
	LinearHashTableTest(const std::string& name);
	~LinearHashTableTest() override;

	void testInsert();
	void testErase();
	void testIterator();
	void testConstIterator();

#if defined(POCO_TEST_DEPRECATED)
	void testPerformanceInt();
	void testPerformanceStr();
#endif

	void setUp() override;
	void tearDown() override;

	static CppUnit::Test* suite();

private:
};


#endif // LinearHashTableTest_INCLUDED
