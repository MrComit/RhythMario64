Lights1 lava_spire_Lava_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 lava_spire_Grounds_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx lava_spire_flowing_lava_ci4_aligner[] = {gsSPEndDisplayList()};
u8 lava_spire_flowing_lava_ci4[] = {
	0x01, 0x00, 0x01, 0x00, 0x11, 0x11, 0x11, 0x11, 
	0x22, 0x22, 0x23, 0x45, 0x22, 0x23, 0x44, 0x62, 
	0x33, 0x37, 0x88, 0x88, 0x66, 0x93, 0xa3, 0x63, 
	0x3b, 0x32, 0x3c, 0xdd, 0x3a, 0xaa, 0x11, 0x11, 
	0x11, 0x00, 0x00, 0x00, 0x00, 0x01, 0x11, 0x11, 
	0x22, 0x22, 0x22, 0x54, 0x32, 0x23, 0x44, 0x66, 
	0x73, 0x7b, 0x88, 0x58, 0x99, 0x97, 0x36, 0x66, 
	0xbb, 0xb3, 0x3d, 0xbb, 0xbb, 0x3a, 0x11, 0x11, 
	0xa2, 0xa1, 0x10, 0x01, 0x11, 0x11, 0x1a, 0xa1, 
	0x23, 0x22, 0x22, 0x54, 0x73, 0x34, 0x4c, 0xc6, 
	0xb3, 0x3b, 0x83, 0x35, 0x99, 0x63, 0x36, 0x33, 
	0xb9, 0x9b, 0xbb, 0xbb, 0xbb, 0x73, 0x32, 0x21, 
	0x21, 0x22, 0xa0, 0x12, 0x32, 0x32, 0xa3, 0x32, 
	0x3c, 0x22, 0x22, 0x54, 0x43, 0x34, 0x4c, 0x22, 
	0x77, 0x37, 0x85, 0x22, 0x36, 0x33, 0x36, 0x3a, 
	0x2b, 0x99, 0xbd, 0x3c, 0x77, 0xbb, 0x33, 0x33, 
	0x22, 0x22, 0xaa, 0x25, 0x73, 0x22, 0xaa, 0x2c, 
	0x47, 0x22, 0x23, 0x44, 0x4c, 0x26, 0x96, 0x33, 
	0x36, 0xcc, 0x96, 0x33, 0x27, 0x42, 0x2c, 0xc2, 
	0x27, 0x99, 0xba, 0xa3, 0x72, 0x74, 0xd3, 0xc3, 
	0x33, 0x32, 0x2a, 0x25, 0x44, 0x72, 0xaa, 0x2b, 
	0x44, 0x32, 0x23, 0x44, 0x46, 0xc6, 0x99, 0x73, 
	0x38, 0x86, 0x97, 0x37, 0x74, 0x72, 0x22, 0xc3, 
	0x76, 0x99, 0x37, 0x33, 0x32, 0x24, 0xbc, 0xcc, 
	0xc3, 0x33, 0x22, 0x23, 0x44, 0x72, 0x22, 0x2b, 
	0x44, 0x37, 0x74, 0x44, 0x44, 0x46, 0x99, 0x99, 
	0x88, 0x88, 0x73, 0x36, 0xee, 0x72, 0x22, 0x3c, 
	0x69, 0x99, 0x3b, 0x33, 0x37, 0x32, 0xbb, 0xbc, 
	0xcc, 0xcc, 0x32, 0x22, 0x37, 0x73, 0xc2, 0xcc, 
	0x33, 0x34, 0x47, 0x37, 0x44, 0x44, 0x69, 0x99, 
	0x88, 0x86, 0x33, 0x39, 0xee, 0x44, 0x2c, 0xbb, 
	0x69, 0x99, 0x7b, 0x73, 0x27, 0x32, 0xbb, 0xbb, 
	0xbb, 0xbb, 0x83, 0x3c, 0x77, 0x74, 0x53, 0x33, 
	0x33, 0x3b, 0xc2, 0x23, 0xd8, 0xe8, 0x5b, 0x99, 
	0xee, 0xb2, 0x22, 0x7e, 0xee, 0xeb, 0x49, 0xb4, 
	0x9e, 0xe9, 0x76, 0x37, 0x37, 0x36, 0x44, 0x44, 
	0xbb, 0x7b, 0x8c, 0x68, 0x77, 0x37, 0x58, 0xc5, 
	0x37, 0x3b, 0x32, 0x33, 0xd8, 0xe8, 0x35, 0xb9, 
	0xee, 0xeb, 0x22, 0x7e, 0xee, 0xee, 0xe4, 0xb9, 
	0xee, 0xee, 0x69, 0x73, 0x77, 0x39, 0x94, 0x44, 
	0xb7, 0x73, 0x88, 0xcc, 0x77, 0x33, 0x38, 0x85, 
	0x33, 0x3b, 0x33, 0x3c, 0xde, 0xed, 0x33, 0x39, 
	0xee, 0xee, 0x22, 0x7e, 0xee, 0xee, 0xe4, 0x44, 
	0x9e, 0xee, 0x99, 0x63, 0x37, 0x69, 0x99, 0x44, 
	0xb7, 0x33, 0x68, 0x83, 0x74, 0x44, 0x58, 0x88, 
	0xb7, 0xbb, 0xc3, 0x33, 0x8e, 0xbd, 0x35, 0x3b, 
	0xee, 0xee, 0x47, 0x4e, 0x99, 0xee, 0xee, 0x94, 
	0x9e, 0xee, 0x99, 0x97, 0x76, 0x99, 0xe9, 0x44, 
	0xbd, 0xdd, 0xd9, 0x8d, 0xcc, 0xcc, 0x35, 0x88, 
	0xbe, 0xeb, 0xbd, 0xdd, 0x99, 0x44, 0xcc, 0x24, 
	0x99, 0x99, 0x88, 0x88, 0x88, 0x88, 0x99, 0x99, 
	0x49, 0xee, 0xee, 0xe9, 0x88, 0x89, 0xee, 0x88, 
	0x8d, 0xd8, 0x89, 0x8d, 0x5c, 0x33, 0x33, 0x88, 
	0xdb, 0xee, 0x8b, 0xd8, 0xee, 0x94, 0xc2, 0xc4, 
	0x99, 0x99, 0x73, 0x77, 0x77, 0x78, 0x69, 0x99, 
	0x94, 0x99, 0xee, 0xee, 0xee, 0xee, 0xff, 0xe8, 
	0x88, 0xb8, 0x89, 0x88, 0x53, 0x3c, 0x55, 0x83, 
	0x22, 0xde, 0xe8, 0xbe, 0xee, 0x94, 0x6c, 0x44, 
	0x99, 0x73, 0x22, 0x22, 0x33, 0x33, 0x77, 0x69, 
	0xe9, 0x99, 0xee, 0xee, 0xef, 0xfe, 0xef, 0xf9, 
	0x88, 0xbe, 0x88, 0x88, 0x83, 0x33, 0x38, 0x52, 
	0x22, 0x2b, 0xee, 0xee, 0xe9, 0x49, 0x44, 0x44, 
	0x73, 0x11, 0x22, 0x22, 0x22, 0x22, 0x22, 0x79, 
	0xee, 0x94, 0xef, 0xff, 0xff, 0xff, 0xee, 0xe9, 
	0x88, 0x88, 0x68, 0x6b, 0x8d, 0xdd, 0x58, 0xc2, 
	0x22, 0x35, 0xbe, 0xe9, 0xee, 0xee, 0x99, 0x77, 
	0x31, 0x01, 0x01, 0x11, 0xaa, 0x00, 0x12, 0x35, 
	0x99, 0x99, 0xef, 0xff, 0xff, 0xff, 0xee, 0x88, 
	0xee, 0x88, 0x86, 0x77, 0xb8, 0xee, 0x88, 0xc2, 
	0x23, 0x53, 0xb9, 0x94, 0x99, 0xee, 0x99, 0x73, 
	0x10, 0x00, 0x00, 0x00, 0x0a, 0x10, 0x11, 0x23, 
	0xbb, 0xb9, 0xef, 0xee, 0xff, 0xff, 0xee, 0x8d, 
	0x88, 0xd8, 0x8b, 0x6b, 0xb8, 0xe8, 0x88, 0x5c, 
	0x25, 0x83, 0xb9, 0x94, 0xb4, 0xee, 0x97, 0x71, 
	0x00, 0x01, 0xaa, 0x11, 0x0a, 0x10, 0x11, 0x22, 
	0x33, 0xb9, 0xe9, 0xe9, 0x99, 0x99, 0xee, 0xbd, 
	0xe8, 0xde, 0x8b, 0x78, 0x8b, 0xbb, 0x88, 0x85, 
	0x38, 0x55, 0xb4, 0x99, 0x9e, 0xe9, 0x93, 0x11, 
	0x00, 0x12, 0x11, 0xaa, 0x1a, 0xa0, 0x11, 0x12, 
	0x33, 0x33, 0x44, 0x49, 0x47, 0x74, 0x88, 0xbb, 
	0x88, 0x58, 0x95, 0x55, 0xc3, 0x2b, 0xee, 0xeb, 
	0xbb, 0x55, 0xb9, 0x99, 0x88, 0x88, 0x30, 0x00, 
	0x00, 0x23, 0x22, 0x22, 0xaa, 0xaa, 0x00, 0x01, 
	0xa2, 0x22, 0x22, 0x22, 0x2a, 0x23, 0xcc, 0xcc, 
	0x77, 0x58, 0x95, 0xb5, 0xc3, 0x22, 0xbe, 0xee, 
	0xe5, 0xbb, 0xb9, 0x99, 0x88, 0x8c, 0x00, 0x00, 
	0x00, 0x23, 0x22, 0x22, 0x22, 0x2a, 0x10, 0x00, 
	0x00, 0xaa, 0xa1, 0x11, 0x1a, 0xaa, 0x22, 0x22, 
	0x17, 0x58, 0xe9, 0x95, 0xcc, 0xc2, 0x2e, 0xee, 
	0xe5, 0xbb, 0xb9, 0x9b, 0x88, 0xca, 0x00, 0x10, 
	0x02, 0x22, 0x32, 0x22, 0x2d, 0x3a, 0x11, 0x10, 
	0x00, 0x00, 0x00, 0x1a, 0x11, 0x11, 0x00, 0x02, 
	0x11, 0x78, 0xee, 0x9b, 0xcc, 0xbc, 0x2b, 0xeb, 
	0xbb, 0xee, 0xe9, 0x99, 0x88, 0xaa, 0x01, 0x11, 
	0x20, 0x23, 0x32, 0x33, 0x2d, 0xd2, 0x22, 0x11, 
	0x00, 0x00, 0x00, 0x12, 0xaa, 0x11, 0x00, 0x00, 
	0x00, 0x3b, 0xee, 0x84, 0x73, 0x77, 0x3b, 0x93, 
	0xbe, 0xee, 0xe8, 0x88, 0xb3, 0x00, 0xaa, 0xaa, 
	0x22, 0xaa, 0x32, 0x32, 0x25, 0x52, 0x22, 0xaa, 
	0x00, 0x00, 0x11, 0x11, 0xaa, 0x11, 0x00, 0x00, 
	0x00, 0x03, 0xee, 0xe8, 0x73, 0x33, 0x33, 0x33, 
	0xb9, 0x9e, 0xe8, 0x88, 0xba, 0x0a, 0x22, 0x2a, 
	0xa2, 0x32, 0x22, 0x22, 0x28, 0xc2, 0xc2, 0xaa, 
	0x00, 0x01, 0x11, 0x11, 0x11, 0x11, 0x00, 0x00, 
	0x00, 0x0a, 0x8e, 0xee, 0x96, 0x73, 0x3b, 0xbb, 
	0x99, 0x99, 0x88, 0x84, 0xa0, 0xa3, 0xaa, 0xaa, 
	0xaa, 0x55, 0x33, 0x22, 0x28, 0x52, 0x22, 0xaa, 
	0x10, 0x02, 0x11, 0x11, 0xa2, 0xa1, 0xa0, 0x00, 
	0xaa, 0x00, 0x28, 0xee, 0x99, 0x66, 0xb9, 0x99, 
	0xe9, 0x99, 0x88, 0x42, 0x00, 0xa3, 0x22, 0xaa, 
	0xa2, 0x53, 0x22, 0x32, 0x25, 0x82, 0x22, 0x22, 
	0x22, 0x21, 0x13, 0x3a, 0xa2, 0x21, 0xaa, 0x00, 
	0xaa, 0x10, 0x03, 0xbb, 0x99, 0x99, 0x4b, 0x4e, 
	0x44, 0x44, 0x47, 0x11, 0x11, 0xa2, 0x23, 0xaa, 
	0xa2, 0xbc, 0xc2, 0x5c, 0x3d, 0x32, 0x22, 0x2c, 
	0xaa, 0xaa, 0x15, 0x53, 0x33, 0xaa, 0x22, 0x22, 
	0x22, 0xa1, 0x00, 0xa3, 0xb9, 0x99, 0xee, 0xee, 
	0x44, 0x44, 0x72, 0x11, 0x11, 0xa2, 0x2d, 0x2a, 
	0xaa, 0xcb, 0x52, 0x25, 0xe3, 0x33, 0x22, 0x2c, 
	0xcc, 0x2a, 0x13, 0x55, 0x63, 0x33, 0x22, 0x22, 
	0x22, 0x22, 0xa0, 0x00, 0x3b, 0xb9, 0x44, 0x44, 
	0x44, 0x53, 0x21, 0x11, 0xa2, 0xa2, 0x2d, 0x3a, 
	0xa2, 0x2b, 0x52, 0x28, 0xe3, 0x33, 0x2c, 0xc5, 
	0xb2, 0x2a, 0x11, 0x25, 0x66, 0x33, 0x33, 0x32, 
	0xaa, 0x22, 0xaa, 0x00, 0xaa, 0x3b, 0xdd, 0xbb, 
	0x53, 0x22, 0x11, 0x11, 0xa3, 0x3a, 0x22, 0x2a, 
	0x2c, 0xcb, 0x52, 0x28, 0xee, 0x33, 0x2c, 0x58, 
	0xbc, 0x2c, 0x22, 0x22, 0x63, 0x36, 0xcc, 0x32, 
	0xa2, 0xa2, 0xaa, 0x10, 0x00, 0x12, 0x33, 0x33, 
	0x21, 0x00, 0x22, 0x22, 0x25, 0x52, 0x32, 0x22, 
	0x74, 0x73, 0x22, 0x23, 0xee, 0x77, 0xc3, 0x3d, 
	0x59, 0x3b, 0x22, 0x32, 0x43, 0x23, 0x73, 0xaa, 
	0xaa, 0xaa, 0x1a, 0xa1, 0x00, 0x00, 0x1a, 0xaa, 
	0x00, 0x01, 0x22, 0x22, 0x38, 0x83, 0x32, 0x33, 
	0x74, 0x43, 0x32, 0x22, 0x74, 0xee, 0xcc, 0xcb, 
	0x3b, 0x53, 0x37, 0x72, 0x44, 0x32, 0x32, 0xa2, 
	0xaa, 0xaa, 0x1a, 0xa1, 0x00, 0x00, 0x11, 0xaa, 
	0x10, 0x12, 0x22, 0x23, 0x58, 0x85, 0x32, 0x33, 
	0x33, 0x44, 0x53, 0x22, 0x27, 0xee, 0xbc, 0xdb, 
	0x53, 0xb5, 0x74, 0x77, 0x44, 0x33, 0x37, 0xa2, 
	0xaa, 0xa3, 0x22, 0xa1, 0x1a, 0xa1, 0x11, 0x11, 
	0x11, 0xa2, 0x33, 0x37, 0x53, 0x53, 0x53, 0x22, 
	0xaa, 0x37, 0x85, 0x22, 0x22, 0x47, 0xdc, 0xdd, 
	0x53, 0x3b, 0x73, 0x34, 0x45, 0x44, 0x77, 0x7a, 
	0x22, 0x25, 0x8c, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0xaa, 0xa2, 0x33, 0xcc, 0x38, 0x32, 0x73, 0x22, 
	0xc3, 0x23, 0x58, 0xc2, 0x22, 0x53, 0x77, 0x77, 
	0x77, 0x36, 0x99, 0xbb, 0x44, 0x44, 0x66, 0x77, 
	0x32, 0x33, 0xcc, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0xaa, 0xa2, 0x33, 0x33, 0x85, 0x22, 0x73, 0x27, 
	0xbb, 0x32, 0x28, 0xc2, 0x23, 0x35, 0x79, 0x72, 
	0x73, 0x79, 0x9b, 0x9b, 0x55, 0x55, 0x66, 0x77, 
	0x33, 0x32, 0x52, 0x22, 0x22, 0x23, 0x32, 0x32, 
	0x2a, 0x22, 0x23, 0x38, 0x83, 0x33, 0x77, 0x27, 
	0xbb, 0xc2, 0x28, 0x5c, 0x22, 0x23, 0x69, 0x92, 
	0x33, 0x99, 0xbb, 0xb3, 0x22, 0x54, 0x96, 0x67, 
	0x35, 0x44, 0x5c, 0x22, 0x33, 0x33, 0x33, 0x33, 
	0x2a, 0x22, 0x22, 0x38, 0x33, 0x88, 0x77, 0x23, 
	0xbb, 0xb3, 0x28, 0x82, 0xaa, 0x22, 0x76, 0x99, 
	0x99, 0x96, 0xbb, 0x33, 0x22, 0x34, 0x99, 0x76, 
	0xcd, 0xbb, 0xb3, 0x22, 0x23, 0xcc, 0x24, 0x77, 
	0x32, 0x22, 0x22, 0x58, 0x33, 0x99, 0x47, 0x37, 
	0x5b, 0x95, 0xb9, 0xba, 0xaa, 0xaa, 0x33, 0x9e, 
	0xf9, 0x77, 0x47, 0x22, 0x23, 0x24, 0xee, 0xbb, 
	0x3c, 0xdc, 0xbb, 0x32, 0x23, 0xcb, 0x74, 0x27, 
	0xc3, 0x22, 0x23, 0x85, 0x33, 0x69, 0x43, 0x77, 
	0x3b, 0x99, 0x99, 0x93, 0x37, 0x33, 0x32, 0x9e, 
	0xf9, 0x44, 0x77, 0x22, 0x33, 0x27, 0xee, 0xbb, 
	0xd3, 0xcc, 0x3b, 0xc3, 0x23, 0xbc, 0x74, 0x72, 
	0x3c, 0x32, 0x22, 0x55, 0x33, 0x66, 0x73, 0x37, 
	0x39, 0x55, 0xb9, 0x9b, 0x44, 0x73, 0x33, 0x93, 
	0x9f, 0x94, 0x47, 0x22, 0x33, 0x23, 0xee, 0xb2, 
	0xcc, 0xc3, 0x33, 0xcc, 0x3c, 0xbc, 0x7e, 0xe4, 
	0x22, 0x3c, 0x22, 0x38, 0x77, 0x77, 0x33, 0x37, 
	0x39, 0x93, 0xb9, 0x99, 0x47, 0x73, 0x23, 0x32, 
	0x79, 0xff, 0xee, 0x72, 0x37, 0x37, 0xee, 0xe2, 
	0x28, 0x52, 0x22, 0x22, 0x28, 0x55, 0x49, 0x9f, 
	0x47, 0x79, 0x8d, 0xbe, 0x74, 0x47, 0x27, 0x77, 
	0xde, 0xeb, 0x8e, 0x88, 0x96, 0x77, 0x77, 0x77, 
	0x37, 0x99, 0xee, 0xe8, 0xd8, 0x99, 0xe9, 0x4b, 
	0x85, 0x33, 0xcc, 0x5c, 0x25, 0x58, 0x44, 0x9f, 
	0xf9, 0x44, 0xee, 0xeb, 0x79, 0x97, 0x22, 0x44, 
	0x8e, 0xbd, 0xd8, 0xe8, 0x66, 0x77, 0x66, 0x69, 
	0x67, 0x77, 0xdd, 0x8e, 0x88, 0x88, 0x4b, 0xbb, 
	0x85, 0x35, 0x55, 0x58, 0x53, 0x38, 0x77, 0x49, 
	0xff, 0x44, 0xee, 0x8d, 0x79, 0x9f, 0x47, 0x74, 
	0xeb, 0xd8, 0xd8, 0xee, 0x99, 0x66, 0x99, 0x99, 
	0x96, 0x67, 0xdd, 0xde, 0x8d, 0xdd, 0xbb, 0xbb, 
	0x88, 0x53, 0x55, 0xc8, 0x83, 0x88, 0x77, 0x49, 
	0x99, 0x94, 0xdb, 0xb8, 0x77, 0x99, 0xee, 0xe4, 
	0x8d, 0x88, 0xdd, 0xee, 0x99, 0x99, 0x99, 0x99, 
	0x96, 0x77, 0xdd, 0xde, 0x9d, 0xdd, 0xbb, 0xbb, 
	0x99, 0x44, 0x33, 0x5b, 0x55, 0x99, 0x3c, 0xdb, 
	0xb9, 0x95, 0x37, 0x99, 0x93, 0x73, 0xd8, 0xbb, 
	0x76, 0x66, 0xdd, 0x8e, 0xee, 0xee, 0x99, 0x99, 
	0xee, 0x47, 0x33, 0x79, 0x99, 0x93, 0xdb, 0xdb, 
	0x99, 0x99, 0xb5, 0x55, 0x5b, 0x99, 0xcc, 0xdd, 
	0xb9, 0x53, 0x77, 0x99, 0x93, 0x33, 0xdd, 0x88, 
	0x33, 0x77, 0xdb, 0x8e, 0xee, 0xee, 0x99, 0x99, 
	0xee, 0xee, 0x99, 0x99, 0x66, 0x69, 0xdd, 0xd8, 
	0x49, 0xe9, 0x9b, 0xb5, 0x5b, 0x99, 0xdc, 0xcc, 
	0xbb, 0x35, 0x67, 0x69, 0x96, 0x76, 0xbd, 0x8e, 
	0x63, 0x77, 0xdb, 0xee, 0xee, 0xee, 0x97, 0x37, 
	0x44, 0xee, 0x99, 0x96, 0x77, 0x69, 0xee, 0xee, 
	0x49, 0xe9, 0xb9, 0x95, 0x55, 0xb9, 0xbd, 0xc3, 
	0x9b, 0xb9, 0x66, 0x69, 0x99, 0x99, 0x8b, 0xee, 
	0x99, 0x66, 0xd8, 0xee, 0xee, 0x2b, 0x31, 0x11, 
	0x22, 0x74, 0x99, 0x63, 0x37, 0x69, 0xb8, 0x88, 
	0x99, 0x99, 0x99, 0x9b, 0x74, 0x99, 0x49, 0x44, 
	0xf9, 0x99, 0xbb, 0xbb, 0x99, 0x99, 0x8e, 0xee, 
	0x9e, 0xee, 0x99, 0x99, 0x53, 0x0a, 0x11, 0x11, 
	0x11, 0x23, 0x44, 0x73, 0x33, 0x35, 0x99, 0x99, 
	0x99, 0x99, 0xb5, 0x99, 0x49, 0xf4, 0x4e, 0xee, 
	0xff, 0xf4, 0xb7, 0x77, 0x77, 0x99, 0xee, 0xee, 
	0xee, 0xee, 0x99, 0x97, 0xa0, 0x00, 0x11, 0x11, 
	0x11, 0x1a, 0x34, 0x43, 0x33, 0x34, 0x99, 0x35, 
	0x5b, 0x99, 0x35, 0xb9, 0x49, 0xf9, 0xb9, 0xee, 
	0xff, 0x94, 0x73, 0x7b, 0x77, 0x73, 0x24, 0xee, 
	0xee, 0x99, 0x99, 0x71, 0x00, 0xaa, 0xaa, 0x11, 
	0x11, 0x11, 0x27, 0x47, 0x35, 0x54, 0x93, 0x33, 
	0x35, 0x99, 0x3b, 0xbb, 0x49, 0xff, 0x44, 0xee, 
	0xff, 0x47, 0xaa, 0xaa, 0x13, 0x11, 0x22, 0x48, 
	0x49, 0x94, 0x73, 0x11, 0x0a, 0xaa, 0x23, 0x2a, 
	0xa1, 0xaa, 0x22, 0x74, 0x44, 0x44, 0x93, 0x55, 
	0x4b, 0xee, 0xdd, 0xdb, 0x89, 0xef, 0xe9, 0x9e, 
	0x99, 0x71, 0x0a, 0xa0, 0x00, 0x00, 0x00, 0x22, 
	0x11, 0x11, 0xa0, 0x00, 0xaa, 0xaa, 0x27, 0x32, 
	0x2a, 0xa2, 0xaa, 0x36, 0x99, 0x99, 0x63, 0x77, 
	0xbb, 0xee, 0xd8, 0xde, 0x99, 0xef, 0xee, 0x9e, 
	0x99, 0x11, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x0a, 0x3a, 0xaa, 0x22, 0x77, 
	0x22, 0x22, 0x3a, 0xaa, 0xb9, 0xbb, 0x63, 0x33, 
	0xb4, 0x99, 0x8d, 0x8e, 0xee, 0xef, 0xee, 0xee, 
	0x93, 0x11, 0x00, 0x00, 0xaa, 0xaa, 0x22, 0x00, 
	0x00, 0x00, 0x00, 0xab, 0xb3, 0x33, 0x27, 0x44, 
	0x22, 0x2a, 0x3a, 0xaa, 0xa3, 0xb9, 0x96, 0x73, 
	0xb4, 0x44, 0x8e, 0xee, 0xff, 0xff, 0xfe, 0xe9, 
	0x31, 0x11, 0x00, 0x00, 0x22, 0x22, 0x22, 0x20, 
	0x01, 0x11, 0xaa, 0x3b, 0xb7, 0x73, 0x24, 0x44, 
	0x3a, 0xaa, 0xa3, 0xaa, 0xaa, 0x3b, 0x99, 0x66, 
	0x88, 0x88, 0xee, 0xee, 0xee, 0xee, 0x99, 0x82, 
	0x00, 0x00, 0x11, 0xaa, 0xaa, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x54, 0xdd, 0xd3, 0x39, 0x99, 
	0x63, 0xaa, 0x22, 0x22, 0xa1, 0xaa, 0x74, 0x44, 
	0x88, 0x88, 0xee, 0xee, 0xee, 0xeb, 0x88, 0x21, 
	0x00, 0x01, 0xaa, 0x3a, 0xaa, 0x22, 0x22, 0x22, 
	0x37, 0x32, 0x23, 0x55, 0x3d, 0xbc, 0x36, 0x99, 
	0x63, 0xaa, 0x33, 0x22, 0xa1, 0x11, 0x11, 0x74, 
	0x2c, 0x88, 0x88, 0x84, 0xbb, 0xbd, 0x21, 0x11, 
	0x00, 0x11, 0xa5, 0x5a, 0xaa, 0xa2, 0x3b, 0x22, 
	0x34, 0x32, 0x35, 0x53, 0x3d, 0xbc, 0x63, 0x77, 
	0x63, 0x3a, 0x35, 0x52, 0xaa, 0xa1, 0x11, 0x11, 
	0xaa, 0xa2, 0x22, 0x22, 0xd2, 0x22, 0x12, 0x11, 
	0x02, 0x2a, 0x35, 0x53, 0xaa, 0x22, 0xcb, 0xc2, 
	0x37, 0x33, 0x55, 0x55, 0x33, 0xdb, 0x93, 0x36, 
	0x66, 0x33, 0x33, 0x53, 0x22, 0x3a, 0x11, 0x11, 
	
};

