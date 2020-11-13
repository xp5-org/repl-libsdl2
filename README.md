What is SDL? From https://wiki.libsdl.org/Introduction - 
```Simple DirectMedia Layer is a cross-platform development library designed to provide low level access to audio, keyboard, mouse, joystick, and graphics hardware via OpenGL and Direct3D```

```


```
demo program included found at https://gist.github.com/jordandee/94b187bcc51df9528a2f



How to compile & run
```
# g++ sdl2_opengl.cpp -o myprogram -l SDL2 -lGL 
# ./myprogram 
```



Script checks if libsdl2 is installed at 
/usr/lib/x86_64-linux-gnu/libSDL2-2.0.so.0

```
# dpkg -L libsdl2-2.0-0
/.
/usr
/usr/lib
/usr/lib/x86_64-linux-gnu
/usr/lib/x86_64-linux-gnu/libSDL2-2.0.so.0.8.0
/usr/share
/usr/share/doc
/usr/share/doc/libsdl2-2.0-0
/usr/share/doc/libsdl2-2.0-0/BUGS.txt
/usr/share/doc/libsdl2-2.0-0/CREDITS.txt
/usr/share/doc/libsdl2-2.0-0/README-SDL.txt
/usr/share/doc/libsdl2-2.0-0/README.txt
/usr/share/doc/libsdl2-2.0-0/changelog.Debian.gz
/usr/share/doc/libsdl2-2.0-0/copyright
/usr/lib/x86_64-linux-gnu/libSDL2-2.0.so.0
````

if not, then install these packages:
```
libsdl-image1.2-dev 
libsdl-mixer1.2 
libsdl1.2debian 
libsdl-ttf2.0-0 
libsdl2-2.0-0 
libsdl1.2-dev 
libsdl-ttf2.0-dev 
libsdl2-image-2.0-0 
libsdl-image1.2 
libsdl2-dev 
libsdl-mixer1.2-dev
```


Tutorials:

http://www.sdltutorials.com/tutorials





todo:
clang doesnt work yet in this environment, i was unable to compile some public github projects as clang could not find the library paths despite having correct flags:

example question
https://stackoverflow.com/questions/62668128/c-program-using-sdl2-will-not-compile-with-clang