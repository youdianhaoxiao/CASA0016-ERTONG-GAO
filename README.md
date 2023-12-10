# CASA0016 DIY Indoor automatic humidifier

## Motivation
According to statistics, people spend more than 90% of their time indoors.Keeping moisture in the air helps some people with dry skin, and particular attention needs to be paid to their respiratory health. A dry environment not only leads to dry skin, but can also lead to respiratory related illnesses. Therefore, humidifiers play an important role in the health of some people with dry skin as an effective respiratory protection device.

## Aim
The aim of the project is to collect the indoor temperature and humidity in real time, for each parameter a suitable range is set and a Neopixel LED is used to display the colour.
The colours corresponding to the humidity are displayed as follows: (1) When the humidity is less than 50%, this time the LED lights up red. (2) When the humidity is between 50% and 60%, the LED lights green. (3) When the humidity is greater than 60% (here it must be greater than 60% instead of greater than or equal to), the LED lights blue and will automatically shut down.
## Construction of the physical prototype sensor

| Hardware | Description |
| --- | --- |
| Arduino Uno | Useful libraries and has 5v and 3.3v for multiple use, sufficient number of pins for multiple sensors |
| DHT22 | Sensor for temperature and humidity |
| Humidifier Driver Circuit | Heating and atomising moisture |
| Relay (electronics) | Control circuit switching with high and low levels |
| Neopixel strip | 8 RGB LED light bulbs |
| LCD I2C  16x2 | display digitals to visualise the data |


### Detailed assembly

#### Pin connection
| Hardware | Pin | Pin | Pin | Pin | Pin|
| --- | --- | --- | --- | --- | --- |
| DHT22 | VCC->3V3 | DAT->PIN2 | GND->GND|
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
The human body is comfortable with humidity levels between 40% and 60%, so the neopixel displays a red LED if the humidity in the room is less than 50%, a green LED if the humidity in the room is more than 50% and less than 60%, and Greater than 60% will be shown in blue LED.
![e9b741c686f197df19ac35bf087deee](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/a287ff2c-b73d-4c8e-9343-7a2f572f3f9c)
1 photo
2 photo

#### relay (electronics)
The reason I use a relay here is to control the humidifier on/off, and another reason is that if there is a connection problem with any of the components, the relay will also flash red and make an audible sound to alert us that there is a connection problem with one of the components or a short in the wiring.
The relay is used to determine whether to energise the humidifier by judging the high and low potential, when pin4 feeds back to the relay a high potential (corresponding to humidity less than 50%), the relay starts to work and energise the humidifier, when pin4 feeds back a low potential (corresponding to humidity greater than 60%), the relay breaks the circuit, and the humidifier will stop working.
![dca503c75ae08d3438bcbaddd5bce7f](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/097b2025-4331-47c8-8deb-e7a7506d541e)

#### Humidifier Driver Circuit
I use the principle of humidifier module is to use piezoelectric ceramic atomising sheet to produce high frequency resonance, the water into can float 1-5um tiny mist particles, and then catalytic dispersal into the air, and then cotton swabs role is to carry on the water absorption.
![b860f05e3dc0ab5691ed1e7b55077cc](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/db9ad3d3-463e-41cc-9437-1e4cc7891103)
![5cb8d876aa9826d330b7bac676090c0](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/ab8eddb5-abb9-48bf-88bd-d7409d6e1d2b)

#### External power supply
I made a simple external power supply by taking a piece of copper wire and cutting a usb cable short, and proceeded to power the humidifier driver module, because the Arduino uno power supply is weak, so an external power supply is used for powering it.
![3551c6d22dbd589319b5b5536a750d4](https://github.com/youdianhaoxiao/CASA0016-ERTONG-GAO/assets/146217421/6f302473-7e70-43de-aa99-c30e12c06ff4)

## Future Development
1.Add a remote control or mobile app to control the humidifier.
2.Add more atomiser driver modules for faster humidification.


## Reference
https://iaq.works/humidity/indoor-humidity-level-why-is-the-40-60-range-ideal/
https://www.geya.net/what-is-a-relay-module-and-what-does-it-do/
