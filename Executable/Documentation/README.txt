System Requirements:
	Windows 7 or later operating systems

Program Files:
	1. PUDELstat App.exe (main application)
	2. README.txt
	3. Assembly Parts and Instructions.pdf (detailed instructions on how to build the PUDELstat)
	4. PWM_31kHz.ino (updates Arduino's PWM frequency)
	5. PUDELstat App.aliases
	6. PUDELstat App.ini

Required Software:

	This software requires the NI LabVIEW Runtime 2021 SP1, NI-VISA Runtime 25.1, as well as the drivers from the Arduino IDE.
	This software is available free of charge at the following links:

	http://www.ni.com/en-us.html
	https://www.arduino.cc/en/Main/Software

Software Installation:

	1. Install LabVIEW firmware to Arduino:
		a. Download and install LabVIEW (will only be used once to install the necessary firmware; you may install the Community Edition of LabVIEW or an evaluation copy):
			https://www.ni.com/en-us/support/downloads/software-products/download.labview.html#443310
		b. Download and install the MakerHub Hobbyist Toolkit:
			https://www.ni.com/en-us/support/downloads/tools-network/download.labview-hobbyist-toolkit.html#443255
		c. Connect the fully-assembled PUDELstat to the computer and open LabVIEW
		d. From the LabVIEW menu bar run the firmware wizard: Tools>Hobbyist>Firmware Wizard
		c. Follow the on-screen instructions to upload the firmware, when prompted, select 
			Device Family: Arduino
			Device Type: Arduino Uno
			Firmware Upload Method: Serial/USB

	2. Update the pulse-width modulation (PWM) of the Arduino to 31 kHz; the default frequency (490 Hz) is too low for PWM to be useful with this instrument
		a. Connect the fully-assembled PUDELstat to the computer and open Arduino IDE
		b. From the Arduino IDE menu (File>Open) navigate to and open the necessary PWM_31kHz.ino sketch, included in the installer
		c. Within the PWM_31kHz sketch, upload the code to the Arduino by clicking the right-pointing arrow on the top left-hand side

	3. Open the PUDELstat App.exe executable and start experimenting!


Potentiostat:

	Follow the instructions in the provided Assembly Parts and Instructions PDF.

	Connections to Arduino
		Digital Pin 3: to measure voltage divider (for Ohmic Drop); connect directly to current follower output (same terminal as A2)
		Digital Pin 6: to supply 2.5 V voltage divider with 5V during all techniques except OCP
		Digital Pin 9: for PWM

		Analog Pin A0: for voltage follower/reference electrode
		Analog Pin A2: for current follower/working electrode
		Analog Pin A1: connect directly to working electrode (for OCP)
		Analog Pin A3: to measure potentiometer voltage ratio (for Ohmic Drop); connect directly to output of potentiometer
		Analog Pin A5: connect directly to reference electrode (for OCP)



