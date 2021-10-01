#pragma once

#include "../defines.h"

//  Disable assertions by commenting out the line below
#define KASSERTIONS_ENABLED

#ifdef KASSERTIONS_ENABLED
#if _MSC_VER
#include <intrin.h>
#define debugbreak() __debugbreak()
#else
#define debugbreak() __builtin_trap()
#endif

KAPI void report_assertion_failure(const char *expression, const char *message, const char *file, i32 line);

#define KASSERT(expr)                                                \
    {                                                                \
        if (expr)                                                    \
        {                                                            \
        }                                                            \
        else                                                         \
        {                                                            \
            report_assertion_failure(#expr, "", __FILE__, __LINE__); \
            debugbreak();                                            \
        }                                                            \
    }

#define KASSERT_MSG(expr, message)                                        \
    {                                                                     \
        if (expr)                                                         \
        {                                                                 \
        }                                                                 \
        else                                                              \
        {                                                                 \
            report_assertion_failure(#expr, message, __FILE__, __LINE__); \
            debugbreak();                                                 \
        }                                                                 \
    }

#ifdef _DEBUG
#define KASSERT_DEBUG(expr)                                          \
    {                                                                \
        if (expr)                                                    \
        {                                                            \
        }                                                            \
        else                                                         \
        {                                                            \
            report_assertion_failure(#expr, "", __FILE__, __LINE__); \
            debugbreak();                                            \
        }                                                            \
    }
#else
#define KASSERT_DEBUG(expr) // Does nothing at all
#endif

#else
#define KASSERT(expr)              // Does nothing at all
#define KASSERT_MSG(expr, message) // Does nothing at all
#define KASSERT_DEBUG(expr)        // Does nothing at all

#endif