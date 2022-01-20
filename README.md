# HDF5 Plugin Demo

This repo tries to show a simple implementation of a printf plugin that stacks on top of the native HDF5 plugin. Whenever a H5FCreate() is called, addtional messages are printed. 

This repo forks from [vol-template](https://github.com/HDFGroup/vol-template).

## Usage
```bash
$: git clone git@github.com:yzanhua/HDF5-plugin-demo.git
$: cd HDF5-plugin-demo
$: bash autogen.sh
$: cd build
$: ../configure --with-hdf5=[path to h5pcc] CPPFALGS=-I[path to mpich include]
$: # ../configure  --with-hdf5=/homes/zhd1108/HDF5/1.13.0/bin/h5pcc CPPFLAGS=-I/homes/zhd1108/MPICH/3.4.2/include
$: make
$: cd test # now inside build/test
$: make check
```

1. source codes of the plugin are at `src/template_vol_connector.c` and `src/template_vol_connector.h`.
2. test codes are at "test/vol_plugin.c" (NOT build/test/vol_plugin.c)
3. outputs are at "build/test/test_vol_plugin.sh.log"

## Current Problem:

In `src/template_vol_connector.c`, I think I am getting line 168 `hid_t under_fapl = H5Pget_vol_info(fapl_id, (void**) &info);` wrong.

