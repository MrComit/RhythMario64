Lights1 boss_rock_Rock_002_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 boss_rock_Rock2_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx boss_rock_ss_ceiling_2_i4_dark2_i8_aligner[] = {gsSPEndDisplayList()};
u8 boss_rock_ss_ceiling_2_i4_dark2_i8[] = {
	0x31, 0x31, 0x3e, 0x34, 0x3f, 0x35, 0x3f, 0x3f, 
	0x33, 0x3e, 0x38, 0x44, 0x3f, 0x3f, 0x3d, 0x3d, 
	0x3f, 0x4c, 0x3f, 0x3f, 0x37, 0x43, 0x3b, 0x3b, 
	0x40, 0x35, 0x33, 0x3f, 0x39, 0x39, 0x35, 0x35, 
	0x37, 0x3f, 0x4c, 0x3e, 0x3f, 0x3f, 0x4d, 0x4d, 
	0x3e, 0x3e, 0x44, 0x44, 0x4d, 0x4d, 0x48, 0x48, 
	0x3f, 0x4c, 0x4e, 0x3f, 0x43, 0x43, 0x48, 0x48, 
	0x51, 0x51, 0x33, 0x3f, 0x39, 0x39, 0x4d, 0x27, 
	0x45, 0x55, 0x4a, 0x4a, 0x57, 0x44, 0x4b, 0x48, 
	0x52, 0x4a, 0x4b, 0x4b, 0x4a, 0x50, 0x4c, 0x4c, 
	0x4a, 0x48, 0x47, 0x47, 0x4a, 0x45, 0x40, 0x45, 
	0x48, 0x46, 0x4c, 0x37, 0x38, 0x45, 0x4c, 0x2d, 
	0x45, 0x55, 0x4a, 0x4a, 0x57, 0x44, 0x47, 0x47, 
	0x4a, 0x4e, 0x47, 0x51, 0x4a, 0x50, 0x50, 0x4c, 
	0x48, 0x4e, 0x47, 0x3f, 0x42, 0x45, 0x47, 0x47, 
	0x48, 0x46, 0x3e, 0x43, 0x4d, 0x40, 0x3a, 0x1a, 
	0x3d, 0x3d, 0x45, 0x48, 0x51, 0x3e, 0x44, 0x47, 
	0x4a, 0x37, 0x50, 0x47, 0x56, 0x4e, 0x51, 0x4a, 
	0x49, 0x49, 0x3f, 0x3f, 0x4a, 0x41, 0x48, 0x41, 
	0x51, 0x4d, 0x4c, 0x46, 0x47, 0x47, 0x3a, 0x1e, 
	0x33, 0x33, 0x40, 0x48, 0x4a, 0x4a, 0x47, 0x47, 
	0x3e, 0x2c, 0x47, 0x47, 0x51, 0x4a, 0x4a, 0x4a, 
	0x49, 0x47, 0x4a, 0x3f, 0x4a, 0x44, 0x45, 0x45, 
	0x4d, 0x47, 0x3d, 0x4c, 0x40, 0x36, 0x3a, 0x1e, 
	0x2f, 0x40, 0x45, 0x4c, 0x4c, 0x46, 0x4b, 0x41, 
	0x4d, 0x45, 0x47, 0x44, 0x4b, 0x57, 0x4d, 0x48, 
	0x4a, 0x4e, 0x3c, 0x43, 0x47, 0x36, 0x45, 0x45, 
	0x4a, 0x4a, 0x48, 0x48, 0x4f, 0x4a, 0x41, 0x21, 
	0x40, 0x40, 0x41, 0x47, 0x43, 0x43, 0x41, 0x47, 
	0x4d, 0x45, 0x4d, 0x4d, 0x4b, 0x57, 0x48, 0x48, 
	0x4a, 0x4a, 0x48, 0x50, 0x47, 0x40, 0x49, 0x45, 
	0x4e, 0x4a, 0x48, 0x41, 0x4f, 0x43, 0x2d, 0x2d, 
	0x35, 0x43, 0x45, 0x45, 0x4a, 0x45, 0x48, 0x44, 
	0x3e, 0x53, 0x48, 0x51, 0x45, 0x45, 0x57, 0x43, 
	0x4e, 0x3f, 0x49, 0x4d, 0x4e, 0x45, 0x43, 0x4c, 
	0x49, 0x47, 0x43, 0x48, 0x40, 0x40, 0x35, 0x21, 
	0x2b, 0x35, 0x45, 0x3e, 0x48, 0x4a, 0x3e, 0x3e, 
	0x53, 0x53, 0x51, 0x51, 0x4f, 0x4f, 0x4a, 0x4f, 
	0x4e, 0x58, 0x4d, 0x4d, 0x45, 0x45, 0x4c, 0x48, 
	0x43, 0x49, 0x48, 0x43, 0x47, 0x40, 0x35, 0x21, 
	0x3e, 0x3e, 0x3d, 0x45, 0x45, 0x33, 0x38, 0x3e, 
	0x43, 0x4a, 0x4e, 0x4e, 0x4a, 0x48, 0x45, 0x58, 
	0x50, 0x50, 0x4b, 0x3c, 0x3f, 0x48, 0x4a, 0x3c, 
	0x40, 0x4c, 0x41, 0x46, 0x3e, 0x3b, 0x32, 0x1e, 
	0x3e, 0x3e, 0x4a, 0x4a, 0x45, 0x33, 0x3e, 0x3e, 
	0x47, 0x4a, 0x53, 0x47, 0x48, 0x48, 0x4c, 0x58, 
	0x48, 0x50, 0x4b, 0x3c, 0x43, 0x45, 0x45, 0x41, 
	0x40, 0x3a, 0x41, 0x41, 0x3b, 0x36, 0x32, 0x1e, 
	0x2f, 0x2f, 0x3e, 0x45, 0x38, 0x2a, 0x4b, 0x43, 
	0x3f, 0x4b, 0x38, 0x38, 0x58, 0x42, 0x4a, 0x4a, 
	0x4f, 0x40, 0x4e, 0x4a, 0x44, 0x2c, 0x40, 0x47, 
	0x4d, 0x48, 0x34, 0x3a, 0x37, 0x35, 0x37, 0x1c, 
	0x28, 0x2f, 0x3a, 0x45, 0x41, 0x41, 0x4b, 0x46, 
	0x47, 0x52, 0x52, 0x48, 0x36, 0x58, 0x5e, 0x51, 
	0x49, 0x45, 0x4e, 0x4a, 0x52, 0x2c, 0x40, 0x51, 
	0x4d, 0x41, 0x43, 0x3a, 0x3b, 0x37, 0x26, 0x26, 
	0x38, 0x2e, 0x37, 0x47, 0x38, 0x47, 0x47, 0x45, 
	0x43, 0x50, 0x48, 0x4a, 0x47, 0x47, 0x4f, 0x60, 
	0x46, 0x52, 0x58, 0x52, 0x47, 0x47, 0x5a, 0x4a, 
	0x47, 0x47, 0x45, 0x41, 0x43, 0x3e, 0x25, 0x25, 
	0x38, 0x38, 0x3d, 0x47, 0x47, 0x47, 0x45, 0x47, 
	0x48, 0x4a, 0x4a, 0x47, 0x4e, 0x4e, 0x45, 0x45, 
	0x4d, 0x4d, 0x48, 0x52, 0x51, 0x39, 0x50, 0x50, 
	0x47, 0x47, 0x41, 0x3f, 0x3e, 0x36, 0x2e, 0x17, 
	0x2f, 0x3c, 0x36, 0x36, 0x38, 0x38, 0x4e, 0x3c, 
	0x48, 0x4c, 0x47, 0x47, 0x4a, 0x51, 0x4a, 0x47, 
	0x43, 0x43, 0x4a, 0x51, 0x4d, 0x4d, 0x51, 0x47, 
	0x4b, 0x4b, 0x45, 0x42, 0x3c, 0x38, 0x2d, 0x1a, 
	0x2f, 0x3c, 0x3a, 0x36, 0x43, 0x55, 0x47, 0x47, 
	0x45, 0x41, 0x4a, 0x50, 0x4e, 0x4a, 0x4a, 0x50, 
	0x48, 0x48, 0x4d, 0x51, 0x43, 0x4d, 0x51, 0x47, 
	0x51, 0x51, 0x42, 0x42, 0x42, 0x38, 0x38, 0x25, 
	0x32, 0x24, 0x31, 0x3a, 0x3c, 0x3c, 0x3c, 0x3c, 
	0x44, 0x44, 0x45, 0x51, 0x4c, 0x52, 0x50, 0x4d, 
	0x4b, 0x51, 0x47, 0x47, 0x2f, 0x43, 0x45, 0x48, 
	0x4a, 0x4a, 0x47, 0x2a, 0x36, 0x2c, 0x29, 0x1d, 
	0x32, 0x3b, 0x41, 0x41, 0x48, 0x33, 0x51, 0x44, 
	0x48, 0x44, 0x4c, 0x49, 0x48, 0x4e, 0x50, 0x4d, 
	0x5c, 0x41, 0x4c, 0x43, 0x43, 0x43, 0x45, 0x48, 
	0x4a, 0x4f, 0x47, 0x59, 0x47, 0x47, 0x3f, 0x29, 
	0x35, 0x41, 0x35, 0x4e, 0x48, 0x44, 0x50, 0x4b, 
	0x4c, 0x47, 0x44, 0x41, 0x45, 0x51, 0x4d, 0x57, 
	0x4a, 0x4a, 0x4d, 0x47, 0x4f, 0x3c, 0x4c, 0x43, 
	0x57, 0x47, 0x4b, 0x4b, 0x44, 0x44, 0x3e, 0x25, 
	0x35, 0x35, 0x44, 0x44, 0x50, 0x3e, 0x4b, 0x4b, 
	0x47, 0x43, 0x4a, 0x46, 0x49, 0x49, 0x57, 0x48, 
	0x4a, 0x43, 0x47, 0x47, 0x43, 0x3c, 0x46, 0x43, 
	0x4c, 0x47, 0x42, 0x4b, 0x44, 0x35, 0x3e, 0x25, 
	0x33, 0x3f, 0x3b, 0x48, 0x3a, 0x47, 0x4d, 0x4a, 
	0x4c, 0x50, 0x4c, 0x41, 0x4b, 0x51, 0x48, 0x4c, 
	0x4e, 0x57, 0x4c, 0x4c, 0x3c, 0x33, 0x33, 0x33, 
	0x48, 0x52, 0x47, 0x47, 0x44, 0x44, 0x33, 0x2c, 
	0x3f, 0x3f, 0x3f, 0x43, 0x47, 0x47, 0x45, 0x45, 
	0x57, 0x50, 0x53, 0x4c, 0x4b, 0x4b, 0x48, 0x4c, 
	0x49, 0x4e, 0x51, 0x4c, 0x3c, 0x4a, 0x51, 0x33, 
	0x48, 0x48, 0x47, 0x3c, 0x4a, 0x3c, 0x3c, 0x24, 
	0x3b, 0x3b, 0x41, 0x4a, 0x4a, 0x42, 0x45, 0x50, 
	0x50, 0x4a, 0x51, 0x51, 0x47, 0x51, 0x3c, 0x4a, 
	0x47, 0x51, 0x4a, 0x47, 0x49, 0x3e, 0x4d, 0x4d, 
	0x4e, 0x45, 0x52, 0x40, 0x42, 0x37, 0x31, 0x26, 
	0x3b, 0x25, 0x41, 0x41, 0x4a, 0x42, 0x50, 0x4a, 
	0x46, 0x41, 0x4a, 0x51, 0x51, 0x38, 0x35, 0x3c, 
	0x36, 0x40, 0x4a, 0x4a, 0x51, 0x3e, 0x4d, 0x32, 
	0x3f, 0x45, 0x47, 0x47, 0x37, 0x37, 0x41, 0x16, 
	0x3e, 0x35, 0x45, 0x4a, 0x42, 0x4e, 0x45, 0x4c, 
	0x44, 0x54, 0x57, 0x49, 0x46, 0x4a, 0x43, 0x43, 
	0x48, 0x4c, 0x48, 0x4c, 0x51, 0x4b, 0x49, 0x49, 
	0x3e, 0x4a, 0x4f, 0x4a, 0x48, 0x3e, 0x56, 0x13, 
	0x3e, 0x3e, 0x51, 0x4a, 0x4e, 0x4e, 0x4a, 0x4c, 
	0x54, 0x54, 0x4e, 0x41, 0x4a, 0x46, 0x4e, 0x4e, 
	0x4c, 0x4c, 0x4f, 0x52, 0x4b, 0x43, 0x49, 0x45, 
	0x43, 0x43, 0x4f, 0x4f, 0x48, 0x3e, 0x56, 0x2c, 
	0x3a, 0x3a, 0x43, 0x47, 0x54, 0x54, 0x55, 0x4e, 
	0x45, 0x4a, 0x3f, 0x3f, 0x43, 0x51, 0x4c, 0x4c, 
	0x51, 0x4d, 0x4b, 0x4e, 0x51, 0x47, 0x53, 0x4a, 
	0x3c, 0x52, 0x51, 0x4a, 0x46, 0x41, 0x46, 0x28, 
	0x33, 0x47, 0x4e, 0x4e, 0x54, 0x45, 0x4a, 0x4e, 
	0x4a, 0x4e, 0x3f, 0x4f, 0x51, 0x48, 0x4c, 0x49, 
	0x48, 0x4b, 0x47, 0x4b, 0x38, 0x38, 0x4a, 0x47, 
	0x44, 0x44, 0x4a, 0x3e, 0x3b, 0x3b, 0x58, 0x28, 
	0x37, 0x44, 0x4c, 0x4c, 0x4c, 0x3e, 0x41, 0x41, 
	0x3e, 0x3e, 0x43, 0x43, 0x48, 0x3c, 0x48, 0x48, 
	0x48, 0x3a, 0x40, 0x40, 0x35, 0x43, 0x45, 0x32, 
	0x28, 0x37, 0x43, 0x33, 0x42, 0x53, 0x51, 0x27, 
	0x21, 0x21, 0x25, 0x25, 0x28, 0x28, 0x27, 0x27, 
	0x31, 0x1e, 0x27, 0x27, 0x28, 0x28, 0x29, 0x29, 
	0x21, 0x2f, 0x29, 0x29, 0x2c, 0x1f, 0x26, 0x14, 
	0x14, 0x14, 0x1a, 0x1a, 0x27, 0x27, 0x27, 0x27, 
	
};

