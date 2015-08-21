@echo off
call where /q blender
if not %errorlevel% == 0 (
	echo Please install Blender and make sure it's on the system path!
	pause
	goto :eof
)
git submodule update --init --recursive
mkdir build
pushd build
cmake .. -G "Visual Studio 14 2015 Win64"
popd