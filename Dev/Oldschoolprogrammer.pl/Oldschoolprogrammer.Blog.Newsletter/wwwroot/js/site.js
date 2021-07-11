// Please see documentation at https://docs.microsoft.com/aspnet/core/client-side/bundling-and-minification
// for details on configuring this project to bundle and minify static web assets.

// Write your JavaScript code.
var button = document.getElementById("submit-date-mistery");
var text = document.getElementById("date-mistery");

button.onclick = function() {
    if(text.innerText == Date.now())
    {
        alert("Brawo, zgadłeś/aś!");
    }
    else
    {
        alert("Niestety nie zgadłeś/aś...")
    }
    return null;
}
/*
q = [0, 1];
function H(q)
{
    var first = 2 * (1/sqrt(2) * q[0] + 1/sqrt(2) * q[1]);
    var second = 1/sqrt(2) * (q[0] + q[1]) + -1/sqrt(2) * (q[0] + q[1]);
    return [first, second];
}
var superpos = H(q);
if(Math.random() * 100 > pow(superpos[0], 2))
{
    q = [0, 1];
}
else
{
    q = [1, 0];
}*/