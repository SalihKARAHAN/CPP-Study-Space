REM 18.04.2020 Salih KARAHAN <salihkarahan@outlook.com>

ECHO OFF
CLS
REM https://stackoverflow.com/a/31770411/2964774
CHCP 65001 

SET CURRENT_DIRECTORY=%CD%
SET SECTION_CODE=%1
::SET COMMAND=DIR /B | FIND "%SECTION_CODE%"


FOR /D %%d IN ("%SECTION_CODE%.*") DO (
    CLS
    ECHO %%d
    CD %%d
    REM:: https://stackoverflow.com/questions/3178342/compiling-a-c-program-with-gcc
    g++ *.cpp -o Program_%SECTION_CODE%.bin -lstdc++
    ECHO Uygulama Çıktısı:
    ECHO.
    ECHO ======================== START EXECUTION OF BINARY FILE ========================

    Program_%SECTION_CODE%.bin

    ECHO =============================== END OF EXECUTION ===============================
    ECHO.
    DEL *.bin
    CD ..
)