

#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_


#define ADC_CHANNEL_0		0
#define ADC_CHANNEL_1		1
#define ADC_CHANNEL_2		2
#define ADC_CHANNEL_3		3
#define ADC_CHANNEL_4		4
#define ADC_CHANNEL_5		5
#define ADC_CHANNEL_6		6
#define ADC_CHANNEL_7		7




/*Main Functions*/
void ADC_init(void);
void ADC_getDigitalValue(u8 channelNum, u16* digitalReading);
void ADC_getAnalogValue(u8 channelNum, u16* analogReading);


#endif /* ADC_INTERFACE_H_ */