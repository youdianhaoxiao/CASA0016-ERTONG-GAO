# CASA0016 DIY indoor humidifier device

## Motivation
According to statistics, people spend more than 90% of their time indoors.Keeping moisture in the air helps some people with dry skin, and particular attention needs to be paid to their respiratory health. A dry environment not only leads to dry skin, but can also lead to respiratory related illnesses. Therefore, humidifiers play an important role in the health of some people with dry skin as an effective respiratory protection device.

## Aim

## Construction of the physical prototype sensor

| Hardware | Description |
| --- | --- |
| Arduino Uno | Useful libraries and has 5v and 3.3v for multiple use, sufficient number of pins for multiple sensors |
| DHT22 | Sensor for temperature and humidity |
| Humidifier Driver Circuit | Heating and atomising moisture |
| Relay Modules | Control circuit switching with high and low levels |
| Neopixel strip | 8 RGB LED light bulbs |
| LCD I2C  16x2 | display digitals to visualise the data |


### Detailed assembly

#### Pin connection
| Hardware | Pin | Pin | Pin | Pin | Pin|
| --- | --- | --- | --- | --- | --- |
| DHT22 | VCC->3V3 | IO->PIN2 | GND->GND|
| Humidifier Driver Circuit | DC+->5V | DC-->GND | IN->PIN4 | COM->5V |NO->5V|
| 1 | 1 | 1 | 1 | 1 | 1 |
| Neopixel strip | 1 | 1 | 1 | 1 |
| LCD 16x2 I2C | SDA->SDA | SCL->SCL | VDD->5V | GND->GND |

LCD Display
![c6896fd218497940b51ae25db5b2b7e](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/40cbfa99-96a1-445f-bc73-fce0e9cfe295)
![e0b122edde38b19fd9dd27afc1df210](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/60f680a1-c099-461a-9fba-5b7308c976e0)


#### Outer Case

I used 3d printer to print the LCD holder and neopixel holder,
![068cc9bd0ea1f8b0f0b1c36714ca73d](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/302de0c8-62c7-4b12-a609-bc404f490955)
![8253fe8e870ebfb57b4a9826c4d0470](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/e44c61e6-b3a8-41aa-83b7-56f79015dbd6)

Serial monitor results
