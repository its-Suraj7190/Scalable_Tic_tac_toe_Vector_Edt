@echo off
echo ==========================
echo Building Tic_tac_toe...
echo ==========================

g++ -Iincludes -c src/main.cpp
if errorlevel 1 goto error

g++ -Iincludes -c src/board.cpp
if errorlevel 1 goto error

g++ -Iincludes -c src/Input.cpp
if errorlevel 1 goto error

g++ -Iincludes -c src/Tic_tac_toe.cpp
if errorlevel 1 goto error

g++ main.o board.o Input.o Tic_tac_toe.o -o Tic_tac_toe.exe
if errorlevel 1 goto error

echo.
echo ===== Build Successful =====
echo.

.\Tic_tac_toe.exe
goto end

:error
echo.
echo ===== Build Failed =====

:end
pause