#ifndef HELLOLIB_H
#define HELLOLIB_H

// ===========================================================================
// If using a C++ compiler, retain C-style interfaces for exported functions. 
// This improves DLL import compatibility with other languages.
// ===========================================================================
#ifdef __cplusplus
extern "C"
{
#endif

// ===========================================================================
// When using Visual Studio or CMake, the default behavior is to define
// a symbol of format <PROJECT-NAME_EXPORTS> when building a DLL. We check
// to see if the DLL is being built, in which case we export. If not, we 
// would like to tell the compiler that these are imported functions instead. 
// ===========================================================================
#ifdef hellodll_EXPORTS
#define HELLOLIB_API __declspec(dllexport)
#else
#define HELLOLIB_API __declspec(dllimport)
#endif

// The function we are going to both export into the DLL 
// and import into the client application.
HELLOLIB_API void print_hello_world();

// ===========================================================================
// Here we are simply closing our C-style scope (if using C++ compiler).
// ===========================================================================
#ifdef __cplusplus
}
#endif
// ===========================================================================

#endif