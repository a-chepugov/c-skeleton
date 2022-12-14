#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lib/NS.h"

#include "lib/log.h"
#include "lib/guards.h"


int main(int argc, char **argv) {
	DBG("VERSION: %s\n", __VERSION__);
	DBG("STDC_VERSION: %ld\n", __STDC_VERSION__);
	DBG("SIZE_WIDTH: %d\n", __SIZE_WIDTH__);
	DBG("INT_WIDTH: %d\n", __INT_WIDTH__);
	DBG("BYTE_ORDER: %d\n", __BYTE_ORDER__);

	for (int i = 0; i < argc; i++) {
		printf("%d: %s\n", i, argv[i]);
	}
	FUSE(argc > 3, EXIT_FAILURE);

	return EXIT_SUCCESS;
}

