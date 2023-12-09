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
| relay (electronics) | DC+->5V | DC-->GND | IN->PIN4 | COM->5V(USB input) |NO->5V|
| Humidifier Driver Circuit | GND->GND |
| Neopixel strip | DIN->PIN 7 | 5VDC->5V | GND->GND |
| LCD 16x2 I2C | SDA->SDA | SCL->SCL | VDD->5V | GND->GND |

LCD Display
![c6896fd218497940b51ae25db5b2b7e](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/40cbfa99-96a1-445f-bc73-fce0e9cfe295)
![e0b122edde38b19fd9dd27afc1df210](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/60f680a1-c099-461a-9fba-5b7308c976e0)


#### Outer Case

I used 3d printer to print the LCD holder and neopixel holder,and attached those two on the top of the sensor container.
![a4516b74da1f0c99cb565efcbf46ebe](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/ae144ae0-8651-40ed-ab59-8f1192aeaa7c)
![329601652443b84750fee608575dc43](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/b0271c94-8775-4e75-bf28-48c3d172afc1)
![7aa83fde4fcf2716cf5695162e911ea](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/c6a76acb-c88f-4d39-8db0-a8a31647bfb2)
The humidifier container was made from laser printing, and I did not use a 3D printed proper enclosure because I thought laser printing was less time consuming. I punched holes in the laser printed template so that the sensor could sense the outside air and the power cord could stick out.
1 photo
2 photo
3 photo
4 photo

## Serial monitor results
![fbd7423dffc13afcfb616dc317881c6](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/aac82681-813f-4646-8e3b-005e40e44220)


## Result displayed photos

#### DHT22 Humidity and Temperature
The human body is comfortable with humidity levels between 35% and 60%, so the neopixel displays a red LED if the humidity in the room is less than 35%, a green LED if the humidity in the room is more than 35% and less than 65%, and a blue LED in all other cases.
![e9b741c686f197df19ac35bf087deee](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/a287ff2c-b73d-4c8e-9343-7a2f572f3f9c)
