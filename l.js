function playt2(value){
    var x = document.getElementById(value);
    if(x.paused){
        x.play();
    }else{x.pause();}
}