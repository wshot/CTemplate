
#include <unistd.h>
#include <memory>
#include <glib.h>
#include <algorithm>
#include <iostream>
#include "adapter/DisplayAdapter.h"

gboolean _timer(gpointer data){
	std::cout << "timer expired" << std::endl;
	return G_SOURCE_CONTINUE;
}

int main(void) {
	GMainLoop *mainLoop = g_main_loop_new(NULL, FALSE);

	g_timeout_add(1000, _timer, NULL);
	g_main_loop_run(mainLoop);
	g_main_loop_unref(mainLoop);
	return 0;
}