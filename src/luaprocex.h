#ifndef _LUA_LUAPROCEX_H_
#define _LUA_LUAPROCEX_H_
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>


LUALIB_API int luaproc_sendmsg(const char* chan, unsigned int token, unsigned short major, unsigned short minor, const char* msg, unsigned short size)

#endif