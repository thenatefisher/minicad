miniCad Demonstration Application
=======

This application demonstrates the concepts of object-oriented design, pointers, unit tests, polymorphism and clean coding convention. In addition, the display (render) logic is isolated from business logic promoting an MVC-type architecture.

Files Included:

    miniCad
        /tests - unit and functional tests
        /include - library .h files
        /src - source .cpp files
        /nbproject - NetBeans IDE build configuration files

To Build:

    $ cd miniCad
    $ make -f nbproject/Makefile-Release.mk dist/Release/GNU-Linux-x86/minicad

To Run:

    $ ./dist/Release/GNU-Linux-x86/minicad


License
=======
miniCad is released under the MIT License.
