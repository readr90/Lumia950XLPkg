// ChipInfo Shim
// This is intended to maintain compatibility with Qualcomm binary module.
// Do not invoke if not necessary.

#ifndef __CHIPINFO_SHIM_H__
#define __CHIPINFO_SHIM_H__

typedef struct _EFI_CHIPINFO_SHIM_PROTOCOL EFI_CHIPINFO_SHIM_PROTOCOL;

#define EFI_CHIPINFO_PROTOCOL_REVISION 0x0000000000010000
#define EFI_CHIPINFO_PROTOCOL_GUID \
   { 0x61224FBE, 0xB240, 0x4D53, { 0xB6, 0x61, 0xA9, 0xA1, 0xF3, 0x43, 0xB0, 0x5C } }

extern EFI_GUID gEfiChipInfoShimProtocolGuid;

/** Chip identification. */
/* Any new IDs must be added to the end. */
typedef enum
{
	/** @cond */
	EFICHIPINFO_ID_UNKNOWN = 0,  /**< Unknown chip. */
	EFICHIPINFO_ID_MDM1000 = 1,  /**< MDM1000 chip. */
	EFICHIPINFO_ID_ESM6235 = 2,  /**< ESM6235 chip. */
	EFICHIPINFO_ID_QSC6240 = 3,  /**< QSC6240 chip. */
	EFICHIPINFO_ID_MSM6245 = 4,  /**< MSM6245 chip. */
	EFICHIPINFO_ID_MSM6255 = 5,  /**< MSM6255 chip. */
	EFICHIPINFO_ID_MSM6255A = 6,  /**< MSM6255A chip. */
	EFICHIPINFO_ID_MSM6260 = 7,  /**< MSM6260 chip. */
	EFICHIPINFO_ID_MSM6246 = 8,  /**< MSM6246 chip. */
	EFICHIPINFO_ID_QSC6270 = 9,  /**< QSC6270 chip. */
	EFICHIPINFO_ID_MSM6280 = 10, /**< MSM6280 chip. */
	EFICHIPINFO_ID_MSM6290 = 11, /**< MSM6290 chip. */
	EFICHIPINFO_ID_MSM7200 = 12, /**< MSM7200 chip. */
	EFICHIPINFO_ID_MSM7201 = 13, /**< MSM7201 chip. */
	EFICHIPINFO_ID_ESM7205 = 14, /**< ESM7205 chip. */
	EFICHIPINFO_ID_ESM7206 = 15, /**< ESM7206 chip. */
	EFICHIPINFO_ID_MSM7200A = 16, /**< MSM7200A chip. */
	EFICHIPINFO_ID_MSM7201A = 17, /**< MSM7201A chip. */
	EFICHIPINFO_ID_ESM7205A = 18, /**< ESM7205A chip. */
	EFICHIPINFO_ID_ESM7206A = 19, /**< ESM7206A chip. */
	EFICHIPINFO_ID_ESM7225 = 20, /**< ESM7225 chip. */
	EFICHIPINFO_ID_MSM7225 = 21, /**< MSM7225 chip. */
	EFICHIPINFO_ID_MSM7500 = 22, /**< MSM7500 chip. */
	EFICHIPINFO_ID_MSM7500A = 23, /**< MSM7500A chip. */
	EFICHIPINFO_ID_MSM7525 = 24, /**< MSM7525 chip. */
	EFICHIPINFO_ID_MSM7600 = 25, /**< MSM7600 chip. */
	EFICHIPINFO_ID_MSM7601 = 26, /**< MSM7601 chip. */
	EFICHIPINFO_ID_MSM7625 = 27, /**< MSM7625 chip. */
	EFICHIPINFO_ID_MSM7800 = 28, /**< MSM7800 chip. */
	EFICHIPINFO_ID_MDM8200 = 29, /**< MDM8200 chip. */
	EFICHIPINFO_ID_QSD8650 = 30, /**< QSD8650 chip. */
	EFICHIPINFO_ID_MDM8900 = 31, /**< MDM8900 chip. */
	EFICHIPINFO_ID_QST1000 = 32, /**< QST1000 chip. */
	EFICHIPINFO_ID_QST1005 = 33, /**< QST1005 chip. */
	EFICHIPINFO_ID_QST1100 = 34, /**< QST1100 chip. */
	EFICHIPINFO_ID_QST1105 = 35, /**< QST1105 chip. */
	EFICHIPINFO_ID_QST1500 = 40, /**< QST1500 chip. */
	EFICHIPINFO_ID_QST1600 = 41, /**< QST1600 chip. */
	EFICHIPINFO_ID_QST1700 = 42, /**< QST1700 chip. */
	EFICHIPINFO_ID_QSD8250 = 36, /**< QSD8250 chip. */
	EFICHIPINFO_ID_QSD8550 = 37, /**< QSD8550 chip. */
	EFICHIPINFO_ID_QSD8850 = 38, /**< QSD8850 chip. */
	EFICHIPINFO_ID_MDM2000 = 39, /**< MDM2000 chip. */
	EFICHIPINFO_ID_MSM7227 = 43, /**< MSM7227 chip. */
	EFICHIPINFO_ID_MSM7627 = 44, /**< MSM7627 chip. */
	EFICHIPINFO_ID_QSC6165 = 45, /**< QSC6165 chip. */
	EFICHIPINFO_ID_QSC6175 = 46, /**< QSC6175 chip. */
	EFICHIPINFO_ID_QSC6185 = 47, /**< QSC6185 chip. */
	EFICHIPINFO_ID_QSC6195 = 48, /**< QSC6195 chip. */
	EFICHIPINFO_ID_QSC6285 = 49, /**< QSC6285 chip. */
	EFICHIPINFO_ID_QSC6295 = 50, /**< QSC6295 chip. */
	EFICHIPINFO_ID_QSC6695 = 51, /**< QSC6695 chip. */
	EFICHIPINFO_ID_ESM6246 = 52, /**< ESM6246 chip. */
	EFICHIPINFO_ID_ESM6290 = 53, /**< ESM6290 chip. */
	EFICHIPINFO_ID_ESC6270 = 54, /**< ESC6270 chip. */
	EFICHIPINFO_ID_ESC6240 = 55, /**< ESC6240 chip. */
	EFICHIPINFO_ID_MDM8220 = 56, /**< MDM8220 chip. */
	EFICHIPINFO_ID_MDM9200 = 57, /**< MDM9200 chip. */
	EFICHIPINFO_ID_MDM9600 = 58, /**< MDM9600 chip. */
	EFICHIPINFO_ID_MSM7630 = 59, /**< MSM7630 chip. */
	EFICHIPINFO_ID_MSM7230 = 60, /**< MSM7230 chip. */
	EFICHIPINFO_ID_ESM7227 = 61, /**< ESM7227 chip. */
	EFICHIPINFO_ID_MSM7625D1 = 62, /**< MSM7625D1 chip. */
	EFICHIPINFO_ID_MSM7225D1 = 63, /**< MSM7225D1 chip. */
	EFICHIPINFO_ID_QSD8250A = 64, /**< QSD8250A chip. */
	EFICHIPINFO_ID_QSD8650A = 65, /**< QSD8650A chip. */
	EFICHIPINFO_ID_MSM7625D2 = 66, /**< MSM7625D2 chip. */
	EFICHIPINFO_ID_MSM7227D1 = 67, /**< MSM7227D1 chip. */
	EFICHIPINFO_ID_MSM7627D1 = 68, /**< MSM7627D1 chip. */
	EFICHIPINFO_ID_MSM7627D2 = 69, /**< MSM7627D2 chip. */
	EFICHIPINFO_ID_MSM8260 = 70, /**< MSM8260 chip. */
	EFICHIPINFO_ID_MSM8660 = 71, /**< MSM8660 chip. */
	EFICHIPINFO_ID_MDM8200A = 72, /**< MDM8200A chip. */
	EFICHIPINFO_ID_QSC6155 = 73, /**< QSC6155 chip. */
	EFICHIPINFO_ID_MSM8255 = 74, /**< MSM8255 chip. */
	EFICHIPINFO_ID_MSM8655 = 75, /**< MSM8655 chip. */
	EFICHIPINFO_ID_ESC6295 = 76, /**< ESC6295 chip. */
	EFICHIPINFO_ID_MDM3000 = 77, /**< MDM3000 chip. */
	EFICHIPINFO_ID_MDM6200 = 78, /**< MDM6200 chip. */
	EFICHIPINFO_ID_MDM6600 = 79, /**< MDM6600 chip. */
	EFICHIPINFO_ID_MDM6210 = 80, /**< MDM6210 chip. */
	EFICHIPINFO_ID_MDM6610 = 81, /**< MDM6610 chip. */
	EFICHIPINFO_ID_QSD8672 = 82, /**< QSD8672 chip. */
	EFICHIPINFO_ID_MDM6215 = 83, /**< MDM6215 chip. */
	EFICHIPINFO_ID_MDM6615 = 84, /**< MDM6615 chip. */
	EFICHIPINFO_ID_APQ8055 = 85, /**< APQ8055 chip. */
	EFICHIPINFO_ID_APQ8060 = 86, /**< APQ8060 chip. */
	EFICHIPINFO_ID_MSM8960 = 87, /**< MSM8960 chip. */
	EFICHIPINFO_ID_MSM7225A = 88, /**< MSM7225A chip. */
	EFICHIPINFO_ID_MSM7625A = 89, /**< MSM7625A chip. */
	EFICHIPINFO_ID_MSM7227A = 90, /**< MSM7227A chip. */
	EFICHIPINFO_ID_MSM7627A = 91, /**< MSM7627A chip. */
	EFICHIPINFO_ID_ESM7227A = 92, /**< ESM7227A chip. */
	EFICHIPINFO_ID_QSC6195D2 = 93, /**< QSC6195D2 chip. */
	EFICHIPINFO_ID_FSM9200 = 94, /**< FSM9200 chip. */
	EFICHIPINFO_ID_FSM9800 = 95, /**< FSM9800 chip. */
	EFICHIPINFO_ID_MSM7225AD1 = 96, /**< MSM7225AD1 chip. */
	EFICHIPINFO_ID_MSM7227AD1 = 97, /**< MSM7227AD1 chip. */
	EFICHIPINFO_ID_MSM7225AA = 98,  /**< MSM7225AA chip. */
	EFICHIPINFO_ID_MSM7225AAD1 = 99,  /**< MSM7225AAD1 chip. */
	EFICHIPINFO_ID_MSM7625AA = 100, /**< MSM7625AA chip. */
	EFICHIPINFO_ID_MSM7227AA = 101, /**< MSM7227AA chip. */
	EFICHIPINFO_ID_MSM7227AAD1 = 102, /**< MSM7227AAD1 chip. */
	EFICHIPINFO_ID_MSM7627AA = 103, /**< MSM7627AA chip. */
	EFICHIPINFO_ID_MDM9615 = 104, /**< MDM9615 chip. */
	EFICHIPINFO_ID_MDM9615M = EFICHIPINFO_ID_MDM9615, /**< MDM9615M chip. */
	EFICHIPINFO_ID_MDM8215 = 106, /**< MDM8215 chip. */
	EFICHIPINFO_ID_MDM9215 = 107, /**< MDM9215 chip. */
	EFICHIPINFO_ID_MDM9215M = EFICHIPINFO_ID_MDM9215,
	EFICHIPINFO_ID_APQ8064 = 109, /**< APQ8064 chip. */
	EFICHIPINFO_ID_QSC6270D1 = 110, /**< QSC6270D1 chip. */
	EFICHIPINFO_ID_QSC6240D1 = 111, /**< QSC6240D1 chip. */
	EFICHIPINFO_ID_ESC6270D1 = 112, /**< ESC6270D1 chip. */
	EFICHIPINFO_ID_ESC6240D1 = 113, /**< ESC6240D1 chip. */
	EFICHIPINFO_ID_MDM6270 = 114, /**< MDM6270 chip. */
	EFICHIPINFO_ID_MDM6270D1 = 115, /**< MDM6270D1 chip. */
	EFICHIPINFO_ID_MSM8930 = 116, /**< MSM8930 chip. */
	EFICHIPINFO_ID_MSM8630 = 117, /**< MSM8630 chip. */
	EFICHIPINFO_ID_MSM8230 = 118, /**< MSM8230 chip. */
	EFICHIPINFO_ID_APQ8030 = 119, /**< APQ8030 chip. */
	EFICHIPINFO_ID_MSM8627 = 120, /**< MSM8627 chip. */
	EFICHIPINFO_ID_MSM8227 = 121, /**< MSM8227 chip. */
	EFICHIPINFO_ID_MSM8660A = 122, /**< MSM8660A chip. */
	EFICHIPINFO_ID_MSM8260A = 123, /**< MSM8260A chip. */
	EFICHIPINFO_ID_APQ8060A = 124, /**< APQ8060A chip. */
	EFICHIPINFO_ID_MPQ8062 = 125, /**< MPQ8062 chip. */
	/** @endcond */
	EFICHIPINFO_ID_MSM8974 = 126, /**< MSM8974 chip. */
	/** @cond */
	EFICHIPINFO_ID_MSM8225 = 127, /**< MSM8225 chip. */
	EFICHIPINFO_ID_MSM8225D1 = 128, /**< MSM8225D1 chip. */
	EFICHIPINFO_ID_MSM8625 = 129, /**< MSM8625 chip. */
	EFICHIPINFO_ID_MPQ8064 = 130, /**< MPQ8064 chip. */
	EFICHIPINFO_ID_MSM7225AB = 131, /**< MSM7225AB chip. */
	EFICHIPINFO_ID_MSM7225ABD1 = 132, /**< MSM7225ABD1 chip. */
	EFICHIPINFO_ID_MSM7625AB = 133, /**< MSM7625AB chip. */
	EFICHIPINFO_ID_MDM9625 = 134, /**< MDM9625 chip. */
	EFICHIPINFO_ID_MSM7125A = 135, /**< MSM7125A chip. */
	EFICHIPINFO_ID_MSM7127A = 136, /**< MSM7127A chip. */
	EFICHIPINFO_ID_MSM8125AB = 137, /**< MSM8125AB chip. */
	EFICHIPINFO_ID_MSM8626 = 145, /**< MSM8626 chip. */
	EFICHIPINFO_ID_MPQ8092 = 146, /**< MPQ8092 chip. */
	EFICHIPINFO_ID_MSM8610 = 147, /**< MSM8610 chip. */
	EFICHIPINFO_ID_MDM8225 = 148, /**< MDM8225 chip. */
	EFICHIPINFO_ID_MDM9225 = 149, /**< MDM9225 chip. */
	EFICHIPINFO_ID_MDM9225M = 150, /**< MDM9225M chip. */
	EFICHIPINFO_ID_MDM9624M = 151, /**< MDM9624M chip. */
	EFICHIPINFO_ID_MDM9625M = 152, /**< MDM9625M chip. */
	EFICHIPINFO_ID_MSM8226 = 158, /**< MSM8226 chip. */
	EFICHIPINFO_ID_MSM8826 = 159, /**< MSM8826 chip. */
	EFICHIPINFO_ID_APQ8030AA = 160, /**< APQ8030AA chip. */
	EFICHIPINFO_ID_MSM8110 = 161, /**< MSM8110 chip. */
	EFICHIPINFO_ID_MSM8210 = 162, /**< MSM8210 chip. */
	EFICHIPINFO_ID_MSM8810 = 163, /**< MSM8810 chip. */
	EFICHIPINFO_ID_MSM8212 = 164, /**< MSM8212 chip. */
	EFICHIPINFO_ID_MSM8612 = 165, /**< MSM8612 chip. */
	EFICHIPINFO_ID_MSM8812 = 166, /**< MSM8812 chip. */
	EFICHIPINFO_ID_MSM8125 = 167, /**< MSM8125 chip. */
	EFICHIPINFO_ID_MSM8225Q = 168, /**< MSM8225Q chip. */
	EFICHIPINFO_ID_MSM8625Q = 169, /**< MSM8625Q chip. */
	EFICHIPINFO_ID_MSM8125Q = 170, /**< MSM8125Q chip. */
	EFICHIPINFO_ID_MDM9310 = 171, /**< MDM9310 chip. */
	EFICHIPINFO_ID_APQ8064_SLOW_PRIME = 172, /**< APQ8064 (slow prime) chip. */
	EFICHIPINFO_ID_MDM8110M = 173, /**< MDM8110M chip. */
	EFICHIPINFO_ID_MDM8615M = 174, /**< MDM8615M chip. */
	EFICHIPINFO_ID_MDM9320 = 175, /**< MDM9320 chip. */
	EFICHIPINFO_ID_MDM9225_1 = 176, /**< MDM9225_1 chip. */
	EFICHIPINFO_ID_MDM9225M_1 = 177, /**< MDM9225M_1 chip. */
	EFICHIPINFO_ID_APQ8084 = 178, /**< APQ8084 chip. */
	EFICHIPINFO_ID_MSM8130 = 179, /**< MSM8130 chip. */
	EFICHIPINFO_ID_MSM8130AA = 180, /**< MSM8130AA chip. */
	EFICHIPINFO_ID_MSM8130AB = 181, /**< MSM8130AB chip. */
	EFICHIPINFO_ID_MSM8627AA = 182, /**< MSM8627AA chip. */
	EFICHIPINFO_ID_MSM8227AA = 183, /**< MSM8227AA chip. */
	EFICHIPINFO_ID_APQ8074 = 184, /**< APQ8074 chip. */
	EFICHIPINFO_ID_MSM8274 = 185, /**< MSM8274 chip. */
	EFICHIPINFO_ID_MSM8674 = 186, /**< MSM8674 chip. */
	EFICHIPINFO_ID_MDM9635 = 187, /**< MDM9635 chip. */
	EFICHIPINFO_ID_FSM9900 = 188, /**< FSM9900 chip. */
	EFICHIPINFO_ID_FSM9965 = 189, /**< FSM9965 chip. */
	EFICHIPINFO_ID_FSM9955 = 190, /**< FSM9955 chip. */
	EFICHIPINFO_ID_FSM9950 = 191, /**< FSM9950 chip. */
	EFICHIPINFO_ID_FSM9915 = 192, /**< FSM9915 chip. */
	EFICHIPINFO_ID_FSM9910 = 193, /**< FSM9910 chip. */
	EFICHIPINFO_ID_MSM8974_PRO = 194, /**< MSM8974 (pro) chip. */
	EFICHIPINFO_ID_MSM8962 = 195, /**< MSM8962 chip. */
	EFICHIPINFO_ID_MSM8262 = 196, /**< MSM8262 chip. */
	EFICHIPINFO_ID_APQ8062 = 197, /**< APQ8062 chip. */
	EFICHIPINFO_ID_MSM8126 = 198, /**< MSM8126 chip. */
	EFICHIPINFO_ID_APQ8026 = 199, /**< APQ8026 chip. */
	EFICHIPINFO_ID_MSM8926 = 200, /**< MSM8926 chip. */
	EFICHIPINFO_ID_MSM8326 = 205, /**< MSM8326 chip. */
	EFICHIPINFO_ID_MSM8916 = 206, /**< MSM8916 chip. */
	EFICHIPINFO_ID_MSM8994 = 207, /**< MSM8994 chip. */
	EFICHIPINFO_ID_APQ8074_AA = 208, /**< APQ8074AA chip. */
	EFICHIPINFO_ID_APQ8074_AB = 209, /**< APQ8074AB chip. */
	EFICHIPINFO_ID_APQ8074_PRO = 210, /**< APQ8074 (pro) chip. */
	EFICHIPINFO_ID_MSM8274_AA = 211, /**< MSM8274AA chip. */
	EFICHIPINFO_ID_MSM8274_AB = 212, /**< MSM8274AB chip. */
	EFICHIPINFO_ID_MSM8274_PRO = 213, /**< MSM8274 (pro) chip. */
	EFICHIPINFO_ID_MSM8674_AA = 214, /**< MSM8674AA chip. */
	EFICHIPINFO_ID_MSM8674_AB = 215, /**< MSM8674AB chip. */
	EFICHIPINFO_ID_MSM8674_PRO = 216, /**< MSM8674 (pro) chip. */
	EFICHIPINFO_ID_MSM8974_AA = 217, /**< MSM8974AA chip. */
	EFICHIPINFO_ID_MSM8974_AB = 218, /**< MSM8974AB chip. */
	EFICHIPINFO_ID_APQ8028 = 219, /**< APQ8028 chip. */
	EFICHIPINFO_ID_MSM8128 = 220, /**< MSM8128 chip. */
	EFICHIPINFO_ID_MSM8228 = 221, /**< MSM8228 chip. */
	EFICHIPINFO_ID_MSM8528 = 222, /**< MSM8528 chip. */
	EFICHIPINFO_ID_MSM8628 = 223, /**< MSM8628 chip. */
	EFICHIPINFO_ID_MSM8928 = 224, /**< MSM8928 chip. */
	EFICHIPINFO_ID_MSM8510 = 225, /**< MSM8510 chip. */
	EFICHIPINFO_ID_MSM8512 = 226, /**< MSM8512 chip. */
	EFICHIPINFO_ID_MDM9630 = 227,
	EFICHIPINFO_ID_MDM9635M = EFICHIPINFO_ID_MDM9635,
	EFICHIPINFO_ID_MDM9230 = 228,
	EFICHIPINFO_ID_MDM9235M = 229,
	EFICHIPINFO_ID_MDM8630 = 230,
	EFICHIPINFO_ID_MDM9330 = 231,
	EFICHIPINFO_ID_MPQ8091 = 232,
	EFICHIPINFO_ID_MSM8936 = 233,
	EFICHIPINFO_ID_MDM9240 = 234,
	EFICHIPINFO_ID_MDM9340 = 235,
	EFICHIPINFO_ID_MDM9640 = 236,
	EFICHIPINFO_ID_MDM9245M = 237,
	EFICHIPINFO_ID_MDM9645M = 238,
	EFICHIPINFO_ID_MSM8939 = 239,
	EFICHIPINFO_ID_APQ8036 = 240,
	EFICHIPINFO_ID_APQ8039 = 241,
	EFICHIPINFO_ID_MSM8236 = 242,
	EFICHIPINFO_ID_MSM8636 = 243,
	EFICHIPINFO_ID_APQ8064_AU = 244,
	EFICHIPINFO_ID_MSM8909 = 245,
	EFICHIPINFO_ID_MSM8996 = 246,
	EFICHIPINFO_ID_APQ8016 = 247,
	EFICHIPINFO_ID_MSM8216 = 248,
	EFICHIPINFO_ID_MSM8116 = 249,
	EFICHIPINFO_ID_MSM8616 = 250,
	EFICHIPINFO_ID_MSM8992 = 251,
	EFICHIPINFO_ID_APQ8092 = 252,
	EFICHIPINFO_ID_APQ8094 = 253,
	EFICHIPINFO_ID_FSM9008 = 254,
	EFICHIPINFO_ID_FSM9010 = 255,
	EFICHIPINFO_ID_FSM9016 = 256,
	EFICHIPINFO_ID_FSM9055 = 257,
	EFICHIPINFO_ID_MSM8209 = 258,
	EFICHIPINFO_ID_MSM8208 = 259,
	EFICHIPINFO_ID_MDM9209 = 260,
	EFICHIPINFO_ID_MDM9309 = 261,
	EFICHIPINFO_ID_MDM9609 = 262,
	EFICHIPINFO_ID_MSM8239 = 263,
	EFICHIPINFO_ID_MSM8952 = 264,
	EFICHIPINFO_ID_APQ8009 = 265,
	EFICHIPINFO_ID_MSM8956 = 266,
	EFICHIPINFO_ID_QDF2432 = 267,
	EFICHIPINFO_ID_MSM8929 = 268,
	EFICHIPINFO_ID_MSM8629 = 269,
	EFICHIPINFO_ID_MSM8229 = 270,
	EFICHIPINFO_ID_APQ8029 = 271,
	EFICHIPINFO_ID_QCA9618 = 272,
	EFICHIPINFO_ID_IPQ4018 = EFICHIPINFO_ID_QCA9618,
	EFICHIPINFO_ID_QCA9619 = 273,
	EFICHIPINFO_ID_IPQ4019 = EFICHIPINFO_ID_QCA9619,
	EFICHIPINFO_ID_APQ8056 = 274,
	EFICHIPINFO_ID_MSM8609 = 275,
	EFICHIPINFO_ID_FSM9916 = 276,
	EFICHIPINFO_ID_APQ8076 = 277,
	EFICHIPINFO_ID_MSM8976 = 278,
	EFICHIPINFO_ID_MDM9650 = 279,
	EFICHIPINFO_ID_IPQ8065 = 280,
	EFICHIPINFO_ID_IPQ8069 = 281,
	EFICHIPINFO_ID_MSM8939_BC = 282,
	EFICHIPINFO_ID_MDM9250 = 283,
	EFICHIPINFO_ID_MDM9255 = 284,
	EFICHIPINFO_ID_MDM9350 = 285,
	EFICHIPINFO_ID_MDM9655 = 286,
	EFICHIPINFO_ID_IPQ4028 = 287,
	EFICHIPINFO_ID_IPQ4029 = 288,
	EFICHIPINFO_ID_APQ8052 = 289,

	EFICHIPINFO_NUM_IDS = 290,
	EFICHIPINFO_ID_32BITS = 0x7FFFFFF
	/** @endcond */
} EFIChipInfoIdType;

typedef
EFI_STATUS
(EFIAPI *EFI_DALCHIPINFO_GETCHIPID)(
	IN EFI_CHIPINFO_SHIM_PROTOCOL *This,
	OUT EFIChipInfoIdType *peId
);

struct _EFI_CHIPINFO_SHIM_PROTOCOL {
	UINT64                                 Revision;
	void*								   Unsupported0;
	void*								   Unsupported1;
	EFI_DALCHIPINFO_GETCHIPID              GetChipId;
	// Not implement the rest
};

#endif