#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let a, b, c;
    while (notQuit) {
        a = mathMouseX;
        b = mathMouseY;
        c = sqrt(a * a + b * b);
        clear(140);
        
        textSize(50);
        text("’ê•Ó = " + a,0,60);
        text("‚‚³ = " + b, 0, 120);
        text("Î•Ó = " + c, 0, 180);

        mathAxis(4.1);

        stroke(3, 252, 227);
        strokeWeight(4);
        mathLine(0, 0, a, b);//Î•Ó
        mathLine(0, 0, a, 0);//’ê•Ó
        mathLine(a, 0, a, b);//‚‚³
    }
}
/*
#include"libOne.h"
void gmain() {
    window(1000, 1000);
    let a, b, c;
    while (notQuit) {
        //’ê•Óa‚Æ‚‚³b‚©‚çÎ•Ó‚Ì’·‚³c‚ğ‹‚ß‚é
        a = mathMouseX;
        b = mathMouseY;
        c = sqrt( a * a + b * b );

        clear(140);
        //XY²
        mathAxis(4.1);
        //’¼ŠpOŠpŒ`
        stroke(160, 200, 250);
        strokeWeight(4);
        mathLine(0, 0, a, b);
        mathLine(0, 0, a, 0);
        mathLine(a, 0, a, b);
        //•¶š
        textSize(50);
        fill(255, 200, 200);
        text("’ê•Ó=" + a, 0, 60);
        text("‚‚³=" + b, 0, 120);
        fill(255, 255, 200);
        text("Î•Ó=" + c, 0, 180);
    }
}
*/