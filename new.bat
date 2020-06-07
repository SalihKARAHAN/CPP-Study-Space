ECHO OFF
CHCP 65001
SETLOCAL EnableDelayedExpansion 
REM:: SETLOCAL EnableDelayedExpansion ifadesinin neden kullanıldığı aşağıdaki linkte yer alıyor: numara formatlamak için
REM:: https://stackoverflow.com/questions/9430642/win-bat-file-how-to-add-leading-zeros-to-a-variable-in-a-for-loop
CLS
SET TEMPLATE_FILE=".templates\main.cpp"

SET NEW_SECTION_NAME=%1
SET /P CURRENT_NUMBER=<.workspace\counter
SET /A NEXT_NUMER=%CURRENT_NUMBER% + 1
SET "DISPLAY_NUMBER_FORMATTER=000000%NEXT_NUMER%"
SET DISPLAY_NUMBER=!DISPLAY_NUMBER_FORMATTER:~-3!


ECHO %NEW_SECTION_NAME%
ECHO %CURRENT_NUMBER%
ECHO %NEXT_NUMER%
ECHO %DISPLAY_NUMBER%

SET DIRECTORY_NAME=%DISPLAY_NUMBER%.%NEW_SECTION_NAME%
MKDIR %DIRECTORY_NAME%
COPY %TEMPLATE_FILE% %DIRECTORY_NAME%\%NEW_SECTION_NAME%.cpp
ECHO %NEXT_NUMER%
ECHO %NEXT_NUMER% > .workspace\counter