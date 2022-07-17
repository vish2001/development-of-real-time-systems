#include <Arduino_FreeRTOS.h>
#include <Servo.h>

void Task1(void *param);
void Task2(void *param);
TaskHandle_t Task_handle1;
TaskHandle_t Task_handle2;
Servo myservo1;
Servo myservo2;
int pos = 0;
int pos2 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  xTaskCreate(Task1,"Task1",100,NULL,2,&Task_handle1);
  xTaskCreate(Task2,"Task2",100,NULL,1,&Task_handle2);
  myservo1.attach(9);
  myservo2.attach(10);
}

void loop() {}

void Task1(void *param){
  (void) param;
  while(1){
    Serial.println("Servo_action");
    for (pos = 0; pos <= 180; pos += 30) { // goes from 0 degrees to 180 degrees

    myservo1.write(pos); 
    vTaskDelay(1000/portTICK_PERIOD_MS); 
    }
}
}
void Task2(void *param){
  (void) param;
  while(1){
    Serial.println("Task2");
    for (pos2 = 0; pos2 <= 180; pos2 += 30) { // goes from 0 degrees to 180 degrees
    myservo2.write(pos2); 
    vTaskDelay(1000/portTICK_PERIOD_MS); 
    }
  }
}
