#ifndef imageio_loop_19_h_
#define imageio_loop_19_h_

/*
*  Jan Prokaj
*  February 13, 2005
*/
#include "imageio.h"

//Reads image data from file, and returns Image via a pointer
//Returns NULL, if anything goes wrong
//Does not handle comments in PGM file!

int writePPMFile_loop_13(int *i, ImageRGB * *image, int *j, FILE * *output, float *maxival, int *re_arg_pa1_13);
int writePPMFileNegative_loop_16(int *i, ImageRGB * *image, int *j, float *value, float *maxval, FILE * *output);
int writePGMFileNegative_loop_8(int *i, Image * *image, int *j, float *value, float *maxval, FILE * *output);
int readPGMFile_loop_3(int *i, char number[], int *c, FILE * *imageFile);
int readPPMFile_loop_12(int *i, ImageRGB * *image, int *j, int *value, FILE * *imageFile);
int readPGMFile_loop_4(int *i, Image * *image, int *j, int *value, FILE * *imageFile);
int readPGMFile_loop_2(int *i, char number[], int *c, FILE * *imageFile);
int readPPMFile_loop_9(int *i, char number[], int *c, FILE * *imageFile);
int writeDATFile_loop_18(int *i, Image * *image, int *j, float *maxival);
int readPPMFile_loop_10(int *i, char number[], int *c, FILE * *imageFile);
int readDATFile_loop_17(int *i, Image * *image, int *j, FILE * *imageFile, int *value);
int writePGMFileNegative_loop_7(int *i, Image * *image, int *j, float *maxival, float *minival);
int writePPMFileNegative_loop_15(int *i, ImageRGB * *image, int *j, float *maxival, float *minival);
int readPPMFile_loop_11(int *i, char number[], int *c, FILE * *imageFile);
int writeDATFile_loop_19(int *i, Image * *image, int *j, float *value, float *maxival, FILE * *output);
int readPGMFile_loop_1(int *i, char number[], int *c, FILE * *imageFile);
int writePGMFile_loop_6(int *i, Image * *image, int *j, float *value, float *maxival, FILE * *output);
int writePGMFile_loop_5(int *i, Image * *image, int *j, FILE * *output, float *maxival, int *re_arg_pa1_5);
int writePPMFile_loop_14(int *i, ImageRGB * *image, int *j, float *value, float *maxival, FILE * *output);

#endif