Gfx lava_spire_flowing_lava_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 lava_spire_flowing_lava_ci4_pal_rgba16[] = {
	0xe2, 0x09, 0xea, 0x49, 0xfa, 0xc9, 0xfb, 0x49, 
	0xfd, 0x0b, 0xfc, 0x09, 0xfc, 0x89, 0xfb, 0xc7, 
	0xfd, 0x0f, 0xfd, 0x8f, 0xfa, 0x49, 0xfc, 0x8d, 
	0xfb, 0x87, 0xfb, 0xcb, 0xfe, 0x0f, 0xfe, 0xd1, 
	
};

Gfx lava_spire_dirtwall_ci8_aligner[] = {gsSPEndDisplayList()};
u8 lava_spire_dirtwall_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x03, 
	0x03, 0x03, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x00, 0x01, 0x01, 0x04, 0x01, 0x04, 0x05, 0x04, 
	0x04, 0x04, 0x05, 0x04, 0x02, 0x02, 0x02, 0x02, 
	0x01, 0x03, 0x00, 0x01, 0x01, 0x02, 0x02, 0x06, 
	0x02, 0x02, 0x01, 0x01, 0x02, 0x07, 0x08, 0x00, 
	0x03, 0x07, 0x08, 0x07, 0x09, 0x0a, 0x0b, 0x01, 
	0x01, 0x04, 0x04, 0x04, 0x04, 0x02, 0x03, 0x02, 
	0x01, 0x03, 0x06, 0x01, 0x04, 0x01, 0x01, 0x01, 
	0x0b, 0x0b, 0x01, 0x01, 0x08, 0x07, 0x02, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0x09, 0x0a, 
	0x01, 0x02, 0x04, 0x01, 0x04, 0x02, 0x04, 0x01, 
	0x01, 0x01, 0x06, 0x04, 0x0c, 0x04, 0x04, 0x0b, 
	0x01, 0x00, 0x09, 0x01, 0x02, 0x02, 0x08, 0x07, 
	0x00, 0x0d, 0x09, 0x02, 0x02, 0x02, 0x0b, 0x01, 
	0x09, 0x04, 0x01, 0x01, 0x01, 0x02, 0x02, 0x01, 
	0x02, 0x01, 0x02, 0x0c, 0x0b, 0x01, 0x01, 0x01, 
	0x09, 0x08, 0x00, 0x00, 0x07, 0x09, 0x09, 0x01, 
	0x02, 0x0e, 0x01, 0x01, 0x01, 0x09, 0x02, 0x07, 
	0x01, 0x02, 0x0a, 0x01, 0x02, 0x00, 0x02, 0x02, 
	0x00, 0x02, 0x02, 0x0b, 0x0b, 0x01, 0x09, 0x0a, 
	0x09, 0x00, 0x00, 0x00, 0x09, 0x02, 0x09, 0x0a, 
	0x01, 0x0e, 0x09, 0x02, 0x02, 0x07, 0x02, 0x09, 
	0x01, 0x01, 0x01, 0x02, 0x08, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x0d, 0x0b, 0x01, 0x02, 0x09, 
	0x09, 0x02, 0x00, 0x0f, 0x02, 0x02, 0x02, 0x01, 
	0x04, 0x01, 0x09, 0x09, 0x02, 0x07, 0x07, 0x07, 
	0x09, 0x0a, 0x0b, 0x07, 0x06, 0x06, 0x06, 0x06, 
	0x00, 0x00, 0x01, 0x02, 0x01, 0x01, 0x02, 0x02, 
	0x09, 0x01, 0x09, 0x02, 0x00, 0x02, 0x02, 0x0b, 
	0x01, 0x04, 0x01, 0x09, 0x07, 0x08, 0x07, 0x07, 
	0x09, 0x01, 0x0d, 0x01, 0x02, 0x06, 0x06, 0x06, 
	0x02, 0x02, 0x00, 0x07, 0x01, 0x09, 0x08, 0x02, 
	0x01, 0x09, 0x02, 0x07, 0x00, 0x00, 0x00, 0x01, 
	0x04, 0x01, 0x01, 0x09, 0x07, 0x00, 0x00, 0x08, 
	0x07, 0x09, 0x0a, 0x01, 0x0a, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x00, 0x00, 0x09, 0x09, 0x02, 0x09, 
	0x09, 0x09, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 
	0x01, 0x04, 0x01, 0x02, 0x09, 0x00, 0x08, 0x07, 
	0x08, 0x01, 0x09, 0x07, 0x01, 0x0a, 0x02, 0x02, 
	0x02, 0x02, 0x00, 0x08, 0x09, 0x0e, 0x07, 0x01, 
	0x0a, 0x0a, 0x02, 0x08, 0x00, 0x00, 0x00, 0x02, 
	0x02, 0x01, 0x01, 0x00, 0x08, 0x09, 0x09, 0x08, 
	0x0a, 0x0a, 0x03, 0x0f, 0x08, 0x01, 0x01, 0x02, 
	0x01, 0x01, 0x09, 0x00, 0x07, 0x02, 0x07, 0x09, 
	0x01, 0x0b, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x01, 0x00, 0x00, 0x00, 0x01, 0x09, 0x01, 
	0x0a, 0x0d, 0x03, 0x03, 0x0f, 0x02, 0x0a, 0x0b, 
	0x01, 0x0a, 0x09, 0x08, 0x00, 0x02, 0x08, 0x07, 
	0x09, 0x01, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x04, 
	0x04, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
	0x0a, 0x0a, 0x09, 0x02, 0x07, 0x08, 0x02, 0x0c, 
	0x04, 0x09, 0x01, 0x02, 0x00, 0x00, 0x08, 0x09, 
	0x09, 0x01, 0x0b, 0x0b, 0x01, 0x01, 0x05, 0x05, 
	0x04, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x09, 
	0x09, 0x01, 0x09, 0x09, 0x02, 0x00, 0x08, 0x10, 
	0x05, 0x0b, 0x01, 0x0d, 0x01, 0x02, 0x01, 0x01, 
	0x01, 0x01, 0x0b, 0x0b, 0x05, 0x05, 0x05, 0x04, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 
	0x09, 0x01, 0x01, 0x09, 0x02, 0x08, 0x01, 0x10, 
	0x05, 0x0a, 0x0a, 0x01, 0x10, 0x0c, 0x0b, 0x04, 
	0x05, 0x05, 0x0c, 0x05, 0x04, 0x04, 0x01, 0x02, 
	0x02, 0x02, 0x02, 0x00, 0x01, 0x02, 0x02, 0x00, 
	0x08, 0x08, 0x01, 0x0d, 0x02, 0x02, 0x01, 0x0a, 
	0x01, 0x01, 0x01, 0x04, 0x01, 0x04, 0x05, 0x04, 
	0x04, 0x04, 0x05, 0x04, 0x02, 0x02, 0x02, 0x02, 
	0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x03, 
	0x03, 0x03, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x03, 0x07, 0x08, 0x07, 0x09, 0x0a, 0x0b, 0x01, 
	0x01, 0x04, 0x04, 0x04, 0x04, 0x02, 0x03, 0x02, 
	0x01, 0x03, 0x00, 0x01, 0x01, 0x02, 0x02, 0x06, 
	0x02, 0x02, 0x01, 0x01, 0x02, 0x07, 0x08, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x09, 0x02, 0x09, 0x0a, 
	0x01, 0x02, 0x04, 0x01, 0x04, 0x02, 0x04, 0x01, 
	0x01, 0x03, 0x06, 0x01, 0x04, 0x01, 0x01, 0x01, 
	0x0b, 0x0b, 0x01, 0x01, 0x08, 0x07, 0x02, 0x00, 
	0x00, 0x0d, 0x09, 0x02, 0x02, 0x02, 0x0b, 0x01, 
	0x09, 0x04, 0x01, 0x01, 0x01, 0x02, 0x02, 0x01, 
	0x01, 0x01, 0x06, 0x04, 0x0c, 0x04, 0x04, 0x0b, 
	0x01, 0x00, 0x09, 0x01, 0x02, 0x02, 0x08, 0x07, 
	0x02, 0x0e, 0x01, 0x01, 0x01, 0x09, 0x02, 0x07, 
	0x01, 0x02, 0x0a, 0x01, 0x02, 0x00, 0x02, 0x02, 
	0x02, 0x01, 0x02, 0x0c, 0x0b, 0x01, 0x01, 0x01, 
	0x09, 0x08, 0x00, 0x00, 0x07, 0x09, 0x09, 0x01, 
	0x01, 0x0e, 0x09, 0x02, 0x02, 0x07, 0x02, 0x09, 
	0x01, 0x01, 0x01, 0x02, 0x08, 0x00, 0x00, 0x00, 
	0x00, 0x02, 0x02, 0x0b, 0x0b, 0x01, 0x09, 0x0a, 
	0x09, 0x00, 0x00, 0x00, 0x09, 0x02, 0x09, 0x0a, 
	0x04, 0x01, 0x09, 0x09, 0x02, 0x07, 0x07, 0x07, 
	0x09, 0x0a, 0x0b, 0x07, 0x06, 0x06, 0x06, 0x06, 
	0x03, 0x00, 0x00, 0x0d, 0x0b, 0x01, 0x02, 0x09, 
	0x09, 0x02, 0x00, 0x0f, 0x02, 0x02, 0x02, 0x01, 
	0x01, 0x04, 0x01, 0x09, 0x07, 0x08, 0x07, 0x07, 
	0x09, 0x01, 0x0d, 0x01, 0x02, 0x06, 0x06, 0x06, 
	0x00, 0x00, 0x01, 0x02, 0x01, 0x01, 0x02, 0x02, 
	0x09, 0x01, 0x09, 0x02, 0x00, 0x02, 0x02, 0x0b, 
	0x04, 0x01, 0x01, 0x09, 0x07, 0x00, 0x00, 0x08, 
	0x07, 0x09, 0x0a, 0x01, 0x0a, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x00, 0x07, 0x01, 0x09, 0x08, 0x02, 
	0x01, 0x09, 0x02, 0x07, 0x00, 0x00, 0x00, 0x01, 
	0x01, 0x04, 0x01, 0x02, 0x09, 0x00, 0x08, 0x07, 
	0x08, 0x01, 0x09, 0x07, 0x01, 0x0a, 0x02, 0x02, 
	0x02, 0x02, 0x00, 0x00, 0x09, 0x09, 0x02, 0x09, 
	0x09, 0x09, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 
	0x02, 0x01, 0x01, 0x00, 0x08, 0x09, 0x09, 0x08, 
	0x0a, 0x0a, 0x03, 0x0f, 0x08, 0x01, 0x01, 0x02, 
	0x02, 0x02, 0x00, 0x08, 0x09, 0x0e, 0x07, 0x01, 
	0x0a, 0x0a, 0x02, 0x08, 0x00, 0x00, 0x00, 0x02, 
	0x02, 0x01, 0x00, 0x00, 0x00, 0x01, 0x09, 0x01, 
	0x0a, 0x0d, 0x03, 0x03, 0x0f, 0x02, 0x0a, 0x0b, 
	0x01, 0x01, 0x09, 0x00, 0x07, 0x02, 0x07, 0x09, 
	0x01, 0x0b, 0x0d, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x04, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 
	0x0a, 0x0a, 0x09, 0x02, 0x07, 0x08, 0x02, 0x0c, 
	0x01, 0x0a, 0x09, 0x08, 0x00, 0x02, 0x08, 0x07, 
	0x09, 0x01, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x04, 
	0x04, 0x04, 0x04, 0x01, 0x01, 0x01, 0x01, 0x09, 
	0x09, 0x01, 0x09, 0x09, 0x02, 0x00, 0x08, 0x10, 
	0x04, 0x09, 0x01, 0x02, 0x00, 0x00, 0x08, 0x09, 
	0x09, 0x01, 0x0b, 0x0b, 0x01, 0x01, 0x05, 0x05, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 
	0x09, 0x01, 0x01, 0x09, 0x02, 0x08, 0x01, 0x10, 
	0x05, 0x0b, 0x01, 0x0d, 0x01, 0x02, 0x01, 0x01, 
	0x01, 0x01, 0x0b, 0x0b, 0x05, 0x05, 0x05, 0x04, 
	0x02, 0x02, 0x02, 0x00, 0x01, 0x02, 0x02, 0x00, 
	0x08, 0x08, 0x01, 0x0d, 0x02, 0x02, 0x01, 0x0a, 
	0x05, 0x0a, 0x0a, 0x01, 0x10, 0x0c, 0x0b, 0x04, 
	0x05, 0x05, 0x0c, 0x05, 0x04, 0x04, 0x01, 0x02, 
	
};

