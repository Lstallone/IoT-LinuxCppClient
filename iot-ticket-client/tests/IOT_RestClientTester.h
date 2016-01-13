/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Wapice Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this
 * software and associated documentation files (the "Software"), to deal in the Software
 * without restriction, including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons
 * to whom the Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
 * PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
 * FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */


#ifndef IOT_RESTCLIENTTESTER_H
#define IOT_RESTCLIENTTESTER_H

#include "cppunit/extensions/HelperMacros.h"

class IOT_RestClientTester : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE( IOT_RestClientTester );
    CPPUNIT_TEST( testHttpGet );
    CPPUNIT_TEST( testOversizedResponse );
    CPPUNIT_TEST( testHttpBasicAuth );
    CPPUNIT_TEST( testHttpAuthFail );
    CPPUNIT_TEST( testHttpPost );
    CPPUNIT_TEST( testMultiThread );
    CPPUNIT_TEST_SUITE_END();

public:
    void testHttpGet();
    void testOversizedResponse();
    void testHttpBasicAuth();
    void testHttpAuthFail();
    void testHttpPost();
    void testMultiThread();
};

#endif // IOT_RESTCLIENTTESTER_H