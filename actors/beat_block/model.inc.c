Lights1 beat_block_white_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 beat_block_red_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 beat_block_blue_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx beat_block_chikachikablock_ai_emm01_ci8_aligner[] = {gsSPEndDisplayList()};
u8 beat_block_chikachikablock_ai_emm01_ci8[] = {
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 
	0x03, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 
	0x05, 0x03, 0x03, 0x03, 0x03, 0x05, 0x04, 0x03, 
	0x03, 0x02, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
	0x00, 0x01, 0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 
	0x04, 0x04, 0x05, 0x05, 0x06, 0x06, 0x06, 0x07, 
	0x06, 0x06, 0x06, 0x06, 0x05, 0x04, 0x04, 0x04, 
	0x03, 0x03, 0x03, 0x08, 0x08, 0x01, 0x01, 0x00, 
	0x01, 0x01, 0x08, 0x08, 0x04, 0x05, 0x05, 0x04, 
	0x04, 0x09, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 
	0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x06, 0x05, 
	0x05, 0x05, 0x04, 0x04, 0x08, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x03, 0x03, 0x03, 0x05, 0x06, 
	0x06, 0x06, 0x0a, 0x0b, 0x0b, 0x0c, 0x0c, 0x0c, 
	0x0b, 0x0b, 0x0b, 0x0b, 0x0c, 0x06, 0x06, 0x06, 
	0x06, 0x05, 0x05, 0x04, 0x0d, 0x02, 0x01, 0x01, 
	0x01, 0x01, 0x0d, 0x03, 0x03, 0x03, 0x06, 0x06, 
	0x06, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0e, 0x0f, 
	0x10, 0x10, 0x0b, 0x0b, 0x0b, 0x0c, 0x0b, 0x0a, 
	0x0a, 0x06, 0x06, 0x05, 0x05, 0x03, 0x02, 0x01, 
	0x01, 0x03, 0x05, 0x03, 0x03, 0x06, 0x0a, 0x0b, 
	0x0b, 0x0b, 0x11, 0x12, 0x10, 0x10, 0x10, 0x0f, 
	0x10, 0x10, 0x10, 0x10, 0x12, 0x0b, 0x0b, 0x0b, 
	0x0b, 0x0a, 0x06, 0x06, 0x05, 0x03, 0x03, 0x01, 
	0x02, 0x03, 0x05, 0x05, 0x06, 0x0a, 0x0b, 0x0b, 
	0x12, 0x0f, 0x10, 0x10, 0x10, 0x10, 0x13, 0x14, 
	0x15, 0x13, 0x10, 0x10, 0x10, 0x10, 0x0f, 0x0b, 
	0x0b, 0x0b, 0x0a, 0x06, 0x05, 0x03, 0x03, 0x02, 
	0x03, 0x03, 0x04, 0x06, 0x06, 0x0b, 0x0b, 0x12, 
	0x16, 0x17, 0x14, 0x15, 0x15, 0x15, 0x15, 0x18, 
	0x19, 0x15, 0x15, 0x15, 0x15, 0x18, 0x17, 0x0f, 
	0x0b, 0x0b, 0x0b, 0x06, 0x09, 0x05, 0x03, 0x03, 
	0x03, 0x04, 0x04, 0x06, 0x06, 0x0b, 0x12, 0x16, 
	0x17, 0x18, 0x19, 0x19, 0x15, 0x1a, 0x1b, 0x1b, 
	0x1c, 0x1c, 0x1a, 0x15, 0x19, 0x18, 0x19, 0x0f, 
	0x0f, 0x0b, 0x1d, 0x1e, 0x1e, 0x05, 0x04, 0x03, 
	0x04, 0x04, 0x06, 0x06, 0x0b, 0x0b, 0x0f, 0x16, 
	0x18, 0x19, 0x15, 0x1a, 0x1a, 0x1c, 0x1f, 0x1c, 
	0x1a, 0x1a, 0x1a, 0x20, 0x1c, 0x19, 0x14, 0x14, 
	0x0f, 0x0f, 0x1d, 0x1d, 0x06, 0x06, 0x05, 0x03, 
	0x03, 0x05, 0x06, 0x0a, 0x0b, 0x11, 0x10, 0x14, 
	0x14, 0x15, 0x21, 0x21, 0x22, 0x22, 0x23, 0x23, 
	0x24, 0x24, 0x22, 0x22, 0x20, 0x1a, 0x15, 0x25, 
	0x10, 0x10, 0x0b, 0x0c, 0x06, 0x26, 0x03, 0x03, 
	0x03, 0x05, 0x06, 0x0b, 0x0b, 0x12, 0x10, 0x15, 
	0x15, 0x1a, 0x21, 0x22, 0x27, 0x27, 0x28, 0x28, 
	0x24, 0x24, 0x27, 0x27, 0x22, 0x20, 0x22, 0x25, 
	0x13, 0x10, 0x12, 0x0b, 0x0c, 0x29, 0x05, 0x03, 
	0x03, 0x06, 0x06, 0x0b, 0x0b, 0x10, 0x10, 0x15, 
	0x2a, 0x1a, 0x22, 0x27, 0x27, 0x24, 0x24, 0x28, 
	0x24, 0x24, 0x24, 0x27, 0x27, 0x22, 0x1a, 0x2a, 
	0x15, 0x10, 0x10, 0x0b, 0x0b, 0x0a, 0x06, 0x03, 
	0x03, 0x06, 0x06, 0x1d, 0x0b, 0x10, 0x10, 0x15, 
	0x1a, 0x1f, 0x2b, 0x27, 0x24, 0x24, 0x27, 0x2c, 
	0x23, 0x2d, 0x24, 0x24, 0x27, 0x20, 0x1c, 0x1a, 
	0x15, 0x10, 0x10, 0x0b, 0x1d, 0x06, 0x06, 0x03, 
	0x03, 0x06, 0x07, 0x1d, 0x1d, 0x10, 0x13, 0x15, 
	0x1b, 0x1f, 0x23, 0x28, 0x24, 0x27, 0x2c, 0x2e, 
	0x2f, 0x30, 0x2d, 0x24, 0x23, 0x31, 0x1f, 0x1c, 
	0x15, 0x13, 0x0f, 0x16, 0x1d, 0x06, 0x06, 0x03, 
	0x04, 0x07, 0x07, 0x1d, 0x16, 0x0f, 0x14, 0x18, 
	0x1b, 0x1f, 0x23, 0x23, 0x28, 0x2f, 0x2e, 0x2e, 
	0x2f, 0x2f, 0x32, 0x23, 0x31, 0x31, 0x1c, 0x1c, 
	0x19, 0x14, 0x17, 0x17, 0x1d, 0x06, 0x06, 0x05, 
	0x05, 0x06, 0x06, 0x0b, 0x10, 0x10, 0x15, 0x15, 
	0x20, 0x22, 0x24, 0x24, 0x24, 0x32, 0x32, 0x32, 
	0x2d, 0x2d, 0x2d, 0x28, 0x23, 0x23, 0x22, 0x21, 
	0x25, 0x13, 0x0f, 0x0f, 0x0b, 0x0a, 0x26, 0x03, 
	0x03, 0x06, 0x06, 0x0b, 0x10, 0x10, 0x13, 0x15, 
	0x1a, 0x1a, 0x24, 0x24, 0x24, 0x2d, 0x32, 0x32, 
	0x2d, 0x2d, 0x24, 0x24, 0x28, 0x23, 0x22, 0x21, 
	0x2a, 0x13, 0x10, 0x0f, 0x0b, 0x29, 0x06, 0x03, 
	0x03, 0x06, 0x06, 0x0b, 0x0b, 0x10, 0x10, 0x15, 
	0x1a, 0x22, 0x22, 0x27, 0x24, 0x24, 0x2d, 0x32, 
	0x2d, 0x24, 0x24, 0x24, 0x27, 0x27, 0x22, 0x22, 
	0x15, 0x10, 0x10, 0x0b, 0x0b, 0x0a, 0x06, 0x03, 
	0x03, 0x06, 0x06, 0x0c, 0x0b, 0x10, 0x10, 0x15, 
	0x15, 0x20, 0x22, 0x27, 0x27, 0x24, 0x24, 0x23, 
	0x28, 0x24, 0x24, 0x27, 0x27, 0x22, 0x20, 0x15, 
	0x15, 0x10, 0x10, 0x0b, 0x1d, 0x06, 0x06, 0x03, 
	0x03, 0x05, 0x07, 0x1e, 0x0e, 0x12, 0x10, 0x15, 
	0x19, 0x1c, 0x20, 0x22, 0x27, 0x27, 0x23, 0x31, 
	0x23, 0x28, 0x27, 0x27, 0x22, 0x1f, 0x1c, 0x19, 
	0x15, 0x10, 0x12, 0x1d, 0x1d, 0x06, 0x05, 0x03, 
	0x05, 0x04, 0x07, 0x06, 0x1d, 0x0f, 0x12, 0x18, 
	0x18, 0x19, 0x1c, 0x20, 0x22, 0x20, 0x31, 0x31, 
	0x23, 0x23, 0x2b, 0x22, 0x1f, 0x1b, 0x19, 0x19, 
	0x14, 0x10, 0x1d, 0x1d, 0x1e, 0x06, 0x05, 0x03, 
	0x04, 0x05, 0x06, 0x06, 0x0b, 0x0b, 0x0f, 0x0f, 
	0x14, 0x14, 0x15, 0x1a, 0x1a, 0x20, 0x1c, 0x20, 
	0x22, 0x22, 0x1a, 0x20, 0x1c, 0x19, 0x15, 0x15, 
	0x10, 0x0f, 0x1d, 0x1d, 0x06, 0x06, 0x05, 0x03, 
	0x03, 0x05, 0x06, 0x06, 0x0a, 0x0b, 0x0b, 0x0f, 
	0x0f, 0x15, 0x25, 0x25, 0x2a, 0x1a, 0x1a, 0x1a, 
	0x21, 0x21, 0x22, 0x2a, 0x15, 0x14, 0x15, 0x10, 
	0x10, 0x0b, 0x0b, 0x06, 0x06, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x05, 0x26, 0x0a, 0x0b, 0x0b, 0x0b, 
	0x0f, 0x12, 0x10, 0x13, 0x15, 0x15, 0x15, 0x15, 
	0x25, 0x2a, 0x15, 0x15, 0x15, 0x14, 0x10, 0x10, 
	0x0b, 0x0b, 0x0b, 0x06, 0x06, 0x03, 0x03, 0x03, 
	0x02, 0x03, 0x03, 0x06, 0x06, 0x0a, 0x0b, 0x0b, 
	0x0b, 0x0f, 0x10, 0x10, 0x10, 0x10, 0x13, 0x15, 
	0x15, 0x13, 0x10, 0x10, 0x10, 0x10, 0x0f, 0x0b, 
	0x0b, 0x0b, 0x0a, 0x06, 0x06, 0x03, 0x03, 0x02, 
	0x01, 0x03, 0x04, 0x04, 0x06, 0x06, 0x0a, 0x0b, 
	0x1d, 0x1d, 0x0f, 0x12, 0x10, 0x10, 0x0f, 0x17, 
	0x0f, 0x10, 0x10, 0x10, 0x12, 0x1d, 0x1d, 0x0b, 
	0x0b, 0x0a, 0x06, 0x06, 0x04, 0x05, 0x03, 0x01, 
	0x01, 0x08, 0x04, 0x04, 0x05, 0x06, 0x06, 0x06, 
	0x1e, 0x1d, 0x1d, 0x0e, 0x0b, 0x0b, 0x16, 0x17, 
	0x1d, 0x1d, 0x0b, 0x0b, 0x1d, 0x1d, 0x1d, 0x06, 
	0x06, 0x06, 0x06, 0x04, 0x04, 0x04, 0x01, 0x01, 
	0x01, 0x08, 0x08, 0x04, 0x05, 0x05, 0x05, 0x06, 
	0x1e, 0x06, 0x06, 0x0c, 0x0b, 0x1d, 0x1d, 0x1d, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x1d, 0x1e, 0x06, 0x06, 
	0x06, 0x06, 0x04, 0x04, 0x04, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x02, 0x03, 0x03, 0x03, 0x05, 
	0x06, 0x06, 0x26, 0x29, 0x0a, 0x06, 0x06, 0x06, 
	0x0a, 0x29, 0x0a, 0x06, 0x06, 0x06, 0x06, 0x03, 
	0x03, 0x03, 0x05, 0x0d, 0x01, 0x01, 0x01, 0x01, 
	0x00, 0x01, 0x01, 0x01, 0x02, 0x03, 0x03, 0x03, 
	0x05, 0x05, 0x03, 0x05, 0x06, 0x06, 0x06, 0x06, 
	0x26, 0x06, 0x06, 0x06, 0x05, 0x05, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x05, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x02, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
	
};

