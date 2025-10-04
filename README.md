# my_AVR-Template

##### Template für AVR-MCUs unter VScode/PlatformIO (ARDUINO-C++/Native-C).

1. Zunächst ein normales ARDUINO-Projekt unter Platform-IO mit gewünschtem AVR-Zielprozessor anlegen.
2. Dann die platformio.ini mit der gleichnamigen Datei aus \Template ersetzen.
3. Je nach verwendete Platform die darin enthaltenen Quelltextbereiche dis-/enablen und MCU anpassen.
4. Bei nativer C-Programmiereung die erzeugte main.cpp löschen und durch main.c aus \Template ersetzen.
5. Bei ARDUINO-Framework die mai.cpp mit den Inhalten aus der \Template\main.cpp anpassen oder auch ganz ersetzen.