Gfx boss_rock_ss_ceiling_2_i4_light_i8_aligner[] = {gsSPEndDisplayList()};
u8 boss_rock_ss_ceiling_2_i4_light_i8[] = {
	0x69, 0x69, 0x7a, 0x7a, 0x80, 0x6e, 0x76, 0x76, 
	0x6b, 0x6b, 0x6d, 0x7f, 0x7f, 0x6f, 0x7b, 0x7b, 
	0x7d, 0x93, 0x76, 0x76, 0x6d, 0x6d, 0x72, 0x72, 
	0x75, 0x75, 0x73, 0x73, 0x7b, 0x7b, 0x71, 0x71, 
	0x78, 0x8d, 0x94, 0x7a, 0x80, 0x80, 0x89, 0x89, 
	0x7f, 0x7f, 0x7f, 0x7f, 0x95, 0x95, 0x8d, 0x8d, 
	0x7d, 0x7d, 0x8e, 0x76, 0x7f, 0x7f, 0x72, 0x86, 
	0x89, 0x89, 0x73, 0x8b, 0x93, 0x93, 0x99, 0x71, 
	0x87, 0x9d, 0x89, 0x89, 0x8f, 0x8b, 0x8d, 0x8a, 
	0x98, 0x8e, 0x8f, 0x8f, 0x8b, 0x9b, 0x93, 0x93, 
	0x88, 0x79, 0x88, 0x88, 0x8b, 0x83, 0x83, 0x83, 
	0x8c, 0x88, 0x88, 0x7e, 0x7e, 0x8d, 0x9e, 0x8a, 
	0x87, 0x87, 0x89, 0x89, 0x88, 0x88, 0x93, 0x93, 
	0x88, 0x8e, 0x8b, 0x8f, 0x8b, 0x91, 0x9b, 0x93, 
	0x88, 0xa3, 0x95, 0x88, 0x86, 0x86, 0x8a, 0x90, 
	0x8f, 0x88, 0x7e, 0x84, 0x84, 0x8d, 0x92, 0x7e, 
	0x69, 0x80, 0x7f, 0x90, 0x95, 0x83, 0x8b, 0x8e, 
	0x86, 0x79, 0x98, 0x98, 0x97, 0x92, 0x92, 0x8d, 
	0x8b, 0x8b, 0x80, 0x80, 0x87, 0x7a, 0x88, 0x84, 
	0x93, 0x89, 0x8b, 0x8b, 0x87, 0x7d, 0x77, 0x6f, 
	0x5b, 0x5b, 0x76, 0x90, 0x8a, 0x8e, 0x8e, 0x8b, 
	0x79, 0x65, 0x8e, 0x8e, 0x97, 0x8b, 0x8d, 0x95, 
	0x93, 0x8b, 0x86, 0x80, 0x87, 0x87, 0x84, 0x84, 
	0x8d, 0x83, 0x78, 0x8b, 0x7d, 0x6f, 0x6f, 0x6f, 
	0x54, 0x67, 0x7c, 0x90, 0x9d, 0x82, 0x93, 0x7a, 
	0x93, 0x89, 0x8e, 0x8e, 0x8d, 0x9b, 0x98, 0x8d, 
	0x8c, 0x91, 0x7d, 0x89, 0x8b, 0x75, 0x89, 0x89, 
	0x8f, 0x8f, 0x88, 0x88, 0x8d, 0x87, 0x7c, 0x67, 
	0x67, 0x83, 0x7c, 0x84, 0x82, 0x82, 0x89, 0x83, 
	0x89, 0x83, 0x89, 0x89, 0x9b, 0x9b, 0x8d, 0x8d, 
	0x88, 0x83, 0x89, 0x9e, 0x8b, 0x82, 0x93, 0x83, 
	0x8f, 0x8f, 0x84, 0x84, 0x8d, 0x7f, 0x67, 0x6e, 
	0x68, 0x83, 0x7e, 0x83, 0x8b, 0x86, 0x8b, 0x7a, 
	0x61, 0x85, 0x8d, 0x9b, 0x91, 0x8b, 0x8f, 0x83, 
	0x93, 0x79, 0x89, 0x93, 0x90, 0x8a, 0x83, 0x8d, 
	0x8d, 0x8a, 0x7f, 0x89, 0x7f, 0x7c, 0x73, 0x5f, 
	0x68, 0x68, 0x83, 0x7e, 0x86, 0x8b, 0x7a, 0x7a, 
	0x9b, 0x9b, 0x9b, 0x9b, 0x9b, 0x95, 0x8f, 0x98, 
	0x93, 0xa2, 0x93, 0x93, 0x81, 0x81, 0x93, 0x93, 
	0x85, 0x8a, 0x83, 0x83, 0x86, 0x82, 0x73, 0x6b, 
	0x77, 0x77, 0x7a, 0x8a, 0x8c, 0x75, 0x77, 0x80, 
	0x8a, 0x85, 0x92, 0x9b, 0x94, 0x89, 0x88, 0x9d, 
	0x8f, 0x8f, 0x96, 0x7d, 0x81, 0x8b, 0x88, 0x7d, 
	0x80, 0x90, 0x82, 0x87, 0x83, 0x7b, 0x70, 0x65, 
	0x77, 0x77, 0x84, 0x8a, 0x8c, 0x75, 0x80, 0x80, 
	0x85, 0x91, 0x83, 0x8c, 0x89, 0x89, 0x88, 0x9d, 
	0x89, 0x94, 0x96, 0x86, 0x8b, 0x87, 0x88, 0x7d, 
	0x80, 0x78, 0x82, 0x7a, 0x76, 0x6f, 0x78, 0x70, 
	0x61, 0x61, 0x7f, 0x7f, 0x7b, 0x64, 0x93, 0x7d, 
	0x84, 0x8a, 0x7d, 0x87, 0x93, 0x85, 0x8a, 0x8a, 
	0x90, 0x78, 0x8e, 0x8e, 0x83, 0x73, 0x84, 0x84, 
	0x8c, 0x86, 0x61, 0x74, 0x77, 0x6d, 0x75, 0x6a, 
	0x55, 0x61, 0x7a, 0x86, 0x89, 0x89, 0x93, 0x8a, 
	0x8a, 0x94, 0x9b, 0x8f, 0x7d, 0x93, 0x9e, 0x9e, 
	0x90, 0x80, 0x8e, 0x82, 0x9b, 0x5c, 0x72, 0x91, 
	0x96, 0x7c, 0x7f, 0x74, 0x77, 0x71, 0x58, 0x6a, 
	0x6c, 0x5a, 0x71, 0x85, 0x77, 0x7d, 0x90, 0x8a, 
	0x86, 0x91, 0x8b, 0x8b, 0x8b, 0x8b, 0x92, 0xa6, 
	0x8d, 0x95, 0x9b, 0x96, 0x8f, 0x81, 0x9b, 0x9b, 
	0x8c, 0x8c, 0x86, 0x80, 0x83, 0x73, 0x55, 0x5e, 
	0x6c, 0x6c, 0x79, 0x85, 0x85, 0x7d, 0x86, 0x90, 
	0x86, 0x8d, 0x8e, 0x88, 0x91, 0x91, 0x85, 0x85, 
	0x8d, 0x8d, 0x92, 0x96, 0xa3, 0x81, 0x9b, 0x9b, 
	0x8c, 0x8c, 0x86, 0x80, 0x7a, 0x6b, 0x5e, 0x55, 
	0x5e, 0x72, 0x70, 0x77, 0x78, 0x78, 0x8b, 0x7e, 
	0x85, 0x89, 0x8b, 0x8b, 0x8e, 0x93, 0x8e, 0x88, 
	0x85, 0x85, 0x92, 0x94, 0x94, 0x94, 0x96, 0x89, 
	0x8c, 0x8c, 0x88, 0x82, 0x76, 0x76, 0x66, 0x59, 
	0x72, 0x72, 0x7b, 0x7b, 0x84, 0x99, 0x7e, 0x8b, 
	0x85, 0x80, 0x8f, 0x96, 0x93, 0x8e, 0x8e, 0x98, 
	0x89, 0x90, 0x92, 0x94, 0x86, 0x9d, 0x96, 0x89, 
	0x90, 0x96, 0x7e, 0x82, 0x86, 0x7c, 0x7d, 0x66, 
	0x68, 0x51, 0x76, 0x76, 0x79, 0x79, 0x7f, 0x7f, 
	0x82, 0x87, 0x83, 0x95, 0x8e, 0x95, 0x99, 0x93, 
	0x8f, 0x96, 0x8a, 0x8d, 0x5e, 0x80, 0x8b, 0x95, 
	0x93, 0x8b, 0x79, 0x66, 0x75, 0x65, 0x57, 0x57, 
	0x68, 0x77, 0x80, 0x80, 0x8e, 0x6c, 0x98, 0x7f, 
	0x82, 0x82, 0x8e, 0x8a, 0x83, 0x89, 0x93, 0x89, 
	0x96, 0x83, 0x93, 0x8a, 0x80, 0x80, 0x8b, 0x95, 
	0x98, 0xa1, 0x98, 0x98, 0x90, 0x7f, 0x6b, 0x63, 
	0x7d, 0x7d, 0x6a, 0x99, 0x8b, 0x8b, 0x9a, 0x93, 
	0x81, 0x86, 0x88, 0x7c, 0x85, 0x8b, 0x8f, 0x8d, 
	0x82, 0x86, 0x8b, 0x89, 0x96, 0x83, 0x95, 0x92, 
	0x98, 0x67, 0x7d, 0x8e, 0x85, 0x85, 0x6f, 0x61, 
	0x6e, 0x6e, 0x7b, 0x87, 0x93, 0x7f, 0x93, 0x93, 
	0x86, 0x86, 0x90, 0x90, 0x8b, 0x85, 0x8f, 0x8b, 
	0x82, 0x82, 0x89, 0x86, 0x96, 0x83, 0x95, 0x8e, 
	0x85, 0x79, 0x60, 0x8e, 0x85, 0x6f, 0x77, 0x69, 
	0x64, 0x7a, 0x6c, 0x81, 0x6f, 0x83, 0x8c, 0x8c, 
	0x92, 0x92, 0x93, 0x83, 0x8d, 0x96, 0x8b, 0x8f, 
	0x9b, 0x9b, 0x88, 0x8e, 0x74, 0x7c, 0x87, 0x7d, 
	0x7d, 0x83, 0x88, 0x93, 0x83, 0x83, 0x6e, 0x73, 
	0x7a, 0x7a, 0x79, 0x79, 0x83, 0x83, 0x8a, 0x86, 
	0x9b, 0x92, 0x8c, 0x8c, 0x7f, 0x87, 0x84, 0x96, 
	0x8e, 0x8e, 0x8e, 0x88, 0x89, 0x89, 0x8d, 0x7d, 
	0x83, 0x79, 0x88, 0x78, 0x83, 0x77, 0x7a, 0x6e, 
	0x75, 0x75, 0x7b, 0x88, 0x82, 0x82, 0x8b, 0x95, 
	0x9b, 0x87, 0x8e, 0x8e, 0x92, 0x9b, 0x83, 0x8b, 
	0x8a, 0x8a, 0x8a, 0x83, 0x90, 0x7d, 0x90, 0x90, 
	0x81, 0x6f, 0x87, 0x7f, 0x82, 0x74, 0x63, 0x6a, 
	0x75, 0x51, 0x7b, 0x7b, 0x82, 0x82, 0x95, 0x8b, 
	0x7c, 0x7c, 0x7f, 0x8e, 0x9b, 0x83, 0x77, 0x77, 
	0x6c, 0x7e, 0x8a, 0x8a, 0x90, 0x72, 0x90, 0x6d, 
	0x8d, 0x6f, 0x87, 0x87, 0x7c, 0x74, 0x77, 0x6a, 
	0x70, 0x88, 0x87, 0x8f, 0x69, 0x9e, 0x85, 0x8b, 
	0x7f, 0x95, 0x8f, 0x84, 0x8e, 0x8e, 0x8a, 0x72, 
	0x8a, 0x95, 0x8e, 0x8e, 0x8c, 0x8c, 0x8a, 0x8a, 
	0x83, 0x98, 0x83, 0x89, 0x87, 0x80, 0x78, 0x6b, 
	0x70, 0x88, 0x8f, 0x87, 0x8a, 0x8a, 0x8f, 0x8b, 
	0x87, 0x8d, 0x84, 0x74, 0x8e, 0x83, 0x8a, 0x8a, 
	0x8a, 0x95, 0x8e, 0x96, 0x8c, 0x87, 0x8a, 0x84, 
	0x83, 0x83, 0x89, 0x83, 0x87, 0x78, 0x78, 0x70, 
	0x6b, 0x93, 0x7f, 0x7f, 0x8b, 0x8b, 0x8a, 0x8a, 
	0x86, 0x8b, 0x7f, 0x6f, 0x82, 0x8a, 0x89, 0x89, 
	0x8d, 0x8d, 0x88, 0x8e, 0x85, 0x7c, 0x93, 0x8a, 
	0x7e, 0x82, 0x90, 0x76, 0x7f, 0x7f, 0x7e, 0x67, 
	0x55, 0x93, 0x92, 0x92, 0x93, 0x7f, 0x8a, 0x8a, 
	0x8f, 0x8f, 0x7f, 0x8c, 0x8a, 0x8a, 0x85, 0x85, 
	0x8a, 0x87, 0x81, 0x8e, 0x6f, 0x6f, 0x85, 0x7c, 
	0x88, 0x88, 0x80, 0x76, 0x7f, 0x70, 0x8d, 0x75, 
	0x70, 0x8c, 0xa3, 0x85, 0x71, 0x71, 0x83, 0x83, 
	0x74, 0x74, 0x5f, 0x77, 0x86, 0x86, 0x85, 0x85, 
	0x88, 0x74, 0x81, 0x81, 0x6d, 0x6d, 0x76, 0x5e, 
	0x6a, 0x83, 0x82, 0x66, 0x85, 0xa3, 0x90, 0x6b, 
	0x5d, 0x41, 0x55, 0x55, 0x50, 0x50, 0x58, 0x58, 
	0x5f, 0x3f, 0x38, 0x4f, 0x4d, 0x62, 0x5c, 0x5c, 
	0x52, 0x65, 0x5d, 0x5d, 0x4f, 0x4f, 0x4f, 0x39, 
	0x42, 0x42, 0x3b, 0x55, 0x55, 0x55, 0x56, 0x56, 
	
};

