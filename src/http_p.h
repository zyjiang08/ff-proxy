#include <stdbool.h>
#include "request.h"

#ifndef FF_HTTP_P_H
#define FF_HTTP_P_H

#define FF_HTTP_HOST_HEADER_MAX_SEARCH_LENGTH 8096
#define FF_HTTP_RESPONSE_BUFF_SIZE 4096
#define FF_HTTP_RESPONSE_MAX_WAIT_SECS 10

bool ff_http_send_request_unencrypted(struct ff_request *request, char *host_name);

bool ff_http_send_request_tls(struct ff_request *request, char *host_name);

char *ff_http_get_destination_host(struct ff_request *request);


#endif