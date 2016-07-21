#ifndef BME280_H_
#define BME280_H_

char BME280_GetID();
void BME280_SoftReset();
char BME280_GetStatus();
void BME280_ReadData();
char BME280_GetConfig();
char BME280_GetCtrlMeasurement();
char BME280_GetCtrlHumidity();
void BME280_ReadCalibrationParams();
void BME280_ReadMeasurements();
void BME280_SetOversamplingPressure(char Value);
void BME280_SetOversamplingTemperature(char Value);
void BME280_SetOversamplingHumidity(char Value);
void BME280_SetOversamplingMode(char Value);
void BME280_SetFilterCoefficient(char Value);
void BME280_SetStandbyTime(char Value);
char BME280_IsMeasuring();
float BME280_GetTemperature();
float BME280_GetHumidity();
float BME280_GetPressure();
bool BME280_init();
void BME280_poll();

#endif /* BME280_H_ */`