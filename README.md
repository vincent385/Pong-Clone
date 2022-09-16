# Pong

### Building the application
To build the executable file you will first need to get the libraylib.a file by building it from the [raylib official repository](https://github.com/raysan5/raylib)

You can do this with the following commands (assuming you have git):
```powershell
$ Desktop> git clone https://github.com/raysan5/raylib.git
$ cd raylib-master/src
$ mingw32-make PLATFORM=PLATFORM_DESKTOP
```
This should have generated `libraylib.a`

You should now make a new folder called *lib* at the root of the Pong repository you cloned and place the `libraylib.a` file inside of it.

Finally open a new terminal and navigate to the build folder, from there you can run `make` provided you have the g++ compiler and `app.exe` should be produced.


### Credits
This is mostly a project designed to help me learn C++ and raylib.

The credits for this game go to this  [tutorial](https://www.youtube.com/watch?v=LvpS3ILwQNA&t=99s).

I highly recommend you check it out if you want to start learning C++ as it's a great tutorial.
