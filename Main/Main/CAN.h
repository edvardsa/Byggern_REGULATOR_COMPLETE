/*
 * CAN.h
 *
 * Created: 17.10.2018 12:24:28
 *  Author: johangh
 */ 


typedef struct{
	uint8_t id;
	uint8_t length;
	uint8_t data[8];
}can_msg;

typedef enum{
	JOYSTICK_X,
	DIFFICULTY,
	JOYSTICK_BUTTON,
	SLIDER_LEFT,
	SLIDER_RIGHT,
	SLIDER_BUTTON_LEFT,
	SLIDER_BUTTON_RIGHT,
	GAME_START
}USB_PACKAGE;

void can_init();

void can_send(can_msg msg);

can_msg can_recieve();

void print_msg(can_msg msg);

// CAN_package: values from the USB board

can_msg CAN_package(uint8_t start_game,uint8_t difficulty);