Gfx lava_spire_dirtwall_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 lava_spire_dirtwall_ci8_pal_rgba16[] = {
	0x93, 0x01, 0x72, 0x41, 0x82, 0xc1, 0xa3, 0x41, 
	0x62, 0x01, 0x49, 0xc1, 0x9b, 0x41, 0x8a, 0xc1, 
	0x8b, 0x01, 0x7a, 0x81, 0x6a, 0x41, 0x6a, 0x01, 
	0x51, 0xc1, 0x72, 0x81, 0x82, 0x81, 0x93, 0x41, 
	0x5a, 0x01, 
};

Vtx lava_spire_LavaSpire_mesh_layer_1_vtx_cull[8] = {
	{{{-603, 0, -603},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-603, 0, 603},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-603, 2419, 603},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-603, 2419, -603},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{603, 0, -603},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{603, 0, 603},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{603, 2419, 603},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{603, 2419, -603},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx lava_spire_LavaSpire_mesh_layer_1_vtx_0[27] = {
	{{{300, 2025, 0},0, {5103, 4241},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{291, 2269, -291},0, {4079, 5108},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{412, 2269, 0},0, {5103, 5108},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{212, 2025, -212},0, {4079, 4241},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, 0, 0},0, {5103, -3091},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{212, 0, -212},0, {4079, -3091},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 2025, -300},0, {3056, 4241},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 0, -300},0, {3056, -3091},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-212, 2025, -212},0, {2032, 4241},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-212, 0, -212},0, {2032, -3091},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-300, 2025, 0},0, {1008, 4241},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-300, 0, 0},0, {1008, -3091},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-212, 2025, 212},0, {-16, 4241},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-212, 0, 212},0, {-16, -3091},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 2025, 300},0, {-1040, 4241},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 0, 300},0, {-1040, -3091},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{212, 2025, 212},0, {-2063, 4241},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{212, 0, 212},0, {-2063, -3091},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, 2025, 0},0, {-3087, 4241},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{300, 0, 0},0, {-3087, -3091},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{412, 2269, 0},0, {-3087, 5108},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{291, 2269, 291},0, {-2063, 5108},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 2269, 412},0, {-1040, 5108},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-291, 2269, 291},0, {-16, 5108},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-412, 2269, 0},0, {1008, 5108},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-291, 2269, -291},0, {2032, 5108},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{0, 2269, -412},0, {3056, 5108},{0xFF, 0xFF, 0xFF, 0xFF}}},
};

