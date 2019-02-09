# Lua without IO

This is a customized version of Lua that does not do any IO.

You can toggle whether it's built with IO support in the `luaconfig.h` header,
where you can undefine the `LUA_NOIO` flag.

Additionally, you'd need to change the `src/Makefile` to build `lua` and
`luac`, as they use a lot of the Lua IO functionality.

`src/noio` is a test program that checks the no-IO setup.

## License 

Lua is free software and licensed under the MIT License by 
[PUC-Rio](http://www.puc-rio.br/index.html).

All modifications herein are also licensed under the MIT License.

Read the full text in the LICENSE.txt file.
