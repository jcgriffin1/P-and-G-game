--Developers: jcgiffin and 1 other
--Build Date: Wed Feb 10 2021
--Purpose:Load additional lua files for ai modules and asio code
require "ai.ai_loader"
io.write("[LUA]:Hello World\n")

function Preloadfile(target)
    io.write("Set up", target)
end

