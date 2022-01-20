#include <hdf5.h>
#include <stdlib.h>

#include "template_vol_connector.h"

/* herr_t values from H5private.h */
#define SUCCEED 0
#define FAIL (-1)
#define FILE "my_test.h5"

int main(void) {
    hid_t fapl_id;
    hid_t plugin_id;

    fapl_id = H5Pcreate(H5P_FILE_ACCESS);
    plugin_id = H5VLregister_connector_by_name(TEMPLATE_VOL_CONNECTOR_NAME, H5P_DEFAULT);
    H5Pset_vol(fapl_id, plugin_id, NULL);
    hid_t file, group; /* Handles */

    file = H5Fcreate(FILE, H5F_ACC_TRUNC, H5P_DEFAULT, fapl_id);
    // H5Fclose (file);
    exit(EXIT_SUCCESS);

} /* end main() */
