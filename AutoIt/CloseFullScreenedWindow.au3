#include<MsgBoxConstants.au3>
HotKeySet("!x", "exitapp")

;while 1
;MsgBox($MB_OK, "title", "Hello, World!" & @CRLF & @CRLF & @CRLF & "(Press Alt + X nd OK to exit)")
;wend
;$X = MouseGetPos()[0]
;$Y = MouseGetPos()[1]
;$speed = 10
;While 1
;MouseMove($X + $Y, Abs($Y - $X), $speed)
;MouseMove(Abs($X - $Y), $Y + $X, $speed)
;If Not $speed == 90 Then
;   $speed = $speed + 10
;EndIf
;$X = MouseGetPos()[0]
;$Y = MouseGetPos()[1]
;WEnd
MouseMove(1500, 0, 20)
func ExitApp()
   exit
endfunc
