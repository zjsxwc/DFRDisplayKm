#pragma once

// DFR device type
#define FILE_DEVICE_DFR 0x8086

// DFR IO functions
#define FUNCTION_UPDATE_FRAMEBUFFER 0x801

// DFR Host IOCTLs
#define IOCTL_DFR_UPDATE_FRAMEBUFFER CTL_CODE(FILE_DEVICE_DFR, \
	FUNCTION_UPDATE_FRAMEBUFFER, METHOD_BUFFERED, FILE_WRITE_DATA)

#pragma pack(push)
#pragma pack(1)
typedef struct _DFR_HOSTIO_UPDATE_FRAMEBUFFER_HEADER {
	UINT16 BeginX;
	UINT16 BeginY;
	UINT16 Width;
	UINT16 Height;
	UINT32 FrameBufferPixelFormat;
	UINT32 RequireVertFlip;
} DFR_HOSTIO_UPDATE_FRAMEBUFFER_HEADER, *PDFR_HOSTIO_UPDATE_FRAMEBUFFER_HEADER;
#pragma pack(pop)
