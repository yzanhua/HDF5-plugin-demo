#include <hdf5.h>
#include <mpi.h>

#include "H5VL_test_main.hpp"

const H5VL_class_t H5VL_log_g = {H5VL_test_VERSION,                   /* version      */
                                 (H5VL_class_value_t)H5VL_test_VALUE, /* value        */
                                 H5VL_test_NAME,                      /* name         */
                                 0,                                  /* Version # of connector                   */
                                 0,                                  /* capability flags */
                                 NULL,                      /* initialize   */
                                 NULL,                  /* terminate    */
                                 H5VL_log_info_g,
                                 H5VL_log_wrap_g,
                                 H5VL_log_attr_g,
                                 H5VL_log_dataset_g,
                                 H5VL_log_datatype_g,
                                 H5VL_log_file_g,  /* file_cls */
                                 H5VL_log_group_g, /* group_cls */
                                 H5VL_log_link_g,
                                 H5VL_log_object_g,
                                 H5VL_log_introspect_g,
                                 {
                                     /* request_cls */
                                     NULL, /* wait */
                                     NULL, /* notify */
                                     NULL, /* cancel */
                                     NULL, /* specific */
                                     NULL, /* optional */
                                     NULL  /* free */
                                 },
                                 H5VL_log_blob_g,
                                 H5VL_log_token_g,
                                 H5VL_log_optional
};
