#include <iostream>
using namespace std;

extern "C" {
    #include <lua.h>
    #include <lualib.h>
    #include <lauxlib.h>
}

lua_State* L;

int main ()
{
    L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L, "test.lua");
}