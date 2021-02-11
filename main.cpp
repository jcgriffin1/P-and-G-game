//Developers: jcgriffin1 and 
//Build Date: Wed 10 2021

#include <iostream>
#include <asio.hpp>
#include <SDL2/SDL.h>
using namespace std;

extern "C" {
    #include <lua.h>
    #include <lualib.h>
    #include <lauxlib.h>
}
#include "lua_cpp_func.h"

lua_State* L;

int main ()
{
    L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L, "test.lua");
}