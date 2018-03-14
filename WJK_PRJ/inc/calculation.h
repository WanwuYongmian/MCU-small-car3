


#ifndef  calculation_H
#define  calculation_H  


//#define TRUE        1
#define SI_SetVal()   PTE4_OUT = 1
#define SI_ClrVal()   PTE4_OUT = 0
#define CLK_ClrVal()  PTE5_OUT = 0
#define CLK_SetVal()  PTE5_OUT = 1


void StartIntegration(void) ;   
void ImageCapture(unsigned char * ImageData) ;
void SendHex(unsigned char hex) ;
void SamplingDelay(void) ;
void CCD_init1(void) ;
void CalculateIntegrationTime(void) ;
uint8 PixelAverage(uint8 len, uint8 *data) ;
void SendImageData(unsigned char * ImageData) ;









#endif