Gfx lava_spire_LavaSpire_mesh_layer_1_tri_0[] = {
	gsSPVertex(lava_spire_LavaSpire_mesh_layer_1_vtx_0 + 0, 27, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
	gsSP2Triangles(5, 6, 3, 0, 5, 7, 6, 0),
	gsSP2Triangles(7, 8, 6, 0, 7, 9, 8, 0),
	gsSP2Triangles(9, 10, 8, 0, 9, 11, 10, 0),
	gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
	gsSP2Triangles(13, 14, 12, 0, 13, 15, 14, 0),
	gsSP2Triangles(15, 16, 14, 0, 15, 17, 16, 0),
	gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
	gsSP2Triangles(16, 18, 20, 0, 16, 20, 21, 0),
	gsSP2Triangles(14, 16, 21, 0, 14, 21, 22, 0),
	gsSP2Triangles(12, 14, 22, 0, 12, 22, 23, 0),
	gsSP2Triangles(10, 12, 23, 0, 10, 23, 24, 0),
	gsSP2Triangles(8, 10, 24, 0, 8, 24, 25, 0),
	gsSP2Triangles(6, 8, 25, 0, 6, 25, 26, 0),
	gsSP2Triangles(3, 6, 26, 0, 3, 26, 1, 0),
	gsSPEndDisplayList(),
};

Vtx lava_spire_LavaSpire_mesh_layer_1_vtx_1[36] = {
	{{{-379, 2269, -379},0, {-20, -751},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 2269, -536},0, {-751, -20},{0x0, 0x81, 0x0, 0xFF}}},
	{{{379, 2269, -379},0, {-751, 1012},{0x0, 0x81, 0x0, 0xFF}}},
	{{{379, 2269, 379},0, {1012, 1743},{0x0, 0x81, 0x0, 0xFF}}},
	{{{536, 2269, 0},0, {-20, 1743},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-379, 2269, 379},0, {1743, -20},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 2269, 536},0, {1743, 1012},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-536, 2269, 0},0, {1012, -751},{0x0, 0x81, 0x0, 0xFF}}},
	{{{426, 2419, -426},0, {-20, 1743},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 2419, -603},0, {1012, 1743},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-426, 2419, -426},0, {1743, 1012},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-426, 2419, 426},0, {1012, -751},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-603, 2419, 0},0, {1743, -20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{426, 2419, 426},0, {-751, -20},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 2419, 603},0, {-20, -751},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{603, 2419, 0},0, {-751, 1012},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{536, 2269, 0},0, {-51, 4373},{0x50, 0x9D, 0x0, 0xFF}}},
	{{{379, 2269, -379},0, {-51, 5519},{0x38, 0x9D, 0xC8, 0xFF}}},
	{{{426, 2419, -426},0, {294, 5527},{0x4F, 0x3C, 0xB1, 0xFF}}},
	{{{603, 2419, 0},0, {294, 4260},{0x70, 0x3C, 0x0, 0xFF}}},
	{{{379, 2269, 379},0, {-51, 3228},{0x38, 0x9D, 0x38, 0xFF}}},
	{{{426, 2419, 426},0, {294, 3231},{0x4F, 0x3C, 0x4F, 0xFF}}},
	{{{0, 2269, 536},0, {-51, 2082},{0x0, 0x9D, 0x50, 0xFF}}},
	{{{0, 2419, 603},0, {294, 2094},{0x0, 0x3C, 0x70, 0xFF}}},
	{{{-379, 2269, 379},0, {-51, 937},{0xC8, 0x9D, 0x38, 0xFF}}},
	{{{-426, 2419, 426},0, {294, 1008},{0xB1, 0x3C, 0x4F, 0xFF}}},
	{{{-536, 2269, 0},0, {-51, -208},{0xB0, 0x9D, 0x0, 0xFF}}},
	{{{-603, 2419, 0},0, {294, -71},{0x90, 0x3C, 0x0, 0xFF}}},
	{{{-379, 2269, -379},0, {-51, -1354},{0xC8, 0x9D, 0xC8, 0xFF}}},
	{{{-426, 2419, -426},0, {294, -1359},{0xB1, 0x3C, 0xB1, 0xFF}}},
	{{{0, 2269, -536},0, {-51, -2499},{0x0, 0x9D, 0xB0, 0xFF}}},
	{{{0, 2419, -603},0, {294, -2422},{0x0, 0x3C, 0x90, 0xFF}}},
	{{{379, 2269, -379},0, {-51, -3645},{0x38, 0x9D, 0xC8, 0xFF}}},
	{{{0, 2269, -536},0, {-51, -2499},{0x0, 0x9D, 0xB0, 0xFF}}},
	{{{0, 2419, -603},0, {294, -2422},{0x0, 0x3C, 0x90, 0xFF}}},
	{{{426, 2419, -426},0, {294, -3710},{0x4F, 0x3C, 0xB1, 0xFF}}},
};

