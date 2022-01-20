# HDF5 VOL connector template

This is a template for creating an HDF5 virtual object layer (VOL) connector.

Copy this code into your own repository and modify the source, test, and build files as needed to implement your own functionality.

The code included in the source directory builds an "empty" VOL connector which has no functionality aside from being capable of registration. Although lacking as a "real" VOL connector, this shell can still serve as a useful test of whether dynamic plugin loading is working.

NOTE: This template targets HDF5 1.13.0. The VOL API in HDF5 1.12.x is no longer supported for VOL connector development.


## Getting started

You will need a few things to build the code in this repository:

* HDF5 1.13.0 or later
* CMake (3.9 or later) or the Autotools (autoconf 2.69 or later and matching automake, etc.)

### Autotools Builds

1) The first thing you need to do is run the autogen.sh script located in the source root. This will run the autotools and generate the build files.

2) Next, switch to your build directory and run configure. You might need to specify the path to a VOL-enabled HDF5 (version 1.13.0 or later) using the --with-hdf5 option. Oddly, --with-hdf5 needs you to point to the h5cc file. This will be improved in the future.

3) Once configured, you should be able to make and build. Switching to the test directory and running 'make check' will run the test script.

### CMake Builds

1) Run ccmake or the CMake GUI and point it at a VOL-enabled HDF5 installation. You may need to switch to see HDF5\_DIR, which you'll need to set to the share/cmake directory of your install. Configure and generate.

2) Build the software using 'make', etc.

3) Run the test program using 'make test', 'ctest .', etc.