Gfx beat_block_chikachikablock_ai_emm01_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 beat_block_chikachikablock_ai_emm01_ci8_pal_rgba16[] = {
	0xba, 0x5f, 0xba, 0x5d, 0xb2, 0x5d, 0xb2, 0x5b, 
	0xba, 0x9b, 0xb2, 0x9b, 0xb2, 0x99, 0xba, 0xd9, 
	0xba, 0x9d, 0xba, 0x99, 0xaa, 0x99, 0xaa, 0x97, 
	0xb2, 0x97, 0xba, 0x5b, 0xaa, 0xd7, 0xaa, 0xd5, 
	0xa2, 0x95, 0xa2, 0x97, 0xaa, 0x95, 0xa2, 0x93, 
	0xaa, 0xd3, 0xa2, 0xd3, 0xb2, 0xd5, 0xb3, 0x15, 
	0xb3, 0x13, 0xab, 0x13, 0xa2, 0xd1, 0xb3, 0x51, 
	0xab, 0x11, 0xb2, 0xd7, 0xb2, 0xd9, 0xab, 0x51, 
	0xa3, 0x11, 0x9a, 0x91, 0x9a, 0xd1, 0xa3, 0x0f, 
	0x92, 0xcf, 0x9a, 0x93, 0xb2, 0x59, 0x9a, 0xcf, 
	0x9b, 0x0f, 0xaa, 0x59, 0x9a, 0xd3, 0x9b, 0x11, 
	0xab, 0x4d, 0x92, 0xcd, 0xab, 0x8d, 0xa3, 0x4d, 
	0xa3, 0x0d, 0xab, 0x4f, 0x9b, 0x0d, 
};

