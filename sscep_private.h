#ifndef __SCEP_PRIVATE__
#define __SCEP_PRIVATE__

#include "sscep.h"
#include <openssl/evp.h>
#include <openssl/bio.h>
#include <openssl/engine.h>
#include <openssl/crypto.h>
#include <openssl/buffer.h>
#include <openssl/asn1.h>
#include <openssl/x509.h>
#include <openssl/x509v3.h>
#include <openssl/pkcs7.h>
#include <openssl/err.h>
#include <openssl/pem.h>
#include <openssl/rand.h>
#include <openssl/md5.h>
#include <openssl/objects.h>
#include <openssl/asn1_mac.h>
#include <openssl/ssl.h>
/* Global variables */

/* Program name */
char *pname;

/* Network timeout */
int timeout;

/* Certificates, requests, keys.. */
X509 *cacert;
X509 *encert;
X509 *localcert;
X509 *othercert;
X509 *renewal_cert;
X509_REQ *request;
EVP_PKEY *rsa;
EVP_PKEY *renewal_key;
X509_CRL *crl;
FILE *cafile;
FILE *reqfile;
FILE *otherfile;
FILE *crlfile;

/* Fingerprint, signing and encryption algorithms */
EVP_MD *fp_alg;
EVP_MD *sig_alg;
EVP_CIPHER *enc_alg;

/* OpenSSL OID handles */
int nid_messageType;
int nid_pkiStatus;
int nid_failInfo;
int nid_senderNonce;
int nid_recipientNonce;
int nid_transId;
int nid_extensionReq;

/* Global pkistatus */
int pkistatus;

/* End of Global variables */
#endif 