Vtx boss_rock_dl_mesh_layer_1_vtx_0[14] = {
	{{{-200, 0, 200},0, {2032, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-200, 400, -200},0, {1008, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-200, 0, -200},0, {2032, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-200, 400, 200},0, {1008, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{200, 400, -200},0, {-16, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{200, 400, 200},0, {-16, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{200, 0, 200},0, {-16, -1040},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-200, 0, 200},0, {1008, -1040},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{200, 0, -200},0, {-1040, 1008},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{200, 0, 200},0, {-1040, -16},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-200, 0, -200},0, {1008, 2032},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{200, 0, 200},0, {-16, 3055},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{-200, 0, 200},0, {1008, 3055},{0xFF, 0xFF, 0xFF, 0xFF}}},
	{{{200, 0, -200},0, {-16, 2032},{0xFF, 0xFF, 0xFF, 0xFF}}},
};

Gfx boss_rock_dl_mesh_layer_1_tri_0[] = {
	gsSPVertex(boss_rock_dl_mesh_layer_1_vtx_0 + 0, 14, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 1, 3, 0, 4, 3, 5, 0),
	gsSP2Triangles(6, 5, 3, 0, 6, 3, 7, 0),
	gsSP2Triangles(8, 4, 5, 0, 8, 5, 9, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
	gsSP2Triangles(10, 4, 13, 0, 10, 1, 4, 0),
	gsSPEndDisplayList(),
};


Gfx mat_boss_rock_Rock_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b, 32, boss_rock_ss_ceiling_2_i4_dark2_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(boss_rock_Rock_002_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_boss_rock_Rock_002[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx mat_boss_rock_Rock2_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b, 32, boss_rock_ss_ceiling_2_i4_light_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 124, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(boss_rock_Rock2_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_boss_rock_Rock2_001[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx boss_rock_dl_mesh_layer_1[] = {
	gsSPDisplayList(mat_boss_rock_Rock_002),
	gsSPDisplayList(boss_rock_dl_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_boss_rock_Rock_002),
	gsSPEndDisplayList(),
};

Gfx boss_rock_dl_mesh_layer_1_mat_override_Rock2_001_0[] = {
	gsSPDisplayList(mat_boss_rock_Rock2_001),
	gsSPDisplayList(boss_rock_dl_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_boss_rock_Rock2_001),
	gsSPEndDisplayList(),
};

Gfx boss_rock_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

