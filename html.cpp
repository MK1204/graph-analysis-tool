#include <stdio.h>
#include "html.h"

namespace snu {
	
	void make_html(char *name, DSResult *result, Plot *plot) {
		FILE *fp = fopen(name, "w");
		// TODO: write in html form
		fclose(fp);
	}

	void make_html(char *name, USResult *result, Plot *plot) {
		FILE *fp = fopen(name, "w");
		// TODO: write in html form
		fclose(fp);
	}
}