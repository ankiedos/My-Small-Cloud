@echo off
rem Klasy porozumiewają się, każda wie coś innego.

setlocal EnableDelayedExpansion
setlocal EnableExtensions
set COUNT = 0

for /F "delims= " %%i in (%1) do (
    for %%j in (%%i) do (
        for %%k in (%%j) do (
            set /a COUNT = !COUNT! + 1
        )
    )
)

@echo !COUNT!
endlocal