Gfx beat_block_chikachikablock_ai_emm02_ci8_aligner[] = {gsSPEndDisplayList()};
u8 beat_block_chikachikablock_ai_emm02_ci8[] = {
	0x00, 0x01, 0x02, 0x02, 0x03, 0x03, 0x04, 0x05, 
	0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x08, 
	0x08, 0x09, 0x07, 0x07, 0x07, 0x06, 0x06, 0x05, 
	0x05, 0x04, 0x03, 0x03, 0x0a, 0x02, 0x01, 0x00, 
	0x01, 0x02, 0x0a, 0x02, 0x03, 0x05, 0x05, 0x07, 
	0x0b, 0x0c, 0x08, 0x0d, 0x0d, 0x0d, 0x0c, 0x0c, 
	0x0e, 0x0f, 0x0d, 0x0d, 0x0e, 0x0b, 0x0b, 0x08, 
	0x07, 0x05, 0x06, 0x10, 0x0a, 0x02, 0x02, 0x01, 
	0x02, 0x0a, 0x0a, 0x03, 0x06, 0x06, 0x07, 0x0b, 
	0x0c, 0x0c, 0x0f, 0x0f, 0x11, 0x12, 0x13, 0x13, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0c, 0x0c, 0x0c, 0x08, 
	0x08, 0x07, 0x0b, 0x10, 0x10, 0x03, 0x02, 0x02, 
	0x02, 0x02, 0x03, 0x05, 0x07, 0x07, 0x09, 0x0e, 
	0x0f, 0x11, 0x14, 0x15, 0x16, 0x17, 0x17, 0x17, 
	0x15, 0x15, 0x15, 0x14, 0x18, 0x18, 0x11, 0x11, 
	0x0d, 0x0d, 0x08, 0x06, 0x06, 0x04, 0x03, 0x02, 
	0x03, 0x03, 0x06, 0x07, 0x0d, 0x0d, 0x0d, 0x11, 
	0x18, 0x14, 0x15, 0x15, 0x15, 0x16, 0x19, 0x19, 
	0x1a, 0x1a, 0x1a, 0x16, 0x16, 0x17, 0x16, 0x15, 
	0x1b, 0x0d, 0x0d, 0x08, 0x08, 0x05, 0x04, 0x03, 
	0x03, 0x05, 0x06, 0x07, 0x0d, 0x0d, 0x14, 0x15, 
	0x16, 0x16, 0x1a, 0x1a, 0x1a, 0x1a, 0x1c, 0x1d, 
	0x1e, 0x1a, 0x1a, 0x1a, 0x1a, 0x16, 0x16, 0x15, 
	0x15, 0x14, 0x0d, 0x0d, 0x07, 0x07, 0x05, 0x03, 
	0x04, 0x05, 0x07, 0x08, 0x0d, 0x14, 0x15, 0x15, 
	0x16, 0x19, 0x1c, 0x1a, 0x1a, 0x1f, 0x1f, 0x20, 
	0x1c, 0x1f, 0x1f, 0x1a, 0x1a, 0x1c, 0x19, 0x21, 
	0x15, 0x15, 0x14, 0x0d, 0x08, 0x07, 0x05, 0x04, 
	0x05, 0x07, 0x0b, 0x08, 0x0d, 0x15, 0x15, 0x1c, 
	0x22, 0x23, 0x24, 0x1c, 0x1f, 0x1f, 0x20, 0x25, 
	0x26, 0x20, 0x1f, 0x1f, 0x1c, 0x23, 0x23, 0x19, 
	0x1c, 0x15, 0x15, 0x0f, 0x0c, 0x08, 0x07, 0x05, 
	0x06, 0x0b, 0x0c, 0x0f, 0x0f, 0x16, 0x16, 0x22, 
	0x27, 0x23, 0x26, 0x24, 0x1f, 0x28, 0x29, 0x29, 
	0x2a, 0x2a, 0x2b, 0x1c, 0x27, 0x27, 0x23, 0x2c, 
	0x19, 0x21, 0x17, 0x2d, 0x13, 0x08, 0x08, 0x05, 
	0x06, 0x08, 0x0c, 0x0f, 0x14, 0x16, 0x19, 0x23, 
	0x23, 0x24, 0x20, 0x20, 0x20, 0x27, 0x27, 0x27, 
	0x28, 0x28, 0x20, 0x2a, 0x27, 0x23, 0x24, 0x20, 
	0x20, 0x19, 0x22, 0x12, 0x0f, 0x0d, 0x08, 0x06, 
	0x07, 0x08, 0x0f, 0x1b, 0x15, 0x1a, 0x1c, 0x20, 
	0x24, 0x20, 0x2e, 0x2e, 0x2f, 0x2b, 0x2a, 0x2a, 
	0x2f, 0x2f, 0x2f, 0x2b, 0x24, 0x24, 0x30, 0x2e, 
	0x1e, 0x1a, 0x16, 0x17, 0x11, 0x31, 0x0d, 0x07, 
	0x07, 0x0d, 0x0f, 0x15, 0x15, 0x1a, 0x1a, 0x1c, 
	0x20, 0x20, 0x2e, 0x2f, 0x2f, 0x32, 0x33, 0x2a, 
	0x2f, 0x2f, 0x32, 0x2f, 0x2b, 0x24, 0x2f, 0x2e, 
	0x1f, 0x1a, 0x1a, 0x16, 0x14, 0x31, 0x0d, 0x07, 
	0x07, 0x0d, 0x11, 0x16, 0x15, 0x1a, 0x1a, 0x1f, 
	0x1f, 0x2b, 0x2f, 0x2f, 0x32, 0x2b, 0x2b, 0x34, 
	0x2b, 0x2b, 0x2b, 0x32, 0x2f, 0x2b, 0x2b, 0x2f, 
	0x1f, 0x1a, 0x1a, 0x16, 0x14, 0x14, 0x0d, 0x07, 
	0x07, 0x0d, 0x12, 0x18, 0x16, 0x1a, 0x1f, 0x1f, 
	0x28, 0x27, 0x28, 0x32, 0x2b, 0x2b, 0x33, 0x35, 
	0x36, 0x2b, 0x2b, 0x2b, 0x32, 0x2a, 0x27, 0x2b, 
	0x1f, 0x1f, 0x1a, 0x16, 0x12, 0x0f, 0x0d, 0x07, 
	0x07, 0x0c, 0x13, 0x37, 0x17, 0x1c, 0x1f, 0x20, 
	0x29, 0x25, 0x36, 0x24, 0x2b, 0x33, 0x38, 0x39, 
	0x3a, 0x36, 0x2b, 0x2b, 0x36, 0x38, 0x27, 0x2a, 
	0x20, 0x1f, 0x21, 0x3b, 0x3b, 0x0f, 0x0f, 0x07, 
	0x08, 0x0c, 0x13, 0x22, 0x22, 0x2c, 0x1d, 0x25, 
	0x29, 0x25, 0x36, 0x36, 0x2a, 0x35, 0x39, 0x39, 
	0x3a, 0x3a, 0x3c, 0x36, 0x38, 0x35, 0x36, 0x2a, 
	0x2a, 0x20, 0x23, 0x3b, 0x12, 0x0f, 0x0e, 0x08, 
	0x07, 0x0f, 0x0f, 0x15, 0x1a, 0x1e, 0x1c, 0x24, 
	0x24, 0x2b, 0x2f, 0x2f, 0x2b, 0x2a, 0x36, 0x36, 
	0x2f, 0x2f, 0x2f, 0x33, 0x2a, 0x2a, 0x32, 0x2e, 
	0x2e, 0x1c, 0x19, 0x19, 0x14, 0x1b, 0x31, 0x0d, 
	0x09, 0x0d, 0x0f, 0x15, 0x1a, 0x1a, 0x1f, 0x1c, 
	0x24, 0x2b, 0x2f, 0x2f, 0x2b, 0x2b, 0x2a, 0x36, 
	0x2f, 0x2f, 0x2b, 0x2b, 0x33, 0x2a, 0x30, 0x2e, 
	0x2f, 0x1f, 0x1c, 0x19, 0x14, 0x1b, 0x0d, 0x09, 
	0x07, 0x0d, 0x11, 0x15, 0x1a, 0x1a, 0x1f, 0x1f, 
	0x30, 0x2b, 0x2f, 0x32, 0x2b, 0x2b, 0x2b, 0x2a, 
	0x2f, 0x2b, 0x2b, 0x2b, 0x32, 0x2b, 0x30, 0x2f, 
	0x1f, 0x1f, 0x1a, 0x16, 0x16, 0x1b, 0x0d, 0x07, 
	0x07, 0x0d, 0x0f, 0x17, 0x16, 0x1a, 0x1a, 0x1f, 
	0x1c, 0x2a, 0x2b, 0x2f, 0x32, 0x2b, 0x2b, 0x36, 
	0x3d, 0x2b, 0x2b, 0x32, 0x2f, 0x2b, 0x2a, 0x1f, 
	0x1f, 0x1a, 0x1a, 0x16, 0x18, 0x11, 0x0d, 0x07, 
	0x07, 0x0e, 0x0c, 0x12, 0x17, 0x1a, 0x1a, 0x1c, 
	0x27, 0x27, 0x2a, 0x2b, 0x2f, 0x32, 0x36, 0x3e, 
	0x36, 0x24, 0x32, 0x2f, 0x2b, 0x29, 0x27, 0x24, 
	0x1c, 0x1a, 0x1c, 0x37, 0x12, 0x0f, 0x0d, 0x07, 
	0x06, 0x0b, 0x0c, 0x12, 0x17, 0x19, 0x1c, 0x23, 
	0x27, 0x27, 0x2a, 0x2a, 0x2b, 0x2a, 0x38, 0x35, 
	0x36, 0x36, 0x28, 0x2b, 0x29, 0x29, 0x27, 0x26, 
	0x24, 0x1c, 0x22, 0x3b, 0x12, 0x0f, 0x08, 0x07, 
	0x06, 0x08, 0x08, 0x11, 0x16, 0x16, 0x19, 0x2c, 
	0x2c, 0x28, 0x20, 0x32, 0x20, 0x2a, 0x36, 0x3c, 
	0x2b, 0x2b, 0x2b, 0x24, 0x3f, 0x3f, 0x20, 0x1c, 
	0x1c, 0x16, 0x22, 0x18, 0x0f, 0x0d, 0x07, 0x05, 
	0x05, 0x08, 0x08, 0x11, 0x15, 0x15, 0x15, 0x21, 
	0x1d, 0x1c, 0x2e, 0x2e, 0x2f, 0x30, 0x24, 0x28, 
	0x2e, 0x2e, 0x2f, 0x1f, 0x20, 0x24, 0x1c, 0x1e, 
	0x1a, 0x40, 0x16, 0x18, 0x0d, 0x0d, 0x07, 0x05, 
	0x05, 0x07, 0x08, 0x0d, 0x1b, 0x15, 0x15, 0x1a, 
	0x21, 0x1c, 0x1e, 0x1f, 0x1f, 0x1f, 0x1c, 0x24, 
	0x2e, 0x2f, 0x1f, 0x1f, 0x1c, 0x20, 0x1c, 0x1a, 
	0x1a, 0x15, 0x15, 0x11, 0x0d, 0x0d, 0x07, 0x05, 
	0x04, 0x05, 0x07, 0x0d, 0x0d, 0x14, 0x15, 0x15, 
	0x15, 0x19, 0x1a, 0x1a, 0x1a, 0x1f, 0x1f, 0x20, 
	0x1c, 0x1f, 0x1f, 0x1a, 0x1a, 0x1c, 0x16, 0x40, 
	0x15, 0x15, 0x14, 0x0d, 0x09, 0x07, 0x05, 0x04, 
	0x03, 0x05, 0x0b, 0x08, 0x0d, 0x0d, 0x14, 0x15, 
	0x17, 0x12, 0x19, 0x1a, 0x1a, 0x1a, 0x21, 0x23, 
	0x2c, 0x1c, 0x1a, 0x1a, 0x1c, 0x22, 0x37, 0x16, 
	0x15, 0x14, 0x0d, 0x0e, 0x0b, 0x06, 0x05, 0x03, 
	0x03, 0x10, 0x10, 0x06, 0x08, 0x0d, 0x0d, 0x0f, 
	0x2d, 0x12, 0x17, 0x17, 0x16, 0x16, 0x3b, 0x3b, 
	0x22, 0x22, 0x16, 0x16, 0x37, 0x3b, 0x12, 0x0f, 
	0x11, 0x0d, 0x0e, 0x0b, 0x0b, 0x06, 0x03, 0x03, 
	0x02, 0x0a, 0x10, 0x06, 0x06, 0x08, 0x08, 0x0c, 
	0x13, 0x12, 0x0f, 0x18, 0x14, 0x12, 0x12, 0x12, 
	0x17, 0x17, 0x17, 0x18, 0x12, 0x12, 0x0f, 0x0f, 
	0x0f, 0x08, 0x0b, 0x0b, 0x03, 0x03, 0x03, 0x02, 
	0x02, 0x02, 0x03, 0x41, 0x05, 0x07, 0x07, 0x08, 
	0x08, 0x0d, 0x31, 0x31, 0x14, 0x11, 0x0f, 0x18, 
	0x1b, 0x1b, 0x1b, 0x11, 0x0f, 0x0f, 0x0d, 0x0d, 
	0x0d, 0x07, 0x06, 0x06, 0x03, 0x03, 0x02, 0x02, 
	0x01, 0x02, 0x02, 0x03, 0x04, 0x05, 0x05, 0x07, 
	0x08, 0x07, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0f, 
	0x31, 0x0d, 0x0d, 0x0d, 0x0d, 0x08, 0x0d, 0x07, 
	0x07, 0x05, 0x05, 0x03, 0x03, 0x02, 0x02, 0x01, 
	0x00, 0x01, 0x02, 0x02, 0x03, 0x03, 0x04, 0x05, 
	0x05, 0x07, 0x07, 0x07, 0x07, 0x07, 0x09, 0x07, 
	0x0d, 0x09, 0x07, 0x07, 0x07, 0x07, 0x07, 0x05, 
	0x05, 0x04, 0x03, 0x03, 0x02, 0x02, 0x01, 0x00, 
	
};

