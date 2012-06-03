////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "CorLib.h"


HRESULT Library_corlib_native_System_TimeZone::GetTimeZoneOffset___STATIC__I8( CLR_RT_StackFrame& stack)
{
    NATIVE_PROFILE_CLR_CORE();
    TINYCLR_HEADER();    

    CLR_INT64 offset = TIME_ZONE_OFFSET;

    stack.SetResult_I8( offset );

    TINYCLR_NOCLEANUP_NOLABEL();
}

