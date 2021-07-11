var postac = document.getElementById("Postac");
var blok = document.getElementById("Blok");
var i = 0;

function jump()
{
    if(postac.classList == "animate") {return}
    postac.classList.add("animate");
    setTimeout(function(){postac.classList.remove("animate");}, 300);
}
var checkTouch = setInterval(function(){
let characterTop = parseInt(window.getComputedStyle(postac).getPropertyValue("top"));
    let blockLeft = parseInt(window.getComputedStyle(blok).getPropertyValue("left"));
    if(blockLeft < 20 && blockLeft > -20 && characterTop + 50 >= 480){
        blok.style.animation = "none";
        alert("Koniec Gry! Twoj wynik to: " + Math.floor(i/100));
        i=0;
        blok.style.animation = "block 1s infinite linear";
    }
    else{
        i++;
        document.getElementById("punkty").innerHTML = Math.floor(i/100);
    }
}, 10)