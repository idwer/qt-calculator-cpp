A simple calculator written in C++
----------------------------------

Requirements
------------
This has been developed on Ubuntu 20 LTS, using Qt Creator 4.11.0 and Qt 5.12.8.

Install qt5-default, qt5-qmake-bin?
Optionally install Qt Creator.

To build this program, run
```
cmake -B build . && make -C build
```

Adding new features using Qt Creator
-----------------------------------
You might run into the situation where code completion in Qt Creator won't work.
A workaround is to disable the ClangCodeModel plugin: https://forum.qt.io/topic/107498/code-completion-is-not-working-in-qtcreator/6
