/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "rrlp-components.asn"
 * 	`asn1c -gen-PER -fnative-types`
 */

#ifndef	_SystemInfoAssistData_R98_ExpOTD_H_
#define	_SystemInfoAssistData_R98_ExpOTD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SeqOfSystemInfoAssistBTS-R98-ExpOTD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInfoAssistData-R98-ExpOTD */
typedef struct SystemInfoAssistData_R98_ExpOTD {
	SeqOfSystemInfoAssistBTS_R98_ExpOTD_t	 systemInfoAssistListR98_ExpOTD;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInfoAssistData_R98_ExpOTD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInfoAssistData_R98_ExpOTD;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInfoAssistData_R98_ExpOTD_H_ */
#include <asn_internal.h>
