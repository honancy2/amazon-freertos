#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWTCCAkGgAwIBAgIUJ8STcLugCfNl+fjLACHC2VXapUAwDQYJKoZIhvcNAQEL\n"\
"BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n"\
"SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIyMDgwNzAxNTEw\n"\
"M1oXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n"\
"ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBAM6LUmcYglLyMpzi0f46\n"\
"aSrCUUUChef8UAxYhX8WSDosFBOW6PAB8INAGxXEDg9OswOavEJRGCCHR9u/lb1h\n"\
"qD30CLpcCetYmB4NGDqNFxPocogPsJRS3tH6vxPeesUhZ1/3yPwbATRG5GpUivZW\n"\
"x28Ioq47oPz/+5b9e+C6Uvg7Jr5y5Hw0n4s2Sa+jczBqt0diFyzAd4EXQmow2HXZ\n"\
"h914xJfDLExf6exbHr3gG4X1kwh7amv4MfBljG9AglZJhTqXIzqskUZ7R8NniKAj\n"\
"G9y8EVMUILaiT+8E6msLeMntixqU5UZ8FP7GKTu7ZP82CydgdOMjw7VcxaAAGZSh\n"\
"U5kCAwEAAaNgMF4wHwYDVR0jBBgwFoAUypkYDYUFPWEUeFC62gTj7tzfmrIwHQYD\n"\
"VR0OBBYEFCtryfYEbZXWdEshOJ5v86IVCLqqMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n"\
"AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQCLER75g/y8oXpti8HCEdRg/PLW\n"\
"xzNDl8by1Pc4OrF0j2sUqgjyPDty5iKYR8eT0sIhRXm9sgI0CwvpCBs2X+htTJ1f\n"\
"vHGYi4ei6i5UdKBobg+hjarhxxbxC2pqITymMebXwxrkId90l+wJs8l7F3QvJObd\n"\
"U2JC0ZY8hpx/Ie3GJIMEfBa0MOfi/61DNtVV4p/oeegPo2ABNT07NYa927rbdyjL\n"\
"Xg028DgyLZNKo+b+Kb/KbobrVFdl16yNOXE4H0Y2MLcMl83xfad2XHcvpitlFr8T\n"\
"9QRrpRHNyDbF5bFE8dF1I4T0fD1gxLsgKoT48fAnjKWL71Y/O+hiwwzV1esN\n"\
"-----END CERTIFICATE-----"

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEpAIBAAKCAQEAzotSZxiCUvIynOLR/jppKsJRRQKF5/xQDFiFfxZIOiwUE5bo\n"\
"8AHwg0AbFcQOD06zA5q8QlEYIIdH27+VvWGoPfQIulwJ61iYHg0YOo0XE+hyiA+w\n"\
"lFLe0fq/E956xSFnX/fI/BsBNEbkalSK9lbHbwiirjug/P/7lv174LpS+DsmvnLk\n"\
"fDSfizZJr6NzMGq3R2IXLMB3gRdCajDYddmH3XjEl8MsTF/p7FseveAbhfWTCHtq\n"\
"a/gx8GWMb0CCVkmFOpcjOqyRRntHw2eIoCMb3LwRUxQgtqJP7wTqawt4ye2LGpTl\n"\
"RnwU/sYpO7tk/zYLJ2B04yPDtVzFoAAZlKFTmQIDAQABAoIBACfDaLzSWhyv5hCQ\n"\
"Fk90XVTPDihUAQWVbK/DxwedeZBBdigDUJsMNIqAJ/a7xN0rkIksG/xEcnmosavb\n"\
"qW9JQsOSnK+MEpjNeJOof7ad/QhnIs2Q/7S+c4lHVcv0c/xJnwY5xObMKCIxV74k\n"\
"wpAESubUacVTU34BpiT+bf/ovxpsqC811f9uYoJEDsI4GSupUwn9eeceSuj3J1H+\n"\
"jExR5WcaiVCu8pu0i0hs/uIx4BigiObDB5tfsKXfUzxSbJE6E8Faj6rpGLif4uO6\n"\
"lf1dRkX+a8H8uLjZzRBc3GKYD697yzknbvu95mebAffye9lN5lTMOVQa8Q16yI2c\n"\
"HZomnEUCgYEA8wl2hdrhsMfpr81hXFiu9x2JjVjRiwJwT6uaNMhVv/uJ1SvhmnDu\n"\
"MvgsEfblMMWA7FCdrPuviGJ9J5/btUBlYCo0i+KGjdJxRyYK66L0L76hPMW02TY4\n"\
"GAjk/plL0LGzDtW28Ecn4WzPIQsKomUIfUDJJrKcepz+F6DruwFWl0sCgYEA2Y+S\n"\
"C542OTGqcTeFHqjFqITltXWzweFcs3Tq9YKofb4aL2lw5JtyON8yvIavjcCLWFoW\n"\
"OFkGfvQ7Mgf9XVCENq/10MvY6yv01FRJm217ydzMFumurihn/PkjVcPSEwhaFUHe\n"\
"/TDmY3b9t1CY+/ymnMJcqh4EtzNwrSLgxHd9fisCgYEAnvXUiM5WCZtoFG1/vbff\n"\
"kI/INSQfwg0xSlrR/K3/sBck2sHdyHcOxVWe9Y0H8PNtVKORzd+8ura4Z19eg9l/\n"\
"tPtF7SyXl1FKeB/AysiFcGj96tLha6TT4ZyHsqKvfOuNUymjgtr3kbDqdRFUvkzY\n"\
"1Zu3NVFjmarvYqMFLAY/DasCgYEAhS9XALXCDBFTfiu22qYHGrsAxK1hdfc4gMO6\n"\
"csGh1Bhkf1HVQp3GtvosXS02m1ib9WJw593YFC//bQlnGZEI31Go8kFYcd9e6f0P\n"\
"co77kQASEJTN0t/5iOwbrY1LNUuPmiPRFr6wy4M0ntxAS0LH3H8/qwTlbiGXgOYx\n"\
"IxTjRjECgYA4k2nCIbBn0vcFkpCQJlTGPo0JxUuYnXBMqTIzKk2q19vCztSGtyvd\n"\
"ZK7KtzmllQ2DHkbM3rOjQFWYTF94SBuGNh0LvUzG7mHQ2cvcqPqEdje/JSxwHL8W\n"\
"YbADDZgwYoHEKQuP7sDLh2CVsdHJxGXmyOAKNt2V5hvx/mvwP0J3wA==\n"\
"-----END RSA PRIVATE KEY-----"

/*
 * PEM-encoded Just-in-Time Registration (JITR) certificate (optional).
 *
 * If used, must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  ""


#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