Gfx lava_spire_LavaSpire_mesh_layer_1_tri_1[] = {
	gsSPVertex(lava_spire_LavaSpire_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(3, 6, 5, 0, 5, 7, 0, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(10, 12, 11, 0, 11, 13, 8, 0),
	gsSP2Triangles(11, 14, 13, 0, 13, 15, 8, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 16, 19, 0, 20, 19, 21, 0),
	gsSP2Triangles(22, 20, 21, 0, 22, 21, 23, 0),
	gsSP2Triangles(24, 22, 23, 0, 24, 23, 25, 0),
	gsSP2Triangles(26, 24, 25, 0, 26, 25, 27, 0),
	gsSP2Triangles(28, 26, 27, 0, 28, 27, 29, 0),
	gsSP2Triangles(30, 28, 29, 0, 30, 29, 31, 0),
	gsSPVertex(lava_spire_LavaSpire_mesh_layer_1_vtx_1 + 32, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_lava_spire_Lava_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, lava_spire_flowing_lava_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 15),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, lava_spire_flowing_lava_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 126, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPSetLights1(lava_spire_Lava_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_lava_spire_Lava_001[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_lava_spire_Grounds_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, lava_spire_dirtwall_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 16),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 32, lava_spire_dirtwall_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(lava_spire_Grounds_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_lava_spire_Grounds_001[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx lava_spire_LavaSpire_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(lava_spire_LavaSpire_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_lava_spire_Lava_001),
	gsSPDisplayList(lava_spire_LavaSpire_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_lava_spire_Lava_001),
	gsSPDisplayList(mat_lava_spire_Grounds_001),
	gsSPDisplayList(lava_spire_LavaSpire_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_lava_spire_Grounds_001),
	gsSPEndDisplayList(),
};

Gfx lava_spire_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

