/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0 */

#ifndef PB_SENDDATA_PB_H_INCLUDED
#define PB_SENDDATA_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _Data2send {
    float data1;
    float data2;
    float data3;
    pb_callback_t data4;
} Data2send;


/* Initializer values for message structs */
#define Data2send_init_default                   {0, 0, 0, {{NULL}, NULL}}
#define Data2send_init_zero                      {0, 0, 0, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define Data2send_data1_tag                      1
#define Data2send_data2_tag                      2
#define Data2send_data3_tag                      3
#define Data2send_data4_tag                      4

/* Struct field encoding specification for nanopb */
#define Data2send_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, FLOAT,    data1,             1) \
X(a, STATIC,   SINGULAR, FLOAT,    data2,             2) \
X(a, STATIC,   SINGULAR, FLOAT,    data3,             3) \
X(a, CALLBACK, SINGULAR, STRING,   data4,             4)
#define Data2send_CALLBACK pb_default_field_callback
#define Data2send_DEFAULT NULL

extern const pb_msgdesc_t Data2send_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define Data2send_fields &Data2send_msg

/* Maximum encoded size of messages (where known) */
/* Data2send_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
