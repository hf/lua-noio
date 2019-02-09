#include "lua.h"
#include "lprefix.h"
#include "luaconf.h"
#include "lauxlib.h"
#include "lualib.h"

int main() {
  lua_State* L = luaL_newstate();
  lua_close(L);

  return 0;
}
