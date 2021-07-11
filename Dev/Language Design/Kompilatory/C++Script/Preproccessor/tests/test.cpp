#include<iostream>
#include "..\include\CppS.hpp"

function sum(var a, var b) begin
    return a + b;
end
entrypoint main() begin
    print "Hello World from simple preproccessed C++ Script!\n";
    log "Sum(2, 1): ";
    log sum(2, 1);
    log "\n";
    return 0;
end