Gfx beat_block_chikachikablock_ai_emm02_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 beat_block_chikachikablock_ai_emm02_ci8_pal_rgba16[] = {
	0x52, 0xed, 0x52, 0xeb, 0x4a, 0xeb, 0x4a, 0xe9, 
	0x4a, 0xa7, 0x42, 0xa7, 0x42, 0xe7, 0x42, 0xa5, 
	0x42, 0xe5, 0x3a, 0xa5, 0x4b, 0x2b, 0x43, 0x27, 
	0x43, 0x25, 0x3a, 0xa3, 0x3a, 0xe5, 0x3a, 0xe3, 
	0x4b, 0x29, 0x3a, 0xa1, 0x3b, 0x23, 0x3b, 0x25, 
	0x32, 0xa1, 0x32, 0x5f, 0x32, 0x9f, 0x32, 0xe1, 
	0x3a, 0xe1, 0x32, 0xdf, 0x2a, 0x5d, 0x32, 0x61, 
	0x2a, 0x9d, 0x2a, 0xdf, 0x2a, 0x5b, 0x2a, 0x9b, 
	0x2a, 0xdd, 0x2a, 0x9f, 0x33, 0x21, 0x33, 0x61, 
	0x2b, 0x1f, 0x33, 0xe1, 0x33, 0x5f, 0x33, 0xa1, 
	0x2b, 0x1d, 0x33, 0xe3, 0x2b, 0x5f, 0x22, 0xdd, 
	0x33, 0x1f, 0x3b, 0x65, 0x22, 0x5b, 0x22, 0x9b, 
	0x22, 0x9d, 0x3a, 0x61, 0x22, 0xdb, 0x23, 0x1d, 
	0x23, 0x1f, 0x34, 0x23, 0x2b, 0xa1, 0x3b, 0x21, 
	0x34, 0x63, 0x34, 0xa5, 0x2b, 0xe3, 0x3b, 0x63, 
	0x2b, 0x9f, 0x23, 0x5f, 0x34, 0x65, 0x2b, 0x61, 
	0x2a, 0x5f, 0x4a, 0xa9, 
};

