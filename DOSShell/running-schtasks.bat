@echo off

setlocal EnableDelayedExpansion

set FOUND = 0
schtasks /Query | find "Running" > %~dp0\tmp.txt
for /F "delims= " %%i in (%~dp0\tmp.txt) do (
    for %%j in (%%i) do (
        for %%k in (%%j) do (
            set /A FOUND = !FOUND! + 1
            echo Iteration
        )
    )
)
schtasks /Query | find "Running"

echo Number of tasks: !FOUND!
del %~dp0\tmp.txt