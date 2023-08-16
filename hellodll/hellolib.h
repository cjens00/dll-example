#ifndef HELLOLIB_H
#define HELLOLIB_H

// ================================
#ifdef __cplusplus
extern "C"
{
#endif
// ================================

#ifdef hellodll_EXPORTS
#define HELLOLIB_API __declspec(dllexport)
#else
#define HELLOLIB_API __declspec(dllimport)
#endif

HELLOLIB_API void print_hello_world();

// ================================
#ifdef __cplusplus
}
#endif
// ================================

#endif