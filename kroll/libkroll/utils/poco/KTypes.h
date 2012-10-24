/**
* This file has been modified from its orginal sources.
*
* Copyright (c) 2012 Software in the Public Interest Inc (SPI)
* Copyright (c) 2012 David Pratt
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
***
* Copyright (c) 2008-2012 Appcelerator Inc.
* 
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
**/

// Types.h
//
// $Id: //poco/1.3/Foundation/include/Poco/Types.h#1 $
//
// Library: Foundation
// Package: Core
// Module:  Types
//
// Definitions of fixed-size integer types for various platforms
//
// Copyright (c) 2004-2006, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//

#ifndef KPOCO_Foundation_Types_INCLUDED
#define KPOCO_Foundation_Types_INCLUDED
#include "KFoundation.h"
namespace KPoco {
#if defined(OS_WIN32)
    typedef signed char            KInt8;
    typedef unsigned char          KUInt8;
    typedef signed short           KInt16;
    typedef unsigned short         KUInt16;
    typedef signed int             KInt32;
    typedef unsigned int           KUInt32;
    typedef signed __int64         KInt64;
    typedef unsigned __int64       KUInt64;
    #if defined(OS_64)
        #define POCO_PTR_IS_64_BIT 1
        typedef signed __int64     KIntPtr;
        typedef unsigned __int64   KUIntPtr;
    #else
        typedef signed long        KIntPtr;
        typedef unsigned long      KUIntPtr;
    #endif
    #define POCO_HAVE_INT64 1
#elif defined(OS_LINUX) || defined(OS_OSX)
    typedef signed char            KInt8;
    typedef unsigned char          KUInt8;
    typedef signed short           KInt16;
    typedef unsigned short         KUInt16;
    typedef signed int             KInt32;
    typedef unsigned int           KUInt32;
    typedef signed long            KIntPtr;
    typedef unsigned long          KUIntPtr;
    #if defined(OS_64)
        #define POCO_PTR_IS_64_BIT 1
        #define POCO_LONG_IS_64_BIT 1
        typedef signed long        KInt64;
        typedef unsigned long      KUInt64;
    #else
        typedef signed long long   KInt64;
        typedef unsigned long long KUInt64;
    #endif
    #define POCO_HAVE_INT64 1
#endif
} // namespace KPoco

#endif