export DISPLAY=:0.0

if [ ! -f /usr/lib/x86_64-linux-gnu/libSDL2-2.0.so.0 ]
then
  printf '\n%s\n' "library not installed, installing a bunch of libsdl stuff"
  install-pkg libsdl-image1.2-dev libsdl-mixer1.2 libsdl1.2debian libsdl-ttf2.0-0 libsdl2-2.0-0 libsdl1.2-dev libsdl-ttf2.0-dev libsdl2-image-2.0-0 libsdl-image1.2 libsdl2-dev libsdl-mixer1.2-dev
fi

printf 'libraries are installed \n 
type ./myprogram to run demo \n'