Vtx beat_block_root_mesh_layer_1_vtx_0[188] = {
	{{{188, 188, 188},0, {-16, 504},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -188, 188},0, {-16, 520},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -163, 163},0, {22, 519},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 163, 163},0, {22, 505},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -188, 188},0, {-16, 504},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -188, -188},0, {1008, 504},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -163, -163},0, {970, 503},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -163, 163},0, {22, 503},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -188, -188},0, {-16, 504},{0x0, 0x81, 0x0, 0xFF}}},
	{{{188, -188, 188},0, {-16, 520},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -188, 163},0, {-54, 519},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -188, -163},0, {-54, 505},{0x0, 0x81, 0x0, 0xFF}}},
	{{{188, -188, 188},0, {-16, 504},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-187, -188, 187},0, {-16, 520},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, -188, 163},0, {-54, 519},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -188, 163},0, {-54, 505},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-187, -188, 187},0, {-16, 504},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{188, -188, 188},0, {1008, 504},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, -163, 188},0, {970, 503},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, -163, 188},0, {22, 503},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{188, -188, 188},0, {-16, 504},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{188, 188, 188},0, {-16, 488},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, 163, 188},0, {-54, 489},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, -163, 188},0, {-54, 503},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{188, 188, -188},0, {1008, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 188, 188},0, {-16, 496},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 163, 163},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 163, -163},0, {1008, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 188, 188},0, {-16, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{188, 188, -188},0, {1008, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, 188, -163},0, {1008, -8},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, 188, 163},0, {-16, -8},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-187, 188, 187},0, {-16, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{188, 188, 188},0, {1008, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, 188, 163},0, {1008, -8},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, 188, 163},0, {-16, -8},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{188, 188, 188},0, {1008, 496},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-187, 188, 187},0, {-16, 496},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, 163, 188},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, 163, 188},0, {1008, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{188, -188, -188},0, {-16, 504},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 163, -163},0, {-54, 489},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -163, -163},0, {-54, 503},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 188, -188},0, {-16, 488},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -163, 163},0, {22, 503},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{188, -163, -163},0, {970, 503},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, -163, -163},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, -163, 163},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, -163, -163},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{188, -163, -163},0, {970, 503},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{188, 163, -163},0, {-54, 489},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, 163, -163},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{188, 163, 163},0, {22, 489},{0x0, 0x0, 0x81, 0xFF}}},
	{{{188, -163, 163},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, -163, 163},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, 163, 163},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-188, -188, -188},0, {-16, 504},{0x0, 0x81, 0x0, 0xFF}}},
	{{{188, -188, -188},0, {-16, 520},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -188, -163},0, {-54, 519},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, -188, -163},0, {-54, 505},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -163, 163},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, -163, -163},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, -188, -163},0, {970, 505},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, -188, 163},0, {-54, 519},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, -163, -163},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, -188, -163},0, {970, 505},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, -188, -163},0, {-54, 519},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, -163, -163},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, -163, 163},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, -163, 163},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, -188, 163},0, {970, 505},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, -188, 163},0, {-54, 519},{0x0, 0x0, 0x81, 0xFF}}},
	{{{188, 163, 163},0, {22, 503},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, 163, 163},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, 163, -163},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{188, 163, -163},0, {970, 503},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, -163, 188},0, {22, 503},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, -163, 188},0, {970, 503},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, -163, 163},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, -163, 163},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, -163, 163},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, -163, 188},0, {970, 503},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, 163, 188},0, {-54, 489},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, 163, 163},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, 188, -163},0, {970, 505},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, 163, -163},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, 188, 163},0, {-54, 519},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, 163, -188},0, {22, 489},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, -163, -163},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, -163, -188},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, 163, -163},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, 188, -163},0, {-54, 519},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, 188, -163},0, {970, 505},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, 163, -163},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, 163, -188},0, {22, 503},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, 163, -163},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, 163, -163},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, 163, -188},0, {970, 503},{0x0, 0x81, 0x0, 0xFF}}},
	{{{188, 188, -188},0, {-16, 504},{0x0, 0x0, 0x81, 0xFF}}},
	{{{188, -188, -188},0, {-16, 520},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, -163, -188},0, {22, 519},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, 163, -188},0, {22, 505},{0x0, 0x0, 0x81, 0xFF}}},
	{{{188, -188, -188},0, {-16, 504},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-188, -188, -188},0, {1008, 504},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, -163, -188},0, {970, 503},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, -163, -188},0, {22, 503},{0x0, 0x0, 0x81, 0xFF}}},
	{{{188, 188, -188},0, {-16, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-188, 188, -188},0, {1008, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, 188, -163},0, {1008, -8},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, 188, -163},0, {-16, -8},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-188, 188, -188},0, {1008, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{188, 188, -188},0, {-16, 496},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, 163, -188},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, 163, -188},0, {1008, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-188, -188, -188},0, {-16, 504},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-188, 188, -188},0, {-16, 488},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, 163, -188},0, {-54, 489},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, -163, -188},0, {-54, 503},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-188, 188, -188},0, {-16, 504},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, -188, -188},0, {-16, 520},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, -163, -163},0, {22, 519},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-187, 163, -163},0, {22, 505},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, -188, -188},0, {-16, 504},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-187, -188, 187},0, {1008, 504},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, -163, 163},0, {970, 503},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, -163, -163},0, {22, 503},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-187, -188, 187},0, {-16, 504},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-188, -188, -188},0, {-16, 520},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, -188, -163},0, {-54, 519},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, -188, 163},0, {-54, 505},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-187, 188, 187},0, {1008, 496},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, 188, -188},0, {-16, 496},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-187, 163, -163},0, {-16, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, 163, 163},0, {1008, 1008},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, 188, -188},0, {-16, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-187, 188, 187},0, {1008, 496},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, 188, 163},0, {1008, -8},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, 188, -163},0, {-16, -8},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, -163, -188},0, {22, 503},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, -163, -188},0, {970, 503},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, -163, -163},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, -163, -163},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, -163, -163},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, -163, -188},0, {970, 503},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, 163, -188},0, {-54, 489},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, 163, -163},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, 188, -163},0, {-54, 519},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, 188, 163},0, {970, 505},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, 163, 163},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, -163, 163},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, -188, 163},0, {970, 505},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, -188, -163},0, {-54, 519},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-188, -163, -163},0, {22, 503},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, -163, 163},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, -163, -163},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-188, -163, 163},0, {970, 503},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-187, 163, -163},0, {22, 489},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-188, -163, -163},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, -163, -163},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, 163, -163},0, {-16, 1008},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-187, 163, -163},0, {22, 503},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, 163, -163},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, 163, 163},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-188, 163, 163},0, {970, 503},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, -163, 163},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-188, 163, 163},0, {-54, 489},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, 163, 163},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-188, -163, 163},0, {970, 503},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, 163, 188},0, {22, 489},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, -163, 163},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, 163, 163},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, -163, 188},0, {-16, 1008},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, 163, 163},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, 188, 163},0, {-54, 519},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, 188, 163},0, {970, 505},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, 163, 163},0, {-16, 1008},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, 163, 188},0, {22, 503},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, 163, 163},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, 163, 163},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, 163, 188},0, {970, 503},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-187, 188, 187},0, {-16, 504},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-187, -188, 187},0, {-16, 520},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, -163, 188},0, {22, 519},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, 163, 188},0, {22, 505},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-187, -188, 187},0, {-16, 504},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-187, 188, 187},0, {-16, 488},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, 163, 163},0, {-54, 489},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, -163, 163},0, {-54, 503},{0x81, 0x0, 0x0, 0xFF}}},
};

