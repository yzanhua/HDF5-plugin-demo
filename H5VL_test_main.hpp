#pragma once

#include <H5VLconnector.h>

#define H5VL_test_NAME	 "test"
#define H5VL_test_VALUE	 3333 /* VOL connector ID */
#define H5VL_test_VERSION 1

herr_t H5VL_test_init (hid_t vipl_id);