# Lua without IO

This is a customized version of Lua that does not do any IO.

You can toggle whether it's built with IO support in the `luaconfig.h` header,
where you can undefine the `LUA_NOIO` flag.

Additionally, you'd need to change the `src/Makefile` to build `lua` and
`luac`, as they use a lot of the Lua IO functionality.

`src/noio` is a test program that checks the no-IO setup.

Users of the no-IO version should probably implement these macros to provide
output for their no-IO system, in `lauxlib.h`. They are noop by default.

```c
/* print a string */
#if !defined(lua_writestring)
#define lua_writestring(s,l) {}
#endif

/* print a newline and flush the output */
#if !defined(lua_writeline)
#define lua_writeline() {}
#endif

/* print an error message */
#if !defined(lua_writestringerror)
#define lua_writestringerror(s,p) {}
#endif
```

## License 

Lua is free software and licensed under the MIT License by 
[PUC-Rio](http://www.puc-rio.br/index.html).

All modifications herein are also licensed under the MIT License.

Read the full text in the LICENSE.txt file.