Gfx beat_block_root_mesh_layer_1_tri_0[] = {
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 64, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 80, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 6, 4, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 12, 13, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 94, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 110, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 126, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 142, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(0, 7, 8, 0),
	gsSP1Triangle(0, 8, 9, 0),
	gsSP1Triangle(10, 11, 12, 0),
	gsSP1Triangle(10, 13, 11, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 156, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(beat_block_root_mesh_layer_1_vtx_0 + 172, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx beat_block_option_rroot_mesh_layer_1_vtx_0[24] = {
	{{{188, -163, -163},0, {976, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 163, -163},0, {976, 16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 163, 163},0, {16, 16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -163, 163},0, {16, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, -188, -163},0, {16, 16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -188, -163},0, {976, 16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -188, 163},0, {976, 976},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, -188, 163},0, {16, 976},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -163, -188},0, {976, 976},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, -163, -188},0, {16, 976},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, 163, -188},0, {16, 16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, 163, -188},0, {976, 16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, 188, -163},0, {16, 16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, 188, 163},0, {16, 976},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, 188, 163},0, {976, 976},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, 188, -163},0, {976, 16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-188, -163, -163},0, {976, 976},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, 163, 163},0, {16, 16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-187, 163, -163},0, {976, 16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, -163, 163},0, {16, 976},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, -163, 188},0, {976, 976},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, 163, 188},0, {976, 16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, 163, 188},0, {16, 16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, -163, 188},0, {16, 976},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx beat_block_option_rroot_mesh_layer_1_tri_0[] = {
	gsSPVertex(beat_block_option_rroot_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beat_block_option_rroot_mesh_layer_1_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Vtx beat_block_option_broot_mesh_layer_1_vtx_0[24] = {
	{{{188, -163, -163},0, {976, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 163, -163},0, {976, 16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, 163, 163},0, {16, 16},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{188, -163, 163},0, {16, 976},{0x7F, 0x0, 0x0, 0xFF}}},
	{{{-163, -188, -163},0, {16, 16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -188, -163},0, {976, 16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -188, 163},0, {976, 976},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-163, -188, 163},0, {16, 976},{0x0, 0x81, 0x0, 0xFF}}},
	{{{163, -163, -188},0, {976, 976},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, -163, -188},0, {16, 976},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, 163, -188},0, {16, 16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{163, 163, -188},0, {976, 16},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-163, 188, -163},0, {16, 16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-163, 188, 163},0, {16, 976},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, 188, 163},0, {976, 976},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{163, 188, -163},0, {976, 16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-188, -163, -163},0, {976, 976},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, 163, 163},0, {16, 16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-187, 163, -163},0, {976, 16},{0x81, 0x0, 0x0, 0xFF}}},
	{{{-188, -163, 163},0, {16, 976},{0x81, 0x0, 0x0, 0xFF}}},
	{{{163, -163, 188},0, {976, 976},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{163, 163, 188},0, {976, 16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, 163, 188},0, {16, 16},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-163, -163, 188},0, {16, 976},{0x0, 0x0, 0x7F, 0xFF}}},
};

