<style>
/* pre
{
    font-family: "Cascadia Code PL";
} */
.cilr-keyword
{
    color: blue;
    font-style: bold;
}
.cilr-comment
{
    color: darkgreen;
}
.cilr-num
{
    color: gold;
}
.cilr-func { color: green; }
</style>
# CILR
CILR is *Common Intermediate Language Representation*
Example:
<pre><code><code><div><span class="hljs-keyword">DEF</span>
    <span class="hljs-symbol">main</span> <span class="hljs-number">0</span>
        <span class="hljs-symbol">PRINT</span>
            ADD
                <span class="hljs-keyword">LOAD</span> <span class="hljs-number">4</span>
                <span class="hljs-keyword">LOAD</span> <span class="hljs-number">5</span> <span class="hljs-comment">; Note that there are spaces, not tabs</span>
            <span class="hljs-symbol">NEWLINE</span>
        <span class="hljs-keyword">RET</span>
            <span class="hljs-keyword">LOAD</span> <span class="hljs-number">0</span>
</div></code></code></pre>
Is equal to:
```
print(4 + 5, "\n");
```
Or to LLVM's IR:
```llvm
%1 = add i32 4 i32 5
%2 = string %1
%3 = add %2 "\n"
print %3
```

# Basics

One of the most important CILR's opcodes is `LOAD`, beause it is used to "load" literals.
Examples:
<pre><code><code><div><span class="hljs-keyowrd">LOAD</span> <span class="hljs-number">1</span>
</div></code></code></pre>
The next one is `PRINT`. It prints everything.
Examples:
<pre><code><code><div><span class="hljs-symbol">PRINT</span>
    <span class="hljs-keyword">LOAD</span> <span class="hljs-number">1</span>
</div></code></code></pre>
If you want to pass arguments to something, you must do a new line and 4-space indent (except `LOAD`).

## RET
Yeah, `RET` is a unary function [More on nullary `RET` you can find in the section [Registers](#Registers)]
# Math
You can do those arithmetic operations: `INC`, `DEC`, `ADD`, `SUB`, `MULT`, `DIV`, `POW`, `ROOT`.
`ADD` and `SUB` are implemented like loops, which are doing `INC` or `DEC`.
Examples:
<pre><code><code><div>
<span class="hljs-symbol">PRINT</span>
    ADD
        SUB
            <span class="hljs-keyword">LOAD</span> <span class="hljs-number">1</span>
            <span class="hljs-keyword">LOAD</span> <span lass="hljs-number">4<span>
        MULT
            <span class="hljs-keyword">LOAD</span> <span class="hljs-number">1</span>
            <span class="hljs-keyowrd">LOAD</span> <span class="hljs-number">4</span>
    <span class="hljs-symbol">NEWLINE</span>
</div></code></code></pre>
Which means the same as
```py
print((1 - 4) + (1 * 4), "\n");
```