

#ifndef FINAL_INTERFACE_H_
#define FINAL_INTERFACE_H_


/* MACROS FOR FINGERS ANALOG VALUES */
#define FINGER_1  analogValue7
#define FINGER_2  analogValue6
#define FINGER_3  analogValue5
#define FINGER_4  analogValue4
#define FINGER_5  analogValue2



void FLEX_init(void);
void FLEX_getAnalogValue(void);
void FLEX_translateSign(void);
void FLEX_displyVal(void);




#endif /* FINAL_INTERFACE_H_ */