Gfx beat_block_option_broot_mesh_layer_1_tri_0[] = {
	gsSPVertex(beat_block_option_broot_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(beat_block_option_broot_mesh_layer_1_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_beat_block_white[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(beat_block_white_lights),
	gsSPEndDisplayList(),
};

Gfx mat_beat_block_red[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, ENVIRONMENT, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, beat_block_chikachikablock_ai_emm01_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 50),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, beat_block_chikachikablock_ai_emm01_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(beat_block_red_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_beat_block_red[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_beat_block_blue[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, ENVIRONMENT, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, ENVIRONMENT, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, beat_block_chikachikablock_ai_emm02_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 65),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, beat_block_chikachikablock_ai_emm02_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(beat_block_blue_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_beat_block_blue[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx beat_block_root_mesh_layer_1[] = {
	gsSPDisplayList(mat_beat_block_white),
	gsSPDisplayList(beat_block_root_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx beat_block_option_rroot_mesh_layer_1[] = {
	gsSPDisplayList(mat_beat_block_red),
	gsSPDisplayList(beat_block_option_rroot_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_beat_block_red),
	gsSPEndDisplayList(),
};

Gfx beat_block_option_broot_mesh_layer_1[] = {
	gsSPDisplayList(mat_beat_block_blue),
	gsSPDisplayList(beat_block_option_broot_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_beat_block_blue),
	gsSPEndDisplayList(),
};

Gfx beat_block